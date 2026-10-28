// Where browser scene scripts write screenshots, JSON reports, browser
// profiles and temporary folders. The scripts name their outputs as before
// ('artifacts/x.png', 'current_work/...', 'temp_work/...'); those paths are
// placed under REDCAT_SCENE_OUTPUT, or the ignored temp_work/scene-output,
// so a scene run never rewrites the committed evidence or research folders.
// Paths stay relative to the working directory: Chromium's Unix socket path
// under TMPDIR must stay below 108 bytes.
import path from 'node:path';
import {mkdirSync} from 'node:fs';
import {fileURLToPath} from 'node:url';

const root=fileURLToPath(new URL('../../',import.meta.url));
const base=path.resolve(root,process.env.REDCAT_SCENE_OUTPUT||'temp_work/scene-output');
for(const folder of ['artifacts','current_work','temp_work'])mkdirSync(path.join(base,folder),{recursive:true});

export function sceneOutput(...parts) {
  return path.relative(process.cwd(),path.join(base,...parts))||'.';
}

/**
 * Short relative TMPDIR for Chromium. Its singleton socket lives below
 * TMPDIR, and a scene's own output folder can be too deep for the limit.
 */
export function sceneTemp() {
  const folder=path.join(base,'tmp');mkdirSync(folder,{recursive:true});
  return path.relative(process.cwd(),folder);
}

/** Absolute folder for a unit test's retained run fixtures. */
export function testOutput(name) {
  return path.join(base,'unit-tests',name);
}
