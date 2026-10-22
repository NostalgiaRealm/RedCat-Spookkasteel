import assert from 'node:assert/strict';
import fs from 'node:fs';
import path from 'node:path';
import {createRequire} from 'node:module';
import {fileURLToPath} from 'node:url';
import {execFileSync} from 'node:child_process';
import {Packager} from '../../node_modules/electron-builder/out/index.js';
import {packageOptions} from '../../tools/package.mjs';

const root=fileURLToPath(new URL('../../',import.meta.url));
const lab=path.join(root,'RC_SHOVE_TEST');
const require=createRequire(import.meta.url);
const config=require(path.join(lab,'electron/runtime.cjs'));
const expected=path.join(root,'temp_work/shove-investigation-2026-10-05/lab-runtime');
assert.equal(config.labRoot,lab);
assert.equal(config.runtimeRoot,expected);
for(const item of Object.values(config.runtime))assert.ok(item.startsWith(expected+path.sep));
assert.equal(execFileSync('npm',['config','get','cache'],{cwd:lab,encoding:'utf8'}).trim(),config.runtime['npm-cache']);
execFileSync('bash',['-n',path.join(lab,'Start-Shove-Test.sh')]);
execFileSync(process.execPath,['--check',path.join(lab,'electron/runtime.cjs')]);
assert.match(fs.readFileSync(path.join(root,'index.html'),'utf8'),/Versie <strong>0\.9\.9<\/strong>/);
const sourceBefore=fs.readFileSync(path.join(root,'package.json'),'utf8');
for(const target of ['linux','windows']){
  const packager=new Packager(packageOptions(target,'0.9.9'));
  await packager.validateConfig();
  assert.equal(packager.metadata.version,'0.9.9');
  assert.equal(packager.config.extraMetadata.version,'0.9.9');
  assert.equal(fs.readFileSync(path.join(root,'package.json'),'utf8'),sourceBefore);
}
assert.ok(fs.statSync(path.join(root,'assets/icons/redcat.icns')).size>0);
const report={date:new Date().toISOString(),sourceRoot:root,labRoot:lab,runtimeRoot:expected,
  cacheMatches:true,launcherSyntax:true,displayVersion:'0.9.9',
  packageMetadata:['linux:0.9.9','windows:0.9.9'],packageJsonUnchanged:true,
  macIconPresent:true,createdPackages:false,
  scope:'Path/configuration and packaging schema validation only; no runtime platform or campaign certification.'};
fs.writeFileSync(new URL('./report.json',import.meta.url),JSON.stringify(report,null,2)+'\n');
console.log(JSON.stringify(report,null,2));
