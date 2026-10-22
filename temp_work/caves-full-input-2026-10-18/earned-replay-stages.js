// Observed normal-input segments from the earned campaign, 2026-10-18.
// Load after earned-input-helpers.js in the controlled-frame driver.
// This file only defines functions. It never imports a save or edits game state.
// Call ONE stage at a time and inspect its returned status. The complete file
// has not been replayed automatically end-to-end; live-commands.jsonl and the
// exported traces remain the authoritative evidence for the successful run.
// Ordinary saves/retries are separate player actions, deliberately not hidden.
globalThis.__cavesStages = {};
const cs = globalThis.__cavesStages;
cs.check = () => {
  const s = __cavesStatus();
  if (s.level !== 'lvl03a' || s.mode !== 'playing' || s.state.health <= 0 || s.scene || s.noClip)
    throw Error('Stage requires living, ordinary Caves gameplay: ' + JSON.stringify(s));
  return s;
};
cs.near = (x, z, radius = 80) => {
  const s = cs.check();
  if (Math.hypot(s.p[0] - x, s.p[2] - z) > radius)
    throw Error('Wrong stage start: ' + JSON.stringify(s));
};
cs.fans = () => ['wind01', 'wind02'].map(n => __redcat.gameplay.find(n)[0].enabled);
cs.requireFans = (one, two) => {
  const f = cs.fans();
  if (f[0] !== one || f[1] !== two) throw Error('Inspect fan button contact: ' + JSON.stringify(f));
};
cs.rock = i => {
  const g = __redcat.gameplay;
  return g.scripts.modelTransforms.get(g.find('air_rock' + String(i).padStart(2, '0'))[0].modelIndex).translation;
};
cs.requireContact = model => {
  if (!__redcat.world.player.contacts.has(model)) throw Error('Inspect platform landing: ' + JSON.stringify(cs.check()));
};

// First-basin secret: stand on the lower floor at x~-1520,z2298 before firing.
// A shot from x~-1320 caused lethal chained explosions in the retained retry.
cs.waterSecret = async () => {
  cs.check();
  await __cavesWalkHeight([-1520, 2298], {step:24, maxDrop:320});
  await __cavesWait(10);
  await __cavesFace([-1263, 2298]);
  await __cavesStep(['ControlLeft'], 100);
  await __cavesWait(100);
  await __cavesWalkHeight([-1100, 2290], {step:16});
  for (const p of [[-943,2297],[-979,2194],[-1084,2196],[-1102,2389],[-975,2385],[-1037,2358],[-1042,2241],[-1002,2290],[-1139,2288]])
    await __cavesMoveTo(p, {limit:120});
  return cs.check();
};
cs.waterRaiseAndEscape = async () => {
  cs.check();
  await __cavesWalkHeight([-1807,2330], {step:12, maxDrop:32, targetY:-136});
  await __cavesFace([-1807,2363]);
  await __cavesStep(['KeyW'],18);
  await __cavesWalkHeight([-1642,1838], {step:12,maxDrop:32,targetY:-16});
  if (cs.check().p[1] < -20) throw Error('Do not wait below rising water');
  await __cavesWait(1700);
  await __cavesMoveTo([-1650,1885]);
  await __cavesJump([-1650,2010]);
  await __cavesJump([-1590,2110]);
  await __cavesJump([-1420,2250], {double:true});
  return cs.check();
};
cs.waterfalls = async (reverse = false) => {
  const route = reverse ? [
    ['w_power07',[-1845,2750],[-1845,2895]],
    ['w_power06',[-1845,2960],[-1845,3090]],
    ['w_power05',[-1805,3080],[-1660,3080]],
    ['w_power04',[-1620,3080],[-1490,3080]],
    ['w_power03',[-1445,3080],[-1310,3080]],
    ['w_power02',[-1300,3050],[-1300,2920]],
    ['w_power01',[-1300,2865],[-1300,2735]],
  ] : [
    ['w_power01',[-1300,2770],[-1300,2910]],
    ['w_power02',[-1300,2950],[-1300,3100]],
    ['w_power03',[-1345,3080],[-1490,3080]],
    ['w_power04',[-1510,3080],[-1650,3080]],
    ['w_power05',[-1695,3080],[-1840,3080]],
    ['w_power06',[-1845,3045],[-1845,2900]],
    ['w_power07',[-1845,2865],[-1845,2720]],
  ];
  cs.near(...route[0][1], 100);
  for (const [name, start, end] of route) {
    await __cavesMoveTo(start, {limit:140});
    await __cavesWaitFor(() => __redcat.gameplay.find(name)[0].enabled, 700);
    await __cavesWaitFor(() => !__redcat.gameplay.find(name)[0].enabled, 700);
    await __cavesJump(end);
    await __cavesMoveTo(end, {limit:70});
    cs.check();
  }
  return cs.check();
};
cs.waterDrainOut = async () => {
  cs.near(-2580,2775);
  await __cavesWaitFor(() => !__redcat.gameplay.find('water_rising02')[0].enabled, 1500);
  await __cavesFace([-2942,2560]);
  await __cavesStep(['ControlLeft'],2);
  await __cavesWait(210);
  await __cavesMoveTo([-2940,2560]);
  await __cavesWalkHeight([-3430,2300], {step:24,maxDrop:24});
  await __cavesJump([-3500,2360]);
  return cs.check();
};
cs.waterDrainBack = async () => {
  cs.near(-3120,2327);
  await __cavesFace([-3092,2327]);
  await __cavesStep(['KeyW'],15);
  await __cavesWait(210);
  await __cavesWalkHeight([-2880,2560], {step:24,maxDrop:160});
  await __cavesMoveTo([-2500,2560]);
  await __cavesWalkHeight([-2290,2476], {step:12,maxDrop:24});
  await __cavesJump([-2320,2375]);
  return cs.check();
};

// Fan stages intentionally stop when contact leaves the wrong wind active.
// On the earned run, ordinary E at a touched button or leaving/re-touching it
// corrected an extra contact. Never cross the next exposed walkway blindly.
cs.airFan12 = async () => {
  cs.near(1370,2350,140);
  await __cavesMoveTo([1370,2500], {limit:160});
  await __cavesFace([1425,2528]);
  await __cavesStep(['KeyW'],21);
  if (cs.fans()[0]) await __cavesStep(['KeyE'],2);
  cs.requireFans(false,true);
  await __cavesMoveTo([1370,2690], {limit:140});
  await __cavesFace([1425,2724]);
  await __cavesStep(['KeyW'],18);
  cs.requireFans(true,false);
  return cs.check();
};
cs.airFan34 = async () => {
  cs.near(1410,2724);
  await __cavesMoveTo([1136,2740], {limit:170});
  await __cavesFace([1136,2803]);
  await __cavesStep(['KeyW'],15);
  cs.requireFans(false,true);
  await __cavesStep(['KeyS'],78);
  await __cavesMoveTo([1100,2540], {limit:80});
  await __cavesFace([1143,2528]);
  await __cavesStep(['KeyW'],18);
  if (!cs.fans()[0]) await __cavesStep(['KeyE'],2);
  cs.requireFans(true,false);
  return cs.check();
};
cs.airFan56 = async () => {
  cs.near(1120,2528);
  await __cavesMoveTo([850,2520], {limit:180});
  await __cavesMoveTo([760,2480], {limit:90});
  await __cavesFace([760,2450]);
  await __cavesStep(['KeyW'],9);
  cs.requireFans(false,true);
  await __cavesMoveTo([850,2510], {limit:100});
  await __cavesMoveTo([850,3040], {limit:240});
  await __cavesFace([824,3070]);
  await __cavesStep(['KeyW'],14);
  cs.requireFans(true,false);
  await __cavesMoveTo([880,3050], {limit:90});
  await __cavesMoveTo([1370,3050], {limit:200});
  await __cavesMoveTo([1370,3080], {limit:40});
  await __cavesFace([1370,3230]);
  await __cavesStep(['KeyE','KeyW'],96);
  return cs.check();
};
cs.airRocks123 = async () => {
  cs.check();
  await __cavesWalkHeight([1030,3240], {step:24,maxDrop:160});
  await __cavesWaitFor(() => cs.rock(1)[1]-16 < -100, 900);
  await __cavesJump([1230,3240], {double:true});
  await __cavesWait(24);
  await __cavesMoveTo([1228,3280], {limit:60});
  await __cavesWaitFor(() => cs.rock(1)[1]-16 > -55 && cs.rock(2)[0] > -22 && Math.abs(cs.rock(2)[2]) < 30, 1800);
  await __cavesJump([1217,3480], {double:true});
  cs.requireContact(71);
  await __cavesWaitFor(() => {const p=__redcat.world.player.position;return p[0]<860&&p[2]>3360&&p[2]<3460&&cs.rock(3)[1]-18<20;},1800);
  await __cavesJump([930,3460], {walk:true,double:true});
  await __cavesWait(24);
  await __cavesMoveTo([930,3430], {limit:60});
  cs.requireContact(72);
  return cs.check();
};
cs.airRocks45 = async () => {
  cs.requireContact(72);
  await __cavesMoveTo([930,3430], {limit:60});
  await __cavesWaitFor(() => cs.rock(3)[1]-18>130 && cs.rock(4)[2]<-250,1600);
  await __cavesJump([893,3515], {walk:true});
  await __cavesWait(24);
  cs.requireContact(75);
  await __cavesWaitFor(() => cs.rock(4)[2]>-1 && cs.rock(5)[0]<10,1800);
  await __cavesWait(4);
  await __cavesJump([945,3770], {walk:true,double:true});
  await __cavesWait(18);
  cs.requireContact(76);
  return cs.check();
};
cs.airSecret = async () => {
  cs.requireContact(76); // Use immediately at the western rock05 landing.
  await __cavesJump([1040,3870]);
  await __cavesWait(18);
  cs.requireContact(77);
  await __cavesWaitFor(() => cs.rock(6)[0]>110 && cs.rock(7)[1]+400<150,1800);
  await __cavesWait(5);
  await __cavesJump([1219,3901]);
  await __cavesWait(18);
  cs.requireContact(78);
  await __cavesWaitFor(() => __redcat.world.player.position[1]>385,1400);
  await __cavesJump([1340,3940], {walk:true});
  await __cavesWait(21);
  for (const p of [[1328,3946],[1406,3917],[1404,3815],[1330,3793]]) await __cavesMoveTo(p,{limit:90});
  return cs.check();
};
// This additional route was physically verified after the secret drop missed.
cs.airRock5ToBridge = async () => {
  cs.requireContact(76);
  await __cavesWaitFor(() => cs.rock(5)[0]>316.4,1000);
  await __cavesWait(5);
  await __cavesJump([1320,3650], {walk:true});
  await __cavesWait(25);
  if (Math.abs(cs.check().p[1]-160)>3) throw Error('Inspect bridge landing');
  return cs.check();
};
// Return recovery from the southwest fan pit: crate06 crosses the middle
// dividing walkway into the northern pit, then crate04 reaches the entry.
cs.airFanPitReturn = async () => {
  cs.check();
  await __cavesWalkHeight([1200,2845], {step:12,maxDrop:24});
  await __cavesJump([1200,2670]);
  await __cavesWait(54);
  await __cavesWalkHeight([1312,2450], {step:12,maxDrop:24});
  await __cavesJump([1312,2250]);
  await __cavesFace([1370,2345]);
  await __cavesStep(['KeyW'],33);
  await __cavesFace([1370,2200]);
  await __cavesStep(['KeyE','KeyW'],55);
  await __cavesMoveTo([1370,2200], {limit:80});
  return cs.check();
};
cs.airFirstRoomReturn = async () => {
  cs.near(1370,2200);
  await __cavesMoveTo([1456,1980], {limit:140});
  await __cavesWait(30);
  await __cavesMoveTo([1456,1965], {limit:100});
  await __cavesFace([1456,1770]);
  await __cavesStep(['KeyW'],90); // Touch the crate side at z1915 first.
  await __cavesWait(10);
  await __cavesFace([1456,1750]);
  await __cavesStep(['KeyW','Space'],6);
  await __cavesStep(['KeyW'],66);
  await __cavesMoveTo([1370,1760], {limit:100});
  await __cavesWait(25);
  if (Math.abs(cs.check().p[1]+16)>3) throw Error('Inspect spring return landing');
  return cs.check();
};
