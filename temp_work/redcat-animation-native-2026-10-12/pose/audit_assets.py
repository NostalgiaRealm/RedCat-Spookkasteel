"""Read-only source audit; outputs are contained in this directory."""
import sys, json, hashlib, collections
from pathlib import Path
HERE=Path(__file__).resolve().parent
ROOT=HERE.parents[2]
sys.dont_write_bytecode=True
sys.path.insert(0,str(ROOT/'tools'))
import import_actors as a
original=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/Actors/RedCat.act')
archive=a.vfs(original.read_bytes())
data=json.loads((ROOT/'assets/actors/redcat.json').read_text())
output=HERE/'reimport';output.mkdir(exist_ok=True);(output/'textures').mkdir(exist_ok=True)
again=a.import_actor(original,output)
report={'sha256':hashlib.sha256(original.read_bytes()).hexdigest(),'actor_field_match':{k:data.get(k)==v for k,v in again.items()},'bones':len(data['bones']),'clips':[]}
for member,b in archive.items():
 if not member.startswith('Motions/'):continue
 m=a.motion(b);c=next(c for c in data['animations'] if c['name']==m['name']);r=a.Reader(b,8);header=r.value('I');r.read(header&65535);count,checksum,flags=r.unpack('3I')
 channels=[ch for t in m['tracks'] for ch in [t.get('translation'),t.get('rotation')] if ch]
 report['clips'].append({'name':m['name'],'duration':m['duration'],'exact':c==m,'tracks':count,'flags':flags,'channels':len(channels),'starts':sorted(set(ch['times'][0] for ch in channels)),'loops':dict(collections.Counter(ch['loop'] for ch in channels)),'translation_interpolation':dict(collections.Counter(t['translation']['interpolation'] for t in m['tracks'] if 'translation' in t)),'rotation_interpolation':dict(collections.Counter(t['rotation']['interpolation'] for t in m['tracks'] if 'rotation' in t))})
(HERE/'assets-report.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
