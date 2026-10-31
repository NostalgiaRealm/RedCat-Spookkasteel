"""Publish the 1.0.8 GitLab release through the API (glab 1.33's `release create` fails
with a rate-limiter error). Files go to the generic package registry; the release links all."""
import json,subprocess,sys,urllib.parse
from pathlib import Path
root=Path(__file__).resolve().parents[2];work=Path(__file__).resolve().parent
version='1.0.8';project='Nostalgia_Realm%2FRedCat-Spookkasteel';archive=root/'dist'/f'release-{version}'
base=f'projects/{project}/packages/generic/redcat-spookkasteel/{version}'
def api(*args):
    r=subprocess.run(['glab','api',*args],cwd=root,capture_output=True,text=True)
    out='\n'.join(l for l in (r.stdout+r.stderr).splitlines() if 'new version of glab' not in l and 'cli/-/releases' not in l)
    if r.returncode: raise SystemExit(f'glab api {args[:3]} failed: {out[:500]}')
    return r.stdout
files=sorted(p for p in archive.iterdir())
for path in files:
    print('Uploading',path.name,flush=True)
    api('--method','PUT',f'{base}/{urllib.parse.quote(path.name)}','--input',str(path),'-H','Content-Type: application/octet-stream')
links=[{'name':p.name,'url':f'https://gitlab.com/api/v4/{base}/{urllib.parse.quote(p.name)}','link_type':'package','direct_asset_path':f'/{p.name}'} for p in files]
body={'tag_name':f'v{version}','name':f'RedCat Spookkasteel {version}','description':(root/f'RELEASE_NOTES_{version}').read_text(),'assets':{'links':links}}
(work/'gitlab-release-request.json').write_text(json.dumps(body,indent=1))
out=api('--method','POST',f'projects/{project}/releases','--input',str(work/'gitlab-release-request.json'),'-H','Content-Type: application/json')
(work/'gitlab-publication.json').write_text(out)
print('Release created with',len(links),'asset links',flush=True)
