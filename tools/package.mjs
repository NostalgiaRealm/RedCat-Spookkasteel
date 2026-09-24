import path from 'node:path';
import {fileURLToPath} from 'node:url';
import {build, createTargets, Platform} from 'electron-builder';

const projectDir=fileURLToPath(new URL('../',import.meta.url));

// Electron requires package metadata even though the game source is unversioned.
// Supply it only when packaging; never persist it into package.json or the menu.
export function packageOptions(platform,packageVersion=process.env.REDCAT_PACKAGE_VERSION){
  if(!['linux','windows'].includes(platform))throw new Error('Choose linux or windows as the packaging target.');
  if(typeof packageVersion!=='string'||!packageVersion.trim())throw new Error('Electron packaging requires REDCAT_PACKAGE_VERSION (three dot-separated integers). See docs/building.md. No build was started.');
  const version=packageVersion.trim();
  if(!/^(0|[1-9]\d*)\.(0|[1-9]\d*)\.(0|[1-9]\d*)$/.test(version)||version.split('.').some(part=>Number(part)>65535))throw new Error('REDCAT_PACKAGE_VERSION must contain three dot-separated integers from 0 to 65535. No build was started.');
  return {projectDir,targets:createTargets([platform==='windows'?Platform.WINDOWS:Platform.LINUX],'dir','x64'),publish:'never',config:{extraMetadata:{version}}};
}

if(process.argv[1]&&path.resolve(process.argv[1])===fileURLToPath(import.meta.url)){
  try{await build(packageOptions(process.argv[2]));}
  catch(error){console.error(error.message);process.exitCode=1;}
}
