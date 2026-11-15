#!/usr/bin/env python3
"""One start of the original RcHcGame.dat under Wine, in the throwaway prefix, straight into a world.

Runs on the host, started by run.sh (isolated environment from env.sh, memory limit, timeout). It
restores the shipped settings in the private copy, applies the launch recipe of
docs/research/startup-and-loop.md section 2.6, starts its own Xvfb and wineserver, starts the game
with Wine's DirectSound trace on, watches the game state in the process memory to find the first
game frame, optionally holds one key, and removes everything it started before it exits.

  refrun.py --name idle-a
  refrun.py --name walk-a --key Up --key-at 20 --key-for 10

Output, all under $REFWINE/logs/<name>/: wine.log (the trace), run.json (clock anchors, state
changes, player position samples), the game's own logs and screenshots.
"""
import argparse
import json
import os
import re
import shutil
import signal
import struct
import subprocess
import sys
import time

GAME_DIR = 'drive_c/RCSPOOK'
EXE = 'RcHcGame.dat'
# docs/research/startup-and-loop.md 1.3, cheats-and-player.md 1.1
APP_PTR = 0x006B915C          # CRCApplication*
APP_GAME = 0x3A4              # CRCGame*
APP_WINDOW = 0x58             # CDaviMainWindow*; +0x59 active flag
GAME_STATE = 0x98             # current game state, 0..7
GAME_SUBLEVEL = 0x60          # CAdamSubLevel*
SUB_PLAYER = 0x360            # CAdamPlayer*
PLAYER_POS = 0x198            # vec3
PLAYER_VEL = 0x180            # vec3, the velocity of the player's movement
KUSER_TICK = 0x7FFE0320       # KUSER_SHARED_DATA.TickCount.LowPart: what Wine's timestamps count
STATES = ['GS_NONE', 'GS_LOADING', 'GS_INTRO', 'GS_GAME', 'GS_RESULTS', 'GS_MENU', 'GS_PAUSE', 'GS_RESTART']
DEFAULT_DEBUG = '+timestamp,+dsound,+dsound3d,+file,+msgbox,+loaddll,+fps,+alsa'


def set_ini(path, values, all_sections=None):
    """Sets keys in a CRLF Latin-1 INI file and keeps every other byte. values: [(section, key, value)].
    all_sections: [(key, value)] set in every section that already has that key."""
    with open(path, 'rb') as f:
        lines = f.read().decode('latin-1').split('\r\n')
    todo = {(s.lower(), k.lower()): (s, k, str(v)) for s, k, v in values}
    every = {k.lower(): str(v) for k, v in (all_sections or [])}
    out = []
    section = None

    def flush_missing():
        if section is None:
            return
        tail = []
        while out and out[-1] == '':
            tail.append(out.pop())
        for key in [k for k in todo if k[0] == section]:
            _, k, v = todo.pop(key)
            out.append(f'{k}={v}')
        out.extend(tail)

    for line in lines:
        m = re.match(r'\s*\[([^\]]*)\]', line)
        if m:
            flush_missing()
            section = m.group(1).strip().lower()
            out.append(line)
            continue
        m = re.match(r'(\s*)([^=;\[]+?)(\s*)=', line)
        if m and section is not None:
            key = m.group(2).lower()
            if (section, key) in todo:
                _, _, v = todo.pop((section, key))
                line = f'{m.group(1)}{m.group(2)}{m.group(3)}={v}'
            elif key in every:
                line = f'{m.group(1)}{m.group(2)}{m.group(3)}={every[key]}'
        out.append(line)
    flush_missing()
    for (s, k, v) in todo.values():          # section was not there at all
        out.extend([f'[{s}]', f'{k}={v}'])
    with open(path, 'wb') as f:
        f.write('\r\n'.join(out).encode('latin-1'))


def find_ci(folder, name):
    for n in os.listdir(folder):
        if n.lower() == name.lower():
            return os.path.join(folder, n)
    raise FileNotFoundError(f'{name} in {folder}')


def apply_launch(game_dir, pristine, world, player, difficulty, game_type):
    """Shipped settings back in place, then the recipe of startup-and-loop.md 2.6 (as source/host/ini.js applyLaunch)."""
    settings = find_ci(game_dir, 'Settings')
    shutil.rmtree(settings)
    shutil.copytree(os.path.join(pristine, 'Settings'), settings)
    shutil.copy2(os.path.join(pristine, 'AdamWin.Ini'), find_ci(game_dir, 'AdamWin.Ini'))
    for n in os.listdir(game_dir):
        if re.fullmatch(r'(?i)(adam(debug|error)\d+\.log|sound\.log|d3ddrv\.log|d3dcache\.log)', n):
            os.remove(os.path.join(game_dir, n))
    set_ini(find_ci(settings, 'Game.ini'), [
        ('Run', 'PlayerNumber', player), ('Run', 'StartLevelNumber', 1),
        ('Run', 'StartSubLevelNumber', world), ('Run', 'StartSubSubLevelNumber', 1)])
    set_ini(find_ci(settings, f'Player{player}.ini'), [
        ('General', 'GameType', game_type), ('General', 'DifficultyLevel', difficulty)])
    set_ini(find_ci(settings, 'Computer.ini'), [
        ('Display', 'AutoSelectDriver', 1), ('Display', 'ForceSelectWindowedMode', 0),
        ('Install', 'Minimal', 0), ('Sound', 'Allowed', 1)])
    set_ini(find_ci(settings, 'Startup.INI'), [('Status', 'LastSectionEntered', '')],
            all_sections=[('Allowed', 1), ('ResultLastRun', 2)])


class Mem:
    def __init__(self, pid):
        self.fd = os.open(f'/proc/{pid}/mem', os.O_RDONLY)

    def read(self, addr, n):
        return os.pread(self.fd, n, addr)

    def u32(self, addr):
        return struct.unpack('<I', os.pread(self.fd, 4, addr))[0]

    def close(self):
        os.close(self.fd)


def read_game(m):
    """(state, active, position, velocity) or Nones while the objects do not exist yet."""
    try:
        app = m.u32(APP_PTR)
        if not app:
            return None, None, None, None
        game = m.u32(app + APP_GAME)
        win = m.u32(app + APP_WINDOW)
        state = m.u32(game + GAME_STATE) if game else None
        active = m.read(win + 0x59, 1)[0] if win else None
        pos = vel = None
        if game:
            sub = m.u32(game + GAME_SUBLEVEL)
            player = m.u32(sub + SUB_PLAYER) if sub else 0
            if player:
                pos = [round(x, 3) for x in struct.unpack('<fff', m.read(player + PLAYER_POS, 12))]
                vel = list(struct.unpack('<fff', m.read(player + PLAYER_VEL, 12)))
        return state, active, pos, vel
    except (OSError, struct.error):
        return None, None, None, None


def parse_script(text):
    """The step script of tools/run-headless.mjs --script: wait:T; hold:Keys,for=S | x<V; tap:Keys; goto:X,Z."""
    steps = []
    for q in [x for x in (text or '').split(';') if x]:
        cmd, _, rest = q.partition(':')
        parts = rest.split(',')
        st = {'cmd': cmd, 'keys': [], 'until': None, 'dur': None, 'max': 15.0, 'text': q}
        if cmd == 'wait':
            st['dur'] = float(parts[0])
        elif cmd == 'goto':
            st['target'] = (float(parts[0]), float(parts[1]))
            st['r'] = 30.0
            st['max'] = 20.0
            parts = parts[1:]
        elif cmd in ('hold', 'tap'):
            st['keys'] = parts[0].split('+')
            if cmd == 'tap':
                st['dur'] = 0.15
        else:
            raise SystemExit(f'bad step {q}')
        for c in parts[1:]:
            mm = re.fullmatch(r'(for|max|r)=([\d.]+)', c)
            pp = re.fullmatch(r'([xyz])([<>])(-?[\d.]+)', c)
            if mm:
                st['dur' if mm.group(1) == 'for' else mm.group(1)] = float(mm.group(2))
            elif pp:
                st['until'] = ('xyz'.index(pp.group(1)), pp.group(2) == '<', float(pp.group(3)))
            else:
                raise SystemExit(f'bad step {q}')
        steps.append(st)
    return steps


class Script:
    """Runs the steps against the game's memory. One call per pass of the sampling loop."""

    def __init__(self, steps, keys, log):
        self.steps, self.keys, self.log = steps, keys, log
        self.at = 0
        self.start = None

    def set(self, st, key, on):
        if on == (key in st['down']):
            return
        if on:
            st['down'].add(key)
            self.keys.press(key)
        else:
            st['down'].discard(key)
            self.keys.release(key)

    def tick(self, now, pos, vel):
        import math
        for _ in range(8):
            if self.at >= len(self.steps):
                return
            st = self.steps[self.at]
            if self.start is None:
                self.start = now
                if st['cmd'] == 'goto':
                    st['down'] = set()
                    self.set(st, 'Up', True)
                elif st['cmd'] != 'wait':
                    for k in st['keys']:
                        self.keys.press(k)
                if st['cmd'] != 'wait':
                    self.log.append({'t': round(now, 3), 'step': st['text'], 'what': 'start', 'pos': pos})
            done, why = False, ''
            if st['cmd'] == 'wait':
                done = now >= st['dur']
            elif st['cmd'] == 'goto':
                if pos is None:
                    return
                tx, tz = st['target'][0] - pos[0], st['target'][1] - pos[2]
                d = math.hypot(tx, tz)
                if d < st['r']:
                    done, why = True, 'reached'
                elif now - self.start >= st['max']:
                    done, why = True, 'TIMEOUT'
                else:
                    vx, vz = (vel[0], vel[2]) if vel else (0.0, 0.0)
                    sp = math.hypot(vx, vz)
                    turn = ''
                    if sp > 50:
                        cross = (vx * tz - vz * tx) / (sp * d)
                        dot = (vx * tx + vz * tz) / (sp * d)
                        if dot < 0.9945:      # 6 degrees
                            turn = 'Left' if cross < 0 else 'Right'
                    self.set(st, 'Left', turn == 'Left')
                    self.set(st, 'Right', turn == 'Right')
                if done:
                    for k in list(st['down']):
                        self.set(st, k, False)
            elif st['until'] is not None:
                axis, less, v = st['until']
                x = pos[axis] if pos else float('nan')
                if (x < v) if less else (x > v):
                    done, why = True, 'reached'
                elif now - self.start >= st['max']:
                    done, why = True, 'TIMEOUT'
            else:
                done = now - self.start >= st['dur']
            if not done:
                return
            if st['cmd'] in ('hold', 'tap'):
                for k in st['keys']:
                    self.keys.release(k)
            if st['cmd'] != 'wait':
                self.log.append({'t': round(now, 3), 'step': st['text'], 'what': 'end', 'why': why, 'pos': pos})
            self.at += 1
            self.start = None


def find_game_pid(prefix):
    """The process that has our copy of the game mapped at its preferred base, in our prefix."""
    want = os.path.join(prefix, GAME_DIR, EXE).lower()
    for name in os.listdir('/proc'):
        if not name.isdigit():
            continue
        try:
            with open(f'/proc/{name}/maps') as f:
                first = f.read(8192)
        except OSError:
            continue
        for line in first.splitlines():
            if line.startswith('00400000-') and line.lower().endswith(want):
                return int(name)
    return None


class Keys:
    """XTEST key events to our Xvfb. python-xlib, host side."""

    def __init__(self, dpy):
        from Xlib import XK, X, display
        from Xlib.ext import xtest
        self.X, self.XK, self.xtest = X, XK, xtest
        self.d = display.Display(dpy)
        self.root = self.d.screen().root
        self.down = set()

    def focus(self):
        """Gives the Wine desktop window the X input focus. The pointer is not moved."""
        best = None
        for w in self.root.query_tree().children:
            g = w.get_geometry()
            if w.get_attributes().map_state == self.X.IsViewable and g.width >= 640:
                best = w
        if best is not None:
            self.d.set_input_focus(best, self.X.RevertToParent, self.X.CurrentTime)
            self.d.sync()
        return best is not None

    def code(self, name):
        return self.d.keysym_to_keycode(self.XK.string_to_keysym(name))

    def press(self, name):
        self.xtest.fake_input(self.d, self.X.KeyPress, self.code(name))
        self.d.sync()
        self.down.add(name)

    def release(self, name):
        self.xtest.fake_input(self.d, self.X.KeyRelease, self.code(name))
        self.d.sync()
        self.down.discard(name)

    def release_all(self):
        for n in list(self.down):
            self.release(n)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--name', required=True)
    ap.add_argument('--world', type=int, default=1)
    ap.add_argument('--player', type=int, default=1)
    ap.add_argument('--difficulty', type=int, default=1)
    ap.add_argument('--game-type', type=int, default=0, help='0 = adventure, 1 = quick play')
    ap.add_argument('--seconds', type=float, default=42.0, help='run this long after the first game frame')
    ap.add_argument('--key', default=None, help='X keysym to hold, e.g. Up')
    ap.add_argument('--key-at', type=float, default=20.0, help='seconds after the first game frame')
    ap.add_argument('--key-for', type=float, default=10.0)
    ap.add_argument('--script', default='', help='step script, as tools/run-headless.mjs --script: "wait:38;goto:1421,3239;tap:Control_L"')
    ap.add_argument('--ini', default='', help=r'extra settings after the launch recipe: "Settings\Player1.ini|Player|Skill|1;file|section|key|value"')
    ap.add_argument('--shot', type=float, action='append', default=None, help='screenshot this long after the first game frame')
    ap.add_argument('--load-timeout', type=float, default=150.0)
    ap.add_argument('--wine-debug', default=DEFAULT_DEBUG)
    ap.add_argument('--screen', default='1024x768x24', help='Xvfb screen')
    ap.add_argument('--desktop', default='1024x768', help='Wine virtual desktop size')
    args = ap.parse_args()
    shots = sorted(args.shot if args.shot is not None else [3.0, args.seconds - 2.0])
    # A timeout from run.sh ends the run through the finally block below, so the cleanup still happens.
    signal.signal(signal.SIGTERM, lambda *_: sys.exit(143))

    prefix = os.environ['WINEPREFIX']
    refwine = os.environ['REFWINE']
    dpy = os.environ['DISPLAY']
    game_dir = os.path.join(prefix, GAME_DIR)
    out = os.path.join(refwine, 'logs', args.name)
    if os.path.isdir(out):
        shutil.rmtree(out)
    os.makedirs(out)
    apply_launch(game_dir, os.path.join(refwine, 'pristine'), args.world, args.player, args.difficulty, args.game_type)
    for q in [x for x in args.ini.split(';') if x]:
        file, sec, key, val = q.split('|')
        path = game_dir
        for part in re.split(r'[\\/]', file):
            path = find_ci(path, part)
        set_ini(path, [(sec, key, val)])
    steps = parse_script(args.script)
    env = dict(os.environ)
    env['WINEDEBUG'] = args.wine_debug
    env['REFWINE_AUDIO_DIR'] = os.path.join(out, 'audio')      # pace.py keeps the stream there

    mono = lambda: time.clock_gettime(time.CLOCK_MONOTONIC)
    boot = lambda: time.clock_gettime(time.CLOCK_BOOTTIME)
    if os.path.exists(f'/tmp/.X11-unix/X{dpy[1:]}') or os.path.exists(f'/tmp/.X{dpy[1:]}-lock'):
        sys.exit(f'display {dpy} is in use')
    xlog = open(os.path.join(out, 'xvfb.log'), 'wb')
    log = open(os.path.join(out, 'wine.log'), 'wb')
    xv = subprocess.Popen(['Xvfb', dpy, '-screen', '0', args.screen, '-nolisten', 'tcp'], stdout=xlog, stderr=xlog)
    game = None
    pid = None
    keys = None
    m = None
    meta = {
        'name': args.name, 'args': vars(args), 'wallStart': time.time(),
        'clockStart': os.environ.get('REFWINE_CLOCK_START'), 'sink': os.environ.get('REFWINE_SINK'),
        'clocks': {'monotonic': mono(), 'boottime': boot()},
        'note': 'all times below are CLOCK_MONOTONIC seconds inside the run (time namespace)',
        'events': [], 'states': [], 'ticks': [], 'samples': [],
        'sampleColumns': ['t', 'state', 'active', 'x', 'y', 'z'],
    }
    shooters = []

    def shoot(label):
        png = os.path.join(out, f'{label}.png')
        try:
            shooters.append(subprocess.Popen(['import', '-display', dpy, '-window', 'root', png],
                                             stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL))
        except OSError:
            pass

    try:
        for _ in range(100):
            if os.path.exists(f'/tmp/.X11-unix/X{dpy[1:]}'):
                break
            time.sleep(0.05)
        meta['events'].append(['launch', mono()])
        game = subprocess.Popen(['wine', 'explorer', f'/desktop=rcspook,{args.desktop}', EXE, '-game'],
                                cwd=game_dir, env=env, stdout=log, stderr=log)
        deadline = mono() + args.load_timeout
        while pid is None and mono() < deadline:
            pid = find_game_pid(prefix)
            if pid is None:
                if game.poll() is not None and mono() > meta['events'][0][1] + 20:
                    break
                time.sleep(0.02)
        if pid is None:
            meta['error'] = 'game process not found'
            shoot('failure')
            return
        meta['pid'] = pid
        meta['events'].append(['process', mono()])
        m = Mem(pid)
        if args.key or steps:
            keys = Keys(dpy)
        meta['script'] = []
        script = Script(steps, keys, meta['script']) if steps else None

        last_state = -1
        t_game = None
        last_sample = 0.0
        last_tick = 0.0
        key_on = key_off = None
        focus_left = 3
        focus_next = 0.0
        end_at = None
        while True:
            now = mono()
            if end_at is not None and now >= end_at:
                break
            if t_game is None and now > deadline:
                meta['error'] = 'load timeout: GS_GAME not reached'
                shoot('failure')
                break
            if not os.path.exists(f'/proc/{pid}/maps'):
                meta['error'] = 'process gone'
                break
            state, active, pos, vel = read_game(m)
            if state is not None and state != last_state:
                meta['states'].append([now, state, STATES[state] if state < len(STATES) else '?'])
                last_state = state
                if state == 3 and t_game is None:
                    t_game = now
                    end_at = now + args.seconds
                    meta['events'].append(['first_game_frame', now])
            if now - last_tick >= 0.25:
                last_tick = now
                try:
                    meta['ticks'].append([mono(), m.u32(KUSER_TICK), boot()])
                except OSError:
                    pass
            if now - last_sample >= 0.05:
                last_sample = now
                meta['samples'].append([round(now, 4), state, active] + (pos or [None, None, None]))
            if t_game is not None:
                rel = now - t_game
                while shots and rel >= shots[0]:
                    shoot(f'shot-{shots.pop(0):05.1f}s')
                if keys is not None:
                    if focus_left and now >= focus_next:
                        keys.focus()
                        focus_left -= 1
                        focus_next = now + 1.0
                    if script is not None:
                        script.tick(rel, pos, vel)
                    if args.key and key_on is None and rel >= args.key_at:
                        keys.press(args.key)
                        key_on = mono()
                        key_off = key_on + args.key_for
                        meta['events'].append(['key_down', key_on, args.key])
                    if args.key and key_off is not None and now >= key_off and args.key in keys.down:
                        keys.release(args.key)
                        meta['events'].append(['key_up', mono(), args.key])
            time.sleep(0.0005)
        for sh in shooters:
            try:
                sh.wait(timeout=10)
            except subprocess.TimeoutExpired:
                sh.kill()
        meta['events'].append(['end', mono()])
    finally:
        if keys is not None:
            try:
                keys.release_all()
                keys.d.close()
            except Exception:
                pass
        if m is not None:
            m.close()
        meta['wallEnd'] = time.time()
        # Our wineserver only: WINEPREFIX points at the throwaway prefix.
        subprocess.run(['wineserver', '-k'], env=env, timeout=20, check=False)
        subprocess.run(['wineserver', '-w'], env=env, timeout=20, check=False)
        if game is not None:
            try:
                game.wait(timeout=5)
            except subprocess.TimeoutExpired:
                game.kill()
        xv.terminate()
        try:
            xv.wait(timeout=5)
        except subprocess.TimeoutExpired:
            xv.kill()
        log.close()
        xlog.close()
        # The game's own logs of this start, and the settings it ran with.
        for n in sorted(os.listdir(game_dir)):
            if re.fullmatch(r'(?i)(adam(debug|error)\d+\.log|sound\.log|d3ddrv\.log|d3dcache\.log)', n):
                shutil.copy2(os.path.join(game_dir, n), os.path.join(out, n))
        try:
            shutil.copytree(find_ci(game_dir, 'Settings'), os.path.join(out, 'Settings-after'))
        except OSError:
            pass
        with open(os.path.join(out, 'run.json'), 'w') as f:
            json.dump(meta, f, separators=(',', ':'))
        print(json.dumps({k: meta.get(k) for k in ('name', 'pid', 'error', 'events', 'states')}))


if __name__ == '__main__':
    main()
