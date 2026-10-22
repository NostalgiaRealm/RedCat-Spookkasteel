from pathlib import Path
import subprocess, hashlib
root=Path.cwd(); dist=root/'dist'; names=[]
for platform,folder in [('linux-x64','linux-unpacked'),('linux-arm64','linux-arm64-unpacked'),('windows-arm64','win-arm64-unpacked'),('windows-x64','win-unpacked'),('mac-arm64','mac-arm64'),('mac-x64','mac')]:
 name=f'RedCat-Spookkasteel-0.9.9-{platform}.zip'
 assert not (dist/name).exists(),name
 subprocess.run(['zip','-qry',name,folder+'/'],cwd=dist,check=True)
 subprocess.run(['unzip','-tqq',name],cwd=dist,check=True)
 names.append(name)
 print(name,flush=True)
with (dist/'SHA256SUMS.txt').open('w') as out:
 for name in names:
  with (dist/name).open('rb') as source:digest=hashlib.file_digest(source,'sha256').hexdigest()
  out.write(f'{digest}  {name}\n')
