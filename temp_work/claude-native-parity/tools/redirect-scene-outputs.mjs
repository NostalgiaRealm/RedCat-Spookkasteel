// One-off codemod (28 October 2026): wrap every output path literal in the
// browser scene scripts with sceneOutput(). Inputs listed in KEEP stay as is.
import {readFileSync,writeFileSync} from 'node:fs';
const KEEP=[
  'temp_work/android-release-1.0.3-2026-10-26/assets',
  'temp_work/web-cache-2026-10-20/run-1792491346214/seed-save.json',
];
const literal=/(['`])((?:artifacts|current_work|temp_work)(?:\/(?:(?!\1)[^\n\\])*)?)\1/g;
let total=0;
for(const file of process.argv.slice(2)) {
  const source=readFileSync(file,'utf8');let count=0;
  const lines=source.split('\n').map(line=>{
    if(/^\s*\/\//.test(line))return line;
    return line.replace(literal,(match,quote,body,offset,whole)=>{
      if(KEEP.includes(body))return match;
      if(whole.slice(Math.max(0,offset-12),offset).endsWith('sceneOutput('))return match;
      count++;return `sceneOutput(${match})`;
    });
  });
  if(!count)continue;
  let out=lines.join('\n');
  if(!out.includes("./support/scene-output.mjs")) {
    // Insert after the last top-level import statement.
    const imports=[...out.matchAll(/^import [^\n]*;?\s*$/gm)];
    const last=imports.at(-1);
    const at=last?last.index+last[0].length:0;
    out=out.slice(0,at)+(last?'\n':'')+"import {sceneOutput} from './support/scene-output.mjs';"+(last?'':'\n')+out.slice(at);
  }
  writeFileSync(file,out);total+=count;console.log(count,file);
}
console.log('total',total);
