// Plugin for tools/run-headless.mjs (--plugin), used by tools/savestate-check.mjs: Muziek and
// Geluidseffecten of a running game (source/host/volume.js).
//   --vol-at N         the pass at which --vol-set is asked (default 600)
//   --vol-set M,E      host.volume.request(M, E) and keep(): the settings over a running game, OK
//   --vol-report N     at pass N: one line "[vol] {json}" with every playing sound's level (hundredths of a
//                      decibel, as DirectSound has it), the file's two keys, and how often the setters were called
import { readIni, latin1Decode } from '../source/host/ini.js';
export default function ({ m, host, game, opt, stop }) {
  const at = Number(opt('vol-at', 600)), report = Number(opt('vol-report', 900)), set = opt('vol-set', null);
  host.mainLoop.beforePass.unshift(() => {
    const n = host.mainLoop.passes;
    if (set && n === at) { const [mu, ef] = set.split(',').map(Number); host.volume.request(mu, ef); host.volume.keep(); }
    if (n !== report) return;
    const t = latin1Decode(game.vfs.readAll('C:\\REDCAT\\SETTINGS\\PLAYER1.INI'));
    const playing = [...host.dsound.buffers].filter((b) => b.playing).map((b) => [b.file.split('\\').pop().toUpperCase(), b.volume]).sort((a, b) => (a[0] < b[0] ? -1 : a[0] > b[0] ? 1 : a[1] - b[1]));
    console.log('[vol] ' + JSON.stringify({ playing, file: [readIni(t, 'Sound', 'MusicVolume'), readIni(t, 'Sound', 'SoundVolume')], calls: host.volume.stats.calls, kept: host.volume.stats.kept }));
    stop();
  });
}
