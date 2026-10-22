const fs=require('node:fs'),path=require('node:path'),assert=require('node:assert/strict'),crypto=require('node:crypto');
const asar=require('@electron/asar');
const targets=['linux-unpacked','linux-arm64-unpacked','win-unpacked','win-arm64-unpacked','mac','mac-arm64'];
const reports=[];
for(const target of targets){
 const file=path.join('dist',target,...(target.startsWith('mac')?['RedCat Spookkasteel.app','Contents','Resources']:['resources']),'app.asar');
 const files=asar.listPackage(file).filter(f=>!asar.statFile(file,f.replace(/^\//,'')).files);
 let checked=0;
 for(const f of files){const rel=f.replace(/^\//,'');if(/^(src|electron|assets|data|docs)\//.test(rel)||['index.html','README.md'].includes(rel)){
 assert.deepEqual(asar.extractFile(file,rel),fs.readFileSync(rel),`${target}: ${rel}`);checked++;
 }}
 const meta=JSON.parse(asar.extractFile(file,'package.json'));assert.equal(meta.version,'1.0.0');
 for(const dir of ['src','electron','assets','data','docs'])for(const rel of fs.readdirSync(dir,{recursive:true})){const p=path.join(dir,rel);if(fs.statSync(p).isFile())assert(files.includes('/'+p),`${target} missing ${p}`);}
 reports.push({target,version:meta.version,checkedFiles:checked,asarSha256:crypto.createHash('sha256').update(fs.readFileSync(file)).digest('hex')});
}
fs.writeFileSync('temp_work/release-1.0.0-2026-10-20/package-verification.json',JSON.stringify(reports,null,2)+'\n');console.log(reports);
