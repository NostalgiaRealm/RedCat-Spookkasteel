#!/usr/bin/env node
// Checks the fixes of source/host/fixes.js (carried over from the JavaScript port). For each fix
// the Node runner plays a scenario of tools/fixes-plugin.mjs twice, with the fix switched off (the
// original game, which must show the fault) and with it on. Also: with every fix off the game's
// memory is the original game's (the save-state pair with --fixes off, 307574ef; with the fixes on the
// hash is another, which the check demands too), and with
// them on a restored game still equals the game that went on.
//   node tools/fixes-check.mjs [--only name,name]
import fs from 'node:fs';
import path from 'node:path';
import { spawn } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { FIX_NAMES, fixFlags } from '../source/host/fixes.js';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const OUT = path.join(ROOT, 'tools/out/fixes');
fs.mkdirSync(OUT, { recursive: true });
const args = process.argv.slice(2);
const only = args.includes('--only') ? args[args.indexOf('--only') + 1].split(',') : null;
const wants = (n) => !only || only.includes(n);
let failed = 0, n = 0;
const check = (ok, what, detail = '') => { n++; if (!ok) failed++; console.log(`${ok ? 'ok  ' : 'FAIL'} ${what}${detail ? '  [' + detail + ']' : ''}`); };
let seq = 0;
const node = (a) => new Promise((resolve) => { const p = spawn('node', ['tools/run-headless.mjs', '--fresh', '--out', path.join(OUT, 'run-' + (++seq)), ...a], { cwd: ROOT }); let log = ''; p.stdout.on('data', (d) => { log += d; }); p.stderr.on('data', (d) => { log += d; }); p.on('close', () => resolve(log)); });
const fx = async (name, a, fixes) => { const log = await node(['--plugin', 'tools/fixes-plugin.mjs', '--fx', name, '--fixes', fixes, ...a]); const q = /^\[fx\] (.*)$/m.exec(log); if (!q) { console.log(log.split('\n').filter((l) => /ERROR|Error/.test(l)).slice(0, 5).join('\n')); return null; } return JSON.parse(q[1]); };
/** The scenario with one fix off (everything else on) and with all on. */
const pair = (name, flag, a) => Promise.all([fx(name, a, flag + '=0'), fx(name, a, 'on')]);
const J = JSON.stringify;

check(FIX_NAMES.length === 15 && FIX_NAMES.every((k) => fixFlags('off')[k] === false && fixFlags('')[k] === true) && fixFlags('doorSound=0').doorSound === false && fixFlags({ towerFire: false }).towerFire === false, 'fifteen flags, all on by default, each can be switched off alone', FIX_NAMES.join(' '));

const jobs = [];
if (wants('bigBeng')) jobs.push(pair('bigbeng', 'bigBeng', ['--world', '4', '--seconds', '200']).then(([off, on]) => {
  check(off && off.before === 0 && off.after === 0x10, 'original: the Caves fairy (trigger_cuts04, 100 potions) gives skill mask 0x10, which nothing reads', J(off));
  check(on && on.after === 4, 'fix: she gives the super shot (mask 4)', J(on));
}));
if (wants('cavesStartSkill')) jobs.push(Promise.all([fx('skill', ['--world', '4', '--quick', '--seconds', '60'], 'cavesStartSkill=0'), fx('skill', ['--world', '4', '--quick', '--seconds', '60'], 'on'), fx('skill', ['--world', '5', '--quick', '--seconds', '60'], 'on'), fx('skill', ['--world', '3', '--quick', '--seconds', '60'], 'on')]).then(([off, on, tower, yard]) => {
  check(off && off.skill === 7, 'original: a Snelspel in the Caves starts with skill mask 7 (the super shot included)', J(off));
  check(on && on.skill === 3, 'fix: it starts with 3', J(on));
  check(tower && tower.skill === 15 && yard && yard.skill === 3, 'the other worlds keep their own start (Graveyard 3, Tower 15)', J([yard, tower]));
}));
if (wants('cutsceneProtect')) jobs.push(Promise.all([...[0, 1].map((k) => fx('cutscene', ['--world', '2', '--seconds', '200'], k ? 'on' : 'cutsceneProtect=0')), fx('godswitch', ['--world', '2', '--seconds', '200'], 'on')]).then(([off, on, sw]) => {
  check(off && off.cutsceneState !== 0 && off.lostDuring === 2, 'original: 2 damage during the Castle\'s opening scene costs 2 health', J(off));
  check(on && on.byteDuring === 2 && on.lostDuring === 0 && on.byteAfter === 0 && on.lostAfter === 2, 'fix: none during the scene, 2 again after it, the god-mode byte back at 0', J(on));
  check(sw && sw.start === 2 && sw.switchedOn === 3 && sw.stateGod === true && sw.toggled === 0 && sw.afterToggle === 2 && sw.afterSecondToggle === 3 && sw.afterCutscene === 1, 'Onsterfelijk and the original\'s own toggle keep their meaning while the host protects', J(sw));
}));
if (wants('fractionalDamage')) jobs.push(Promise.all([fx('dose', ['--world', '4', '--seconds', '60', '--n', '8', '--d', '0.78'], 'fractionalDamage=0'), fx('dose', ['--world', '4', '--seconds', '60', '--n', '8', '--d', '0.78'], 'on'), fx('dose', ['--world', '4', '--seconds', '60', '--n', '4', '--d', '1.9'], 'off'), fx('dose', ['--world', '4', '--seconds', '60', '--n', '4', '--d', '1.9'], 'on'),
  fx('blast', ['--world', '4', '--seconds', '120'], 'off'), fx('blast', ['--world', '4', '--seconds', '120', '--step', '40'], 'off')]).then(([off, on, off19, on19, b60, b25]) => {
  check(off && off.receiver === '4232a0' && off.health[0] === 10 && off.health[1] === 10, 'original: eight explosion doses of 0.78 (6.24 in all) take nothing from an enemy', J(off));
  check(on && on.health[1] === 4 && on.changedForPlayer === 0, 'fix: they take 6; doses for RedCat are passed on as they come', J(on));
  check(off19 && off19.health[1] === 6 && on19 && on19.health[1] === 3, 'four doses of 1.9 (7.6): original 4, fix 7', J([off19, on19]));
  check(b60 && b60.doses > 50 && b60.largest < 1 && b25 && b25.largest > 1, 'a real crate explosion: at 60 frames per second every dose is under 1 (nothing for an enemy), at 25 the largest are over 1', J([b60, b25]));
}));
if (wants('flightSafe')) jobs.push(Promise.all([fx('flight', ['--world', '1', '--seconds', '90', '--to', 'below'], 'flightSafe=0'), fx('flight', ['--world', '1', '--seconds', '90', '--to', 'below'], 'on'), fx('flight', ['--world', '1', '--seconds', '90', '--to', 'out', '--forget', '1'], 'on'), fx('flight', ['--world', '1', '--seconds', '90', '--to', 'floor', '--forget', '1'], 'on')]).then(([off, on, out, floor]) => {
  check(off && off.lostFlying === 2 && !off.flying && off.moveState === 2 && !off.freeAtEnd, 'original: damage while flying, and leaving flight under the floor leaves RedCat falling there', J(off));
  check(on && on.byteFlying === 2 && on.godShown === false && on.lostFlying === 0 && on.exit === 'returned' && on.freeAtEnd && on.moveState === 0 && on.byteAfter === 0 && on.lostAfter === 2, 'fix: no damage while flying, back where he stood, damage again afterwards', J(on));
  check(out && out.exit === 'blocked' && out.flying && out.byteAfter === 2 && out.lostAfter === 0, 'outside the level with no place to go back to: flight and protection stay on', J(out));
  check(floor && floor.exit === 'returned' && floor.freeAtEnd && Math.abs(floor.end[0] - floor.start[0]) < 1 && floor.end[1] > floor.start[1] - 20, 'half in the floor: lifted out of it', J(floor));
}));
if (wants('flightSafe') || wants('godpage')) jobs.push(Promise.all([['on', 'none'], ['on', 'off'], ['on', 'on'], ['on', 'off', '--god', '1'], ['flightSafe=0', 'off']].map(([f, page, ...more]) => fx('godpage', ['--world', '1', '--seconds', '90', '--page', page, ...more], f))).then(([none, off, on, wasOn, orig]) => {
  const menu = (r) => r && r.menuFrames > 60 && r.setter !== 'written';
  check(menu(orig) && orig.flying === 0 && orig.pageCopy === 0 && orig.afterFlight === 0 && orig.lostBy2Damage === 2, 'original (flightSafe off): the game\'s own menu opened with Esc, its cheat page\'s copy of the god-mode byte says "off" while flying', J(orig));
  check(menu(none) && none.flying === 2 && none.byteInMenu === 2 && none.pageCopy === 0 && none.afterFlight === 0 && none.lostBy2Damage === 2, 'fix: while the host protects a flying RedCat the cheat page still says "off" (the byte keeps the protection), and nothing stays behind', J(none));
  check(menu(off) && off.changed === 0 && off.afterMenu === 2 && off.portSaysGod === false && off.afterFlight === 0 && off.lostBy2Damage === 2, 'the entry set to "off" through its own setter 0x534830: not immortal after the flight (was: immortal for good)', J(off));
  check(menu(on) && on.changed === 1 && on.afterMenu === 3 && on.portSaysGod === true && on.afterFlight === 1 && on.lostBy2Damage === 0, 'the entry set to "on": the original\'s SetGodMode(1) at the menu\'s end is the player\'s wish, kept after the flight', J(on));
  check(menu(wasOn) && wasOn.flying === 3 && wasOn.pageCopy === 1 && wasOn.changed === 1 && wasOn.afterMenu === 2 && wasOn.afterFlight === 0 && wasOn.lostBy2Damage === 2, 'Onsterfelijk on, then switched off on the cheat page while flying: off (a 0 written inside the game\'s menu is not read as the toggle)', J(wasOn));
}));
if (wants('doorSound')) jobs.push(Promise.all([fx('door', ['--world', '2', '--seconds', '60', '--door', 'doorhallway02_01'], 'doorSound=0'), fx('door', ['--world', '2', '--seconds', '60', '--door', 'doorhallway02_01'], 'on'), fx('door', ['--world', '2', '--seconds', '60', '--door', 'secretdoor01'], 'on'), fx('door', ['--world', '3', '--seconds', '90', '--door', 'heg2_mc'], 'on'), fx('door', ['--world', '3', '--seconds', '90', '--door', 'mazedeur1_dm'], 'on'), fx('door', ['--world', '2', '--seconds', '60', '--door', 'doorhallway01_01'], 'on')]).then(([off, on, secret, hedge, exit, typed]) => {
  check(off && off.type === 4 && off.played.join() === 'EMPTY.WAV', 'original: a DoorType 4 door of the Castle plays empty.wav', J(off));
  check(on && on.played.join() === 'OPENDOORNORMAL.WAV' && on.typeAfter === 4 && on.state === 6, 'fix: it plays the normal door sound, and is DoorType 4 again afterwards', J(on));
  check(secret && secret.played.join() === 'EMPTY.WAV,OPENDOORSECRET.WAV', 'a secret door whose own command plays the level\'s secret-door sound keeps that alone', J(secret));
  check(hedge && hedge.played.join() === 'EMPTY.WAV' && exit && exit.played.join() === 'OPENDOORNORMAL.WAV' && typed && typed.type === 1, 'the maze\'s hedge door stays silent, its exit door is heard, a DoorType 1 door is untouched', J([hedge, exit, typed]));
}));
if (wants('towerFire')) jobs.push(Promise.all([pair('fire', 'towerFire', ['--world', '5', '--seconds', '60']), fx('fairy', ['--world', '4', '--seconds', '60'], 'off')]).then(([[off, on], fairy]) => {
  check(off && off.volumes.filter((v) => v === -795).length >= 8, 'original: at the start of the Tower eight or more fire loops are at full distance gain (-795) at once', J(off));
  check(on && on.volumes.length === off.volumes.length && Math.max(...on.volumes) <= -795 - 374 && on.volumes.filter((v) => v > -10000).length >= 8 && new Set(on.volumes).size > 5, 'fix: every one at least 3.7 dB lower, each by its own distance', J(on));
  check(fairy && fairy.loopPlaying && fairy.fairyThrough3d === 0 && fairy.level === -1795 && fairy.levelChanges === 0 && fairy.calls3d > 1000, 'the fairy\'s loop is not a 3D sound in the original: same level with RedCat 6000 units away (why "fairy from 3x the distance" is not carried over)', J(fairy));
}));
if (wants('musicContinuity')) jobs.push(pair('music', 'musicContinuity', ['--world', '1', '--seconds', '80']).then(([off, on]) => {
  const stop = off && off.events[0], again = off && off.events[1];
  check(off && stop[0] === 'stop' && stop[1] > 15 * off.bytesPerSecond && again[0] === 'play' && again[1] === 0, 'original: after a fight the level music starts again at its beginning', J(off));
  check(on && on.events[1][0] === 'play' && on.events[1][1] === on.events[0][1] && on.playing, 'fix: it goes on where it stopped', J(on));
}));
if (wants('mazeReset')) jobs.push(pair('maze', 'mazeReset', ['--world', '3', '--seconds', '400']).then(([off, on]) => {
  check(off && off.start.counts === '00000' && off.walked.counts === '11111' && off.afterDeath.counts === '11111' && J(off.afterDeath.hedges) === J(off.walked.hedges) && off.afterDeath.enabled === '11111' && off.lives === 2, 'original: after a death the maze\'s five triggers are used up and its hedges stay where the first walk left them', J(off && off.afterDeath));
  check(on && on.resets === 1 && on.afterDeath.counts === '00000' && on.afterDeath.enabled === on.start.enabled && J(on.afterDeath.hedges) === J(on.start.hedges) && on.afterDeath.door === 1, 'fix: triggers, hedges and hedge door are as at the start', J(on && on.afterDeath));
  check(on && on.resets === 1 && on.afterDeath.counts === '00000' && on.second.counts === '11111' && J(on.second.hedges) === J(on.walked.hedges) && J(on.second.hedges) !== J(on.afterDeath.hedges), 'and a second walk opens the maze again (from triggers that were reset: all five counts went from 0 to 1 and the hedges moved)', J(on && on.second));
}));
if (wants('wallTrim')) jobs.push(pair('trim', 'wallTrim', ['--world', '3', '--seconds', '120']).then(([off, on]) => {
  check(off && off.perFrame === 0 && on && on.perFrame === 2 && on.handles >= 1, 'the Graveyard\'s two wall strips: found by the gates\' bitmap, two world polygons a frame drawn with every texel; none with the fix off', J([off, on]));
}));
// The hand torches (source/host/torches.js): RedCat is put between the Graveyard's entrance hands (authored flames) and in the
// Castle's hall of hands (no flames in the original). The scenario measures by itself, from game memory and the driver's calls.
if (wants('handTorches')) jobs.push(Promise.all([pair('torch', 'handTorches', ['--world', '3', '--seconds', '120', '--at', '1616,65,3410']), pair('torch', 'handTorches', ['--world', '2', '--seconds', '300', '--at', '-81,281,-2960'])]).then(([[yOff, yOn], [cOff, cOn]]) => {
  check(yOff && yOff.hands === 24 && yOff.swing > 15 && yOff.wickFromFlameOrigin > 12 && yOff.birthFromWick > 12 && yOff.birthHeightError > 3 && yOff.during.warmMax === 0 && yOff.module.hands === 0 && yOff.module.lights === 0,
    'original, Graveyard: 24 hand torches; the nearest lit one sways over 15 units while its flame is born where the level has it, up to 12 or more from the wick; no hand gives light', J(yOff));
  check(yOn && yOn.module.hands === 24 && yOn.module.bound === 16 && yOn.module.pools === 8 && yOn.module.skipped === 0 && yOn.swing === yOff.swing && yOn.birthFromWick <= 1.5001 && yOn.birthHeightError < 0.001,
    'fix, Graveyard: 16 authored flames paired with their hands, each of the fifteen birth places within the emitter\'s own StartRadius (1.5) of the wick, at its height + 3', J(yOn));
  check(yOn && yOff && yOn.during.warmMin >= 1 && yOn.during.warmMax <= 8 && yOn.module.lights >= 1 && yOn.between.warm === 0 && yOn.between.active === yOff.between.active && yOn.between.bad + yOn.during.bad + yOff.between.bad === 0,
    'fix: 1 to 8 warm lights (191 102 26, radius 150) in the engine\'s table while the world is drawn, none between two passes, and the table\'s count equals its slots in use throughout', J([yOn && yOn.during, yOn && yOn.between]));
  check(cOff && cOff.hands === 8 && cOff.near === 8 && cOff.height[0] === 17.273 && cOff.height[1] === 17.273 && cOff.swing > 15 && cOff.during.warmMax === 0 && cOff.module.polys === 0,
    'original, Castle: 8 hand torches swaying, the wick 17.273 above the actor\'s origin throughout, no flame of their own and no light', J(cOff));
  check(cOn && cOff && cOn.module.hands === 8 && cOn.module.bound === 0 && cOn.module.pools === 8 && cOn.module.polys > 20 && cOn.module.polys <= 8 * 15 && cOn.during.warmMin === 8 && cOn.between.warm === 0 && cOn.miscPolys > cOff.miscPolys + 1,
    'fix, Castle: all 8 have a flame (20 to 120 polygons a frame handed to the engine\'s own geWorld_AddPolyOnce, more reach the driver than without) and a light', J(cOn));
}));
// Graveyard AdamAnyActor131 (no MotionName in the level) beside RedCat, and the paths a normal run does not reach (scenario torchx)
if (wants('handTorches')) jobs.push((async () => {
  const yard = ['--world', '3', '--seconds', '200', '--at', '1616,65,3410'], x = (what, fixes, a = yard) => fx('torchx', [...a, '--do', what], fixes);
  const [still, sway, level, moved, shot, poke, full, fullOff, fullCastle] = await Promise.all([fx('torch', ['--world', '3', '--seconds', '200', '--at', '-800,620,-716'], 'handTorches=0'), fx('torch', ['--world', '3', '--seconds', '200', '--at', '-800,620,-716', '--then', 'off'], 'on'),
    x('places', 'handTorches=0'), x('places', 'on'), x('shot', 'on'), x('poke', 'on'), x('full', 'on'), x('full', 'handTorches=0'), x('full', 'on', ['--world', '2', '--seconds', '300', '--at', '-81,281,-2960'])]);
  check(still && still.swing === 0 && still.nearestHeight === 19.878 && J(still.nearestMotion) === '[0,0,1]' && still.module.motions === 0,
    'original, Graveyard: the hand without a MotionName (AdamAnyActor131) stands still in its rest pose, the wick 19.878 above its origin', J(still && [still.swing, still.nearestHeight, still.nearestMotion]));
  check(sway && sway.module.motions === 1 && sway.swing > 15 && J(sway.nearestMotion) === '[4,1,1]' && sway.birthFromWick <= 1.5001 && sway.birthHeightError < 0.001,
    'fix: that one hand gets the motion "anim" at speed 1 through the game\'s own set-motion (0x4A06B0) and sways like the others, its flame on the wick', J(sway && [sway.swing, sway.nearestMotion, sway.module.motions, sway.birthFromWick]));
  check(sway && sway.off && level && sway.off.swing === 0 && J(sway.off.motion) === '[0,0,1]' && sway.off.places === level.all,
    'the flag switched off in the running game: the hand has no motion again and stands still, and every emitter of the level has its own fifteen birth places', J(sway && sway.off) + ' level ' + (level && level.all));
  check(level && moved && shot && level.all !== moved.all && shot.one === moved.one && shot.handGone && shot.handsAfter === 23 && shot.emitterThere && shot.oneAfter === level.one && shot.scenesOn === shot.framesOn && shot.lightsNow >= 1,
    'a hand with an authored flame that is destroyed (1000 damage through the dispatch 0x503FC0): its emitter has the level\'s own birth places again, and the other 23 go on', J(shot));
  check(poke && poke.emitters === 16 && poke.keptRecords === 16 && poke.floatsChanged === 1 && poke.elsewhere === 0 && poke.wrongAfterOff === 0,
    'one float of a moved birth place changed as if by the game: the host pairs again and keeps the level\'s own places of all sixteen emitters but that one float; off puts them back', J(poke));
  check(full && fullOff && fullCastle && [full, fullCastle].every((r) => r.filled.count === 30 && r.during.warmMin === 2 && r.during.warmMax === 2 && r.during.activeMax === 32 && r.during.bad === 0 && r.betweenBad === 0 && r.after.count === r.before.count && r.after.active === r.before.active && r.lightsNowAfter >= 7) && fullOff.during.activeMax === 30 && fullOff.during.warmMax === 0,
    'the engine\'s light table filled to 30 of 32 by the game\'s own geWorld_AddLight: two torches get the two free slots, no slot of the game is taken, the count equals the slots in use, and the lights are back when the table is free again', J([full && full.during, fullCastle && fullCastle.during]));
})());
// and a game saved with the hands' flames and lights in view equals itself when restored (the pools and the authored birth places are a part of a state)
if (wants('handTorches') || wants('state')) jobs.push((async () => {
  const hash = (log) => (/hash 300 passes later: (\w+)/.exec(log) || [])[1];
  const run = (a) => node(['--plugin', 'tools/fixes-plugin.mjs', '--fx', 'torch', '--hold', '1', '--seconds', '400', '--hash-after', '300', ...a]).then(hash);
  const sc = path.join(OUT, 'torch-castle.bin'), sy = path.join(OUT, 'torch-yard.bin');
  const [c1, y1] = await Promise.all([run(['--world', '2', '--at', '-81,281,-2960', '--save-at', '2000', '--state', sc]), run(['--world', '3', '--at', '1616,65,3410', '--save-at', '900', '--state', sy])]);
  const [c2, y2, yOff] = await Promise.all([run(['--world', '1', '--restore', sc]), run(['--world', '5', '--restore', sy]), run(['--world', '3', '--at', '1616,65,3410', '--save-at', '900', '--state', path.join(OUT, 'torch-yard-off.bin'), '--fixes', 'handTorches=0'])]);
  check(!!c1 && c1 === c2 && !!y1 && y1 === y2 && !!yOff && yOff !== y1, 'hand torches in view (Castle: the host\'s flames; Graveyard: moved flames and lights): the restored game equals the game that went on, and the flag shows in the memory', `Castle ${c1} ${c2}; Graveyard ${y1} ${y2}, flag off ${yOff}`);
})());
if (wants('soundRelease')) jobs.push(pair('sounds', 'soundRelease', ['--world', '1', '--seconds', '200']).then(([off, on]) => {
  const MB = 1048576;
  check(off && off.before.loose === 0 && off.after.loose > 5 && off.after.looseBytes > 2 * MB && off.after.music.some(([use, playing]) => use === 1 && !playing) && off.later.heap > off.before.heap + 15 * MB && off.stats.sounds === 0,
    'original: after the change from the Forest to the Castle the sound manager holds channels no definition refers to, the Forest\'s music is still in the music list with nothing else referring to it, and the heap is over 15 MB larger', J(off));
  check(on && on.after.loose === 0 && on.after.channels === on.after.defs && on.after.count === on.after.channels && on.after.music.every(([use, playing]) => use > 1 || playing) && on.stats.music >= 1 && on.stats.sounds === off.after.loose + on.stats.music && on.later.heap < off.later.heap - 10 * MB && on.later.heap < on.before.heap + 10 * MB,
    'fix: every channel has its definition, the music list holds only what is referred to or playing, and the heap is over 10 MB smaller than the original\'s', J(on));
}));
if (wants('state')) jobs.push((async () => {
  const st = path.join(OUT, 'pair.bin'), hash = (log) => (/hash 300 passes later: (\w+)/.exec(log) || [])[1];
  // The hash is of all the memory a state holds (run-headless.mjs memHash: low memory, image, heap and the pages with the
  // game's own heap, where the player lives). 307574ef is world 1 with every fix off; the reviewers of 2026-11-14 found the
  // build before the fixes and this one with the fixes off equal over image, heap and pages in all five worlds.
  const a = hash(await node(['--save-at', '900', '--state', st, '--hash-after', '300', '--fixes', 'off'])), b = hash(await node(['--world', '5', '--restore', st, '--hash-after', '300', '--fixes', 'off']));
  check(a === '307574ef' && b === a, 'every fix off: the save-state pair of world 1 prints the hash of the original game, 307574ef, twice', a + ' ' + b);
  // and the hash can tell off from on: inside the Castle's opening scene the fixes hold RedCat's god-mode byte
  const stOff = path.join(OUT, 'pair-off2.bin');
  const [o2, n2, n1] = await Promise.all([node(['--world', '2', '--save-at', '300', '--state', stOff, '--hash-after', '300', '--fixes', 'off']), node(['--world', '2', '--save-at', '300', '--state', path.join(OUT, 'pair-on2.bin'), '--hash-after', '300']), node(['--save-at', '900', '--state', path.join(OUT, 'pair-on1.bin'), '--hash-after', '300'])].map((q) => q.then(hash)));
  check(o2 === '78521a53' && !!n2 && n2 !== o2 && !!n1 && n1 !== a, 'the hash sees the fixes: inside the Castle\'s opening scene, and in world 1 (the Caves\' Snelspel start is in every world\'s memory), off and on differ', `world 2 off ${o2} on ${n2}; world 1 off ${a} on ${n1}`);
  const st2 = path.join(OUT, 'pair2.bin');
  const c = hash(await node(['--world', '2', '--save-at', '300', '--state', st2, '--hash-after', '300'])), d = hash(await node(['--world', '1', '--restore', st2, '--hash-after', '300']));
  check(!!c && c === d, 'fixes on, saved inside the Castle\'s opening scene (RedCat protected): the restored game equals the game that went on', c + ' ' + d);
})());
// skyBackdrop, smoothSprites and hudShape are picture only (gdriver.js, smooth.js): with the two off the game's memory is the one
// with everything on, in a run with a renderer that takes every texture (the Node runner has none, and without one
// the driver converts nothing). What they draw is checked by tools/effects-check.mjs.
if (wants('skyBackdrop') || wants('smoothSprites') || wants('hudShape') || wants('picture')) jobs.push((async () => {
  const hash = (log) => (/hash 300 passes later: (\w+)/.exec(log) || [])[1], seen = (log) => JSON.parse((/^\[looker\] (.*)$/m.exec(log) || [0, 'null'])[1]);
  const a = ['--plugin', 'tools/fixes-plugin.mjs', '--fx', 'looker', '--save-at', '900', '--hash-after', '300'];
  const [on, off] = await Promise.all([node([...a, '--state', path.join(OUT, 'pic-on.bin')]), node([...a, '--state', path.join(OUT, 'pic-off.bin'), '--fixes', 'skyBackdrop=0,smoothSprites=0'])]);
  const q = seen(on), r = seen(off);
  check(hash(on) === '8f54e89b' && hash(off) === hash(on) && !!q && !!r && q.sky > 100 && q.smoothed > 0 && r.sky === 0 && r.smoothed === 0, 'skyBackdrop and smoothSprites on or off: the same game memory (8f54e89b), while the driver drew the sky backdrop and smoothed textures only with them on', `${hash(on)} ${hash(off)}; on ${J(q)}, off ${J(r)}`);
  // hudShape (gdriver.js, RenderMiscTexturePoly): nothing to do in a 4:3 mode; in a mode of 854 x 480 the driver gives
  // the 2D bitmaps another width in its own copy, and the game's memory is the one of that mode without the flag
  check(!!q && q.reshaped === 0 && q.bitmaps > 100 && q.strangers === 0, 'hudShape in a 4:3 mode: the driver knows the 2D bitmaps by the game\'s stack and changes none', J(q));
  const w = [...a, '--width', '854'];
  const [won, woff] = await Promise.all([node([...w, '--state', path.join(OUT, 'pic-wide-on.bin')]), node([...w, '--state', path.join(OUT, 'pic-wide-off.bin'), '--fixes', 'hudShape=0'])]);
  const wq = seen(won), wr = seen(woff);
  check(!!hash(won) && hash(won) === hash(woff) && hash(won) !== hash(on) && !!wq && !!wr && wq.reshaped > 100 && wr.reshaped === 0 && wr.bitmaps === wq.bitmaps, 'hudShape on or off in a mode of 854 x 480: the same game memory, while the driver changed the width of 2D bitmaps only with it on', `${hash(won)} ${hash(woff)}; on ${J(wq)}, off ${J(wr)}`);
})());

// The readable subtitle box (source/host/subtitles.js) is picture only: the Castle's opening scene with its lines, to after the scene
if (wants('subtitle')) jobs.push((async () => {
  const hash = (log) => (/hash 2200 passes later: (\w+)/.exec(log) || [])[1];
  const a = ['--world', '2', '--seconds', '120', '--fixes', 'off', '--save-at', '300', '--hash-after', '2200'];
  const [plain, box] = await Promise.all([node([...a, '--state', path.join(OUT, 'sub-a.bin')]), node([...a, '--state', path.join(OUT, 'sub-b.bin'), '--subtitle-box'])]);
  const lines = box.split('\n').filter((l) => /^\[subtitle [\d.]+\] "./.test(l)).length;
  check(!!hash(plain) && hash(plain) === hash(box) && lines >= 3 && !/subtitles: the cutscene draw is not as expected/.test(box), 'the subtitle box on or off: the same game memory after the Castle\'s opening scene (the original draws its line in full, the driver leaves the letters out)', `${hash(plain)} ${hash(box)}, ${lines} lines`);
})());
await Promise.all(jobs);
console.log(`\n${n - failed} of ${n} checks passed`);
process.exit(failed ? 1 : 0);
