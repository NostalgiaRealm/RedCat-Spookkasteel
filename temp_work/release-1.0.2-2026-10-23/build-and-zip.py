"""Build and ZIP frozen 1.0.2 source. No package tests or launches."""
from pathlib import Path
import hashlib
import json
import os
import shutil
import subprocess
import time

root=Path(__file__).resolve().parents[2]
out=Path(__file__).resolve().parent
dist=root/'dist'
version='1.0.2'
commit=subprocess.check_output(['git','rev-parse','HEAD'],cwd=root,text=True).strip()
assert not subprocess.check_output(['git','diff','--name-only'],cwd=root,text=True).strip(), 'Freeze tracked source before building'
tmp=out/'build-temp'
tmp.mkdir(parents=True,exist_ok=True)
env={**os.environ,'TMPDIR':str(tmp),'REDCAT_PACKAGE_VERSION':version,'CSC_IDENTITY_AUTO_DISCOVERY':'false'}
targets=[
 ('linux-x64','linux-unpacked',['npm','run','build:linux']),
 ('windows-x64','win-unpacked',['npm','run','build:windows']),
 ('linux-arm64','linux-arm64-unpacked',['npx','--no-install','electron-builder','--linux','dir','--arm64','--publish','never',f'-c.extraMetadata.version={version}']),
 ('windows-arm64','win-arm64-unpacked',['npx','--no-install','electron-builder','--win','dir','--arm64','--publish','never',f'-c.extraMetadata.version={version}']),
 ('mac-x64','mac',['npx','--no-install','electron-builder','--mac','dir','--x64','--publish','never',f'-c.extraMetadata.version={version}','-c.mac.notarize=false']),
 ('mac-arm64','mac-arm64',['npx','--no-install','electron-builder','--mac','dir','--arm64','--publish','never',f'-c.extraMetadata.version={version}','-c.mac.notarize=false']),
]
results=[]
for platform,folder,command in targets:
 target=dist/folder
 if target.exists():
  assert target.is_dir() and not target.is_symlink()
  shutil.rmtree(target)
 print('Building '+platform,flush=True)
 started=time.time()
 with (out/f'build-{platform}.log').open('w') as log:
  process=subprocess.run(command,cwd=root,env=env,stdout=log,stderr=subprocess.STDOUT)
 results.append({'platform':platform,'folder':folder,'command':command,'exitCode':process.returncode,'seconds':round(time.time()-started,2)})
 (out/'build-results.json').write_text(json.dumps({'commit':commit,'version':version,'packageTestsRun':False,'builds':results},indent=2)+'\n')
 if process.returncode: raise SystemExit(platform+' failed; see build log')
 print('Built '+platform,flush=True)
# Preserve macOS framework symlinks and executable bits in ZIPs.
archives=[]
for platform,folder,_ in targets:
 name=f'RedCat-Spookkasteel-{version}-{platform}.zip'
 archive=dist/name
 assert not archive.exists(), 'Refuse to silently modify an existing release archive'
 print('Archiving '+platform,flush=True)
 subprocess.run(['zip','-qry',name,folder+'/'],cwd=dist,check=True)
 with archive.open('rb') as source: digest=hashlib.file_digest(source,'sha256').hexdigest()
 archives.append({'name':name,'bytes':archive.stat().st_size,'sha256':digest})
 (out/'archives.json').write_text(json.dumps(archives,indent=2)+'\n')
(dist/'SHA256SUMS.txt').write_text(''.join(f"{entry['sha256']}  {entry['name']}\n" for entry in archives))
assert not subprocess.check_output(['git','diff','--name-only'],cwd=root,text=True).strip(), 'Tracked source changed during build'
print('Six builds and ZIP archives finished; no package tests executed.',flush=True)
