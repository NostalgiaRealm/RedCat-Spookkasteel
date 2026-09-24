import test from 'node:test';
import assert from 'node:assert/strict';
import {readFile} from 'node:fs/promises';
import {Packager,Platform,Arch} from 'electron-builder';
import {packageOptions} from '../tools/package.mjs';

test('source and root lockfile have no game release number',async()=>{
  const metadata=JSON.parse(await readFile(new URL('../package.json',import.meta.url),'utf8'));
  const lock=JSON.parse(await readFile(new URL('../package-lock.json',import.meta.url),'utf8'));
  assert.equal(Object.hasOwn(metadata,'version'),false);
  assert.equal(Object.hasOwn(lock,'version'),false);
  assert.equal(Object.hasOwn(lock.packages[''],'version'),false);
  assert.equal(lock.packages['node_modules/three'].version,metadata.dependencies.three);
});

test('packaging requires an explicit version before calling the builder',()=>{
  for(const value of [null,'','  ','v1.2.3','1.2','01.2.3','1.2.65536','1.2.3.4'])assert.throws(()=>packageOptions('linux',value),/REDCAT_PACKAGE_VERSION/);
  assert.throws(()=>packageOptions('other','1.2.3'),/linux or windows/);
});

test('builder accepts injected package metadata without building or changing source',async()=>{
  const sourceURL=new URL('../package.json',import.meta.url),before=await readFile(sourceURL,'utf8');
  for(const [name,platform] of [['linux',Platform.LINUX],['windows',Platform.WINDOWS]]){
    const options=packageOptions(name,' 1.2.3 ');
    assert.deepEqual(options.targets.get(platform).get(Arch.x64),['dir']);
    assert.equal(options.publish,'never');
    const packager=new Packager(options);
    await packager.validateConfig();
    assert.equal(packager.metadata.version,'1.2.3');
    assert.equal(packager.config.extraMetadata.version,'1.2.3');
    assert.equal(await readFile(sourceURL,'utf8'),before);
  }
});
