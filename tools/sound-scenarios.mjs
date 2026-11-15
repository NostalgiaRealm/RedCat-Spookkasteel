#!/usr/bin/env node
// Runs the scripted input scenarios of tools/sound-scenarios.txt in the port (Node runner, virtual
// clock) and compares each with the reference of the original under Wine, when that exists
// (evidence/reference-wine/dsound-in-<name>.json, made by tools/reference-wine/scenarios.sh).
//   node tools/sound-scenarios.mjs [name ...] [--step ms] [--no-compare] [--fixes on|name=1,...]
// The port runs with every fix of source/host/fixes.js off, because the reference is the original game
// (a fix that is on shows as a difference: the Tower's fire loop at -1417 against -795). --fixes on runs
// the port as players get it.
// Output per scenario in tools/out/input/: <name>.json (sound trace), <name>.wav (rendered mix),
// <name>.pos.json (player positions), <name>.steps.json (when each step ended and where), <name>.log.
import fs from 'node:fs';
import path from 'node:path';
import { spawn, spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const args = process.argv.slice(2);
const opt = (name, def) => { const k = args.indexOf('--' + name); return k < 0 ? def : args[k + 1]; };
const step = opt('step', null);
const fixes = opt('fixes', 'off');
const names = args.filter((a, k) => !a.startsWith('--') && args[k - 1] !== '--step' && args[k - 1] !== '--fixes');
const INI = 'Settings\\Player1.ini|Player|Skill|1';
const scenarios = fs.readFileSync(path.join(ROOT, 'tools/sound-scenarios.txt'), 'utf8').split('\n').filter((l) => l && !l.startsWith('#'))
  .map((l) => { const [name, world, seconds, script] = l.split('|'); return { name, world: Number(world), seconds: Number(seconds), script }; })
  .filter((s) => !names.length || names.includes(s.name));
const out = path.join(ROOT, 'tools/out/input');
fs.mkdirSync(out, { recursive: true });

const run = (s) => new Promise((resolve) => {
  const f = (ext) => path.join(out, `${s.name}.${ext}`);
  const a = ['tools/run-headless.mjs', '--seconds', String(s.seconds + 1.2), '--fresh', '--out', path.join(out, 'run-' + s.name), '--world', String(s.world), '--ini', INI,
    '--script', s.script, '--sound-log', f('json'), '--sound-wav', f('wav'), '--positions', f('pos.json'), '--script-log', f('steps.json'), '--check-sound'];
  if (step) a.push('--step', step);
  if (fixes !== 'on') a.push('--fixes', fixes);
  const p = spawn('node', a, { cwd: ROOT });
  let log = '';
  p.stdout.on('data', (d) => { log += d; }); p.stderr.on('data', (d) => { log += d; });
  p.on('close', (code) => { fs.writeFileSync(f('log'), log); resolve({ s, code, log }); });
});
const results = await Promise.all(scenarios.map(run));
let bad = 0;
for (const { s, code, log } of results) {
  console.log(`\n=== ${s.name}: world ${s.world}, ${s.seconds} s${step ? `, ${step} ms per frame` : ''}, fixes ${fixes}`);
  const err = /ERROR[^\n]*/.exec(log);
  if (err) { console.log('  ' + err[0]); bad++; }
  const check = /sound check[^\n]*/.exec(log);
  if (check) console.log('  ' + check[0]);
  if (code && !err) bad++;
  const stepsFile = path.join(out, s.name + '.steps.json');
  const refSteps = path.join(ROOT, 'evidence/reference-wine', `in-${s.name}.steps.json`);
  if (fs.existsSync(stepsFile)) {
    const mine = JSON.parse(fs.readFileSync(stepsFile, 'utf8')).steps.filter((e) => e.what === 'end');
    const theirs = fs.existsSync(refSteps) ? JSON.parse(fs.readFileSync(refSteps, 'utf8')).filter((e) => e.what === 'end') : [];
    const fmt = (e) => (e ? `${e.t.toFixed(2).padStart(6)} s${e.why ? ' ' + e.why : ''} at ${e.pos ? e.pos.map((x) => x.toFixed(0)).join(',') : '-'}` : '-');
    console.log('  steps (end of each): port | original');
    mine.forEach((e, k) => console.log(`    ${e.step.padEnd(28)} ${fmt(e).padEnd(42)} | ${fmt(theirs[k])}`));
  }
  const ref = path.join(ROOT, 'evidence/reference-wine', `dsound-in-${s.name}.json`);
  if (args.includes('--no-compare') || !fs.existsSync(ref)) { if (!fs.existsSync(ref)) console.log('  no reference yet: ' + path.relative(ROOT, ref)); continue; }
  const c = spawnSync('node', ['tools/sound-compare.mjs', path.join(out, s.name + '.json'), ref, '--window', String(s.seconds - 2), '--tolerance', '1.0', '--all'], { cwd: ROOT, encoding: 'utf8' });
  console.log(c.stdout.split('\n').filter((l) => l && !/^(empty\.wav|rcgen|flgen)/.test(l)).map((l) => '  ' + l.slice(0, 260)).join('\n'));
  const wav = path.join(ROOT, 'tools/out/reference-wine/audio', `in-${s.name}.wav`);
  if (fs.existsSync(wav)) {
    const zero = JSON.parse(fs.readFileSync(stepsFile, 'utf8')).zero;
    const l = spawnSync('node', ['tools/sound-levels.mjs', path.join(out, s.name + '.wav'), wav, '--skip-a', String(zero), '--seconds', String(s.seconds - 2)], { cwd: ROOT, encoding: 'utf8' });
    console.log('  ' + l.stdout.trim().split('\n').pop());
  }
}
process.exitCode = bad ? 1 : 0;
