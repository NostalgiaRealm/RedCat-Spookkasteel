"""Read-only ACT motion/bone and authored actor audit; retained local reports only.
Extends temp_work/redcat-animation-native-2026-10-12/pose/audit_assets.py.
"""
import sys, json, hashlib, collections
from pathlib import Path
HERE=Path(__file__).resolve().parent
ROOT=HERE.parents[2]
sys.dont_write_bytecode=True
sys.path.insert(0,str(ROOT/'tools'))
import import_actors as a
ORIGINAL=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/Actors')
sources={p.name.lower():p for p in ORIGINAL.iterdir() if p.suffix.lower()=='.act'}
report={'actors':[], 'levels':[], 'method':'Original ACT archive decode with existing import_actors.vfs/motion/geometry; no source or original assets changed; no texture reimport.'}
by_stem={}
for path in sorted((ROOT/'assets/actors').glob('*.json')):
 data=json.loads(path.read_text())
 if not data.get('source'):continue
 src=sources.get(data['source'].lower())
 if not src:
  report['actors'].append({'actor':path.stem,'error':'No matching original ACT'});continue
 source=src.read_bytes();archive=a.vfs(source)
 native=[]
 for member,b in archive.items():
  if member.startswith('Motions/'):native.append(a.motion(b))
 bones=a.geometry(a.vfs(archive['Body'])['Geometry'])[2]
 channels=[(kind,ch) for m in native for t in m['tracks'] for kind,ch in t.items() if kind!='bone']
 r={'actor':path.stem,'original':src.name,'sha256':hashlib.sha256(source).hexdigest(),'sha256Matches':hashlib.sha256(source).hexdigest()==data.get('sha256'),'bones':len(bones),'bonesExact':bones==data['bones'],'motionCount':len(native),'motionsExact':native==data['animations'],'motionNames':[m['name'] for m in native],'keyCount':sum(len(ch['times']) for kind,ch in channels),'channels':len(channels),'interpolation':dict(collections.Counter(str((kind,ch['interpolation'],ch['loop'])) for kind,ch in channels)),'nonzeroFirstKeys':sorted(set(ch['times'][0] for kind,ch in channels if ch['times'] and ch['times'][0]!=0)),'settingsExact':a.actor_settings(src)==data['settings'],'importWarnings':data.get('warnings',[])}
 r['clips']=[{'name':m['name'],'duration':m['duration'],'tracks':len(m['tracks'])} for m in native]
 report['actors'].append(r);by_stem[path.stem]=data
for path in sorted((ROOT/'data/levels').glob('*/level.json')):
 data=json.loads(path.read_text());entities=[e for e in data['entities'] if e.get('classname')=='AdamAnyActor'];rows=[]
 for e in entities:
  actor=e.get('ActorFileName','').replace('\\','/').split('/')[-1].removesuffix('.act').lower()
  definition=by_stem.get(actor,{})
  name=e.get('MotionName','');clips=definition.get('animations',[])
  chosen=next((c['name'] for c in clips if c['name'].lower()==name.lower()),None) if name else None
  rows.append({'id':e.get('%name%'),'actor':actor,'motion':name,'rate':e.get('MotionSpeed'),'chosenMotion':chosen,'motionExists':not name or chosen is not None,'hasAnimation':bool(clips),'initiallyEnabled':e.get('IsInitiallyEnabled')})
 report['levels'].append({'level':path.parent.name,'count':len(rows),'animatedCount':sum(r['hasAnimation'] for r in rows),'authoredMotionCount':sum(bool(r['motion']) for r in rows),'rows':rows})
report['summary']={'actors':len(report['actors']),'animatedActors':sum(r.get('motionCount',0)>0 for r in report['actors']),'nonplayerAnimatedActors':sum(r.get('motionCount',0)>0 and r['actor']!='redcat' for r in report['actors']),'motions':sum(r.get('motionCount',0) for r in report['actors']),'nonplayerMotions':sum(r.get('motionCount',0) for r in report['actors'] if r['actor']!='redcat'),'mismatches':[r['actor'] for r in report['actors'] if r.get('error') or not all(r.get(k) for k in ['sha256Matches','bonesExact','motionsExact'])],'authoredActors':sum(l['count'] for l in report['levels']),'animatedAuthoredActors':sum(l['animatedCount'] for l in report['levels']),'authoredMotions':sum(l['authoredMotionCount'] for l in report['levels']),'missingAuthoredMotions':[{**r,'level':l['level']} for l in report['levels'] for r in l['rows'] if not r['motionExists']]}
(HERE/'assets-report.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report['summary'],indent=2))
print(json.dumps({'animated':[{'actor':r['actor'],'motions':r['motionNames'],'interpolation':r['interpolation'],'first':r['nonzeroFirstKeys']} for r in report['actors'] if r.get('motionCount')]},indent=2))
