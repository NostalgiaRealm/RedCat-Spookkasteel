const fs=require('node:fs'),path=require('node:path'),assert=require('node:assert/strict'),crypto=require('node:crypto');
const {execFileSync}=require('node:child_process'),asar=require('@electron/asar');
const root=path.resolve(__dirname,'../..'),out=__dirname;
process.chdir(root);
const targets=[
 ['linux-x64','linux-unpacked','redcat-spookkasteel',/ELF 64-bit.*x86-64/],
 ['linux-arm64','linux-arm64-unpacked','redcat-spookkasteel',/ELF 64-bit.*aarch64/],
 ['windows-x64','win-unpacked','RedCat Spookkasteel.exe',/PE32\+.*x86-64/],
 ['windows-arm64','win-arm64-unpacked','RedCat Spookkasteel.exe',/PE32\+.*(?:Aarch64|ARM64)/],
 ['mac-x64','mac','RedCat Spookkasteel.app/Contents/MacOS/RedCat Spookkasteel',/Mach-O 64-bit x86_64/],
 ['mac-arm64','mac-arm64','RedCat Spookkasteel.app/Contents/MacOS/RedCat Spookkasteel',/Mach-O 64-bit arm64/],
];
const sha=bytes=>crypto.createHash('sha256').update(bytes).digest('hex');
const expected=new Map(),roots=['src','electron','assets','data','docs'];
for(const dir of roots)for(const rel of fs.readdirSync(dir,{recursive:true})){
 const file=path.join(dir,rel);if(fs.statSync(file).isFile())expected.set(file,sha(fs.readFileSync(file)));
}
for(const file of ['index.html','README.md'])expected.set(file,sha(fs.readFileSync(file)));
// electron-builder intentionally drops dependency README/example directories.
// Require every real runtime import rather than unused Three.js examples.
const sourceHtml=fs.readFileSync('index.html','utf8');
const sourceImports=JSON.parse(sourceHtml.match(/<script type="importmap" id="game-importmap">\s*([\s\S]*?)<\/script>/)[1]).imports;
for(const [specifier,url] of Object.entries(sourceImports))if(!specifier.endsWith('/')){
 const relative=new URL(url,'https://example.invalid/').pathname.slice(1);
 expected.set(relative,sha(fs.readFileSync(relative)));
}
expected.set('node_modules/three/LICENSE',sha(fs.readFileSync('node_modules/three/LICENSE')));
const sourceMetadata=JSON.parse(fs.readFileSync('package.json','utf8')),reports=[];
for(const [platform,target,executable,architecture] of targets){
 const file=path.join('dist',target,...(platform.startsWith('mac-')?['RedCat Spookkasteel.app','Contents','Resources']:['resources']),'app.asar');
 const listed=asar.listPackage(file).filter(f=>!asar.statFile(file,f.replace(/^\//,'')).files).map(f=>f.replace(/^\//,''));
 let checked=0;
 for(const [relative,digest] of expected){
  assert(listed.includes(relative),`${target} missing ${relative}`);
  assert.equal(sha(asar.extractFile(file,relative)),digest,`${target}: stale ${relative}`);checked++;
 }
 // Also compare all additional packaged Three.js files with installed input.
 for(const relative of listed)if(relative.startsWith('node_modules/three/')&&!expected.has(relative)&&relative!=='node_modules/three/package.json'){
  assert.equal(sha(asar.extractFile(file,relative)),sha(fs.readFileSync(relative)),`${target}: stale ${relative}`);checked++;
 }
 const threeMeta=JSON.parse(asar.extractFile(file,'node_modules/three/package.json'));
 const threeSource=JSON.parse(fs.readFileSync('node_modules/three/package.json'));
 // Builder removes dependency development scripts and descriptive fields.
 for(const key of ['name','version','main','module','type','exports','dependencies'])
  assert.deepEqual(threeMeta[key],threeSource[key],`${target}: Three.js ${key}`);
 const meta=JSON.parse(asar.extractFile(file,'package.json'));
 assert.equal(meta.version,'1.0.1');assert.equal(meta.name,sourceMetadata.name);assert.equal(meta.main,sourceMetadata.main);
 assert.deepEqual(meta.dependencies,sourceMetadata.dependencies);
 const html=asar.extractFile(file,'index.html').toString('utf8');
 const imports=JSON.parse(html.match(/<script type="importmap" id="game-importmap">\s*([\s\S]*?)<\/script>/)[1]).imports;
 assert.match(imports['./src/actor-render-residency.js'],/\?v=[0-9a-f]{24}$/);
 const revision=new URL(imports['./src/actor-render-residency.js'],'https://example.invalid/').searchParams.get('v');
 for(const [specifier,url] of Object.entries(imports))if(!specifier.endsWith('/'))assert.equal(new URL(url,'https://example.invalid/').searchParams.get('v'),revision);
 assert.match(asar.extractFile(file,'src/actor-render-residency.js').toString(),/async settle\(\)/);
 const description=execFileSync('file',['-b',path.join('dist',target,executable)],{encoding:'utf8'}).trim();
 assert.match(description,architecture);
 reports.push({platform,target,version:meta.version,checkedFiles:checked,revision,executable:description,asarSha256:sha(fs.readFileSync(file))});
 console.log(`${platform}: ${checked} files match current source; ${revision}; ${description}`);
}
assert.equal(new Set(reports.map(r=>r.asarSha256)).size,1,'all platforms must embed identical game payloads');
fs.writeFileSync(path.join(out,'package-verification.json'),JSON.stringify(reports,null,2)+'\n');
const inputs={files:Object.fromEntries(expected),buildHelpers:{}};
for(const file of ['tools/refresh-web-cache.mjs','tools/package.mjs','package.json','package-lock.json','RELEASE_NOTES_1.0.1'])inputs.buildHelpers[file]=sha(fs.readFileSync(file));
fs.writeFileSync(path.join(out,'source-inputs.json'),JSON.stringify(inputs,null,2)+'\n');
