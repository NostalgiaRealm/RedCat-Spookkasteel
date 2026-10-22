import fs from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';
import {spawnSync} from 'node:child_process';
const root=process.cwd(),base=path.join(root,'current_work/native-refresh-2026-10-01/launcher-check');
const reports=[];
const runner='#!/bin/sh\nprintf "%s\\n" "${MANGOHUD_CONFIG-<unset>}" "$@"\n';
for(const type of ['packaged','source']) {
  const fixture=path.join(base,type);await fs.mkdir(fixture,{recursive:true});
  const launch=path.join(fixture,'Start-RedCat.sh');await fs.copyFile(path.join(root,'Start-RedCat.sh'),launch);
  const bin=path.join(fixture,'bin');await fs.mkdir(bin,{recursive:true});
  const fake=type==='packaged'?path.join(fixture,'dist/linux-unpacked/redcat-spookkasteel'):path.join(bin,'npm');
  await fs.mkdir(path.dirname(fake),{recursive:true});await fs.writeFile(fake,runner,{mode:0o755});
  const syntax=spawnSync('sh',['-n',launch],{encoding:'utf8'});assert.equal(syntax.status,0,syntax.stderr);
  for(const [name,overrides,expected,args=[]] of [
    ['ordinary launch',{},'<unset>'],
    ['explicit disabled',{MANGOHUD:'0'},'<unset>'],
    ['MangoHud enabled',{MANGOHUD:'1'},'read_cfg,fps_limit=0'],
    ['empty override',{MANGOHUD:'1',MANGOHUD_CONFIG:''},'read_cfg,fps_limit=0'],
    ['existing options',{MANGOHUD:'1',MANGOHUD_CONFIG:'read_cfg,gpu_temp'},'read_cfg,gpu_temp,fps_limit=0'],
    ['explicit options only',{MANGOHUD:'1',MANGOHUD_CONFIG:'cpu_temp'},'cpu_temp,fps_limit=0'],
    ['intentional cap',{MANGOHUD:'1',MANGOHUD_CONFIG:'read_cfg,fps_limit=90'},'read_cfg,fps_limit=90'],
    ['intentional zero',{MANGOHUD:'1',MANGOHUD_CONFIG:'fps_limit=0,gpu_temp'},'fps_limit=0,gpu_temp'],
    ['list cap',{MANGOHUD:'1',MANGOHUD_CONFIG:'read_cfg,fps_limit=120+60+0'},'read_cfg,fps_limit=120+60+0'],
    ['spaced cap',{MANGOHUD:'1',MANGOHUD_CONFIG:'read_cfg, fps_limit = 120'},'read_cfg, fps_limit = 120'],
    ['similar option keys',{MANGOHUD:'1',MANGOHUD_CONFIG:'read_cfg,show_fps_limit,toggle_fps_limit=Shift_L+F1'},'read_cfg,show_fps_limit,toggle_fps_limit=Shift_L+F1,fps_limit=0'],
    ['disabled keeps config',{MANGOHUD_CONFIG:'fps_limit=30'},'fps_limit=30'],
    ['preloaded hud',{LD_PRELOAD:'/nonexistent/libMangoHud_shim.so'},'read_cfg,fps_limit=0'],
    ['preloaded unrelated',{LD_PRELOAD:'/nonexistent/other-preload.so'},'<unset>'],
    ['display override',{MANGOHUD:'1'},'read_cfg,fps_limit=0',['--ozone-platform=wayland','--test']]
  ]) {
    const env={...process.env,PATH:`${bin}:${process.env.PATH}`};delete env.MANGOHUD;delete env.MANGOHUD_CONFIG;delete env.LD_PRELOAD;Object.assign(env,overrides);
    const result=spawnSync('sh',[launch,...args],{env,encoding:'utf8'});
    assert.equal(result.status,0,`${type}: ${name}: ${result.stderr}`);
    const [actual,...actualArgs]=result.stdout.trimEnd().split('\n');assert.equal(actual,expected,`${type}: ${name}`);
    const expectedArgs=[...(type==='source'?['start','--']:[]),...(args.length?args:['--ozone-platform=x11'])];
    assert.deepEqual(actualArgs,expectedArgs,`${type}: ${name} arguments`);
    reports.push({type,name,passed:true});
  }
}
await fs.writeFile(path.join(base,'report.json'),JSON.stringify(reports,null,2));
console.log(`${reports.length} launcher environment/argument checks passed; POSIX sh syntax passed.`);
