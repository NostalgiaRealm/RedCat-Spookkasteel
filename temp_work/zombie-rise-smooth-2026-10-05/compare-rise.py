import json,math,statistics
from pathlib import Path
root=Path(__file__).resolve().parent
output=[]
for phase in ['baseline','baseline120-old','baseline7ms-old','baseline-variable-old','after','after120','after7ms','after-variable','after-frog7ms-final']:
 file=root/phase/'report.json'
 if not file.exists():continue
 report=json.loads(file.read_text())
 for case in report['results']:
  previous=case['activated'];rise=[]
  for frame in case['frames']:
   if frame['enabled'] and previous.get('patrol') and not previous['patrol'].get('leftStart'):
    delta=[b-a for a,b in zip(previous['position'],frame['position'])];length=math.hypot(*delta)
    rise.append({'dy':delta[1],'length':length,'speed':length/(frame.get('dt') or 1/60),'animationChanged':previous['animationSerial']!=frame['animationSerial'],'animation':frame['animation'],'enemyTraces':frame['enemyTraces'],'updateMs':frame['updateMs'],'dt':frame.get('dt') or 1/60})
   previous=frame
  moving=[x['speed'] for x in rise if x['length']>1e-7]
  result={'phase':phase,'case':case['fixture']['name'],'frames':len(rise),'duration':sum(x['dt'] for x in rise),'stationaryFrames':sum(x['length']<1e-7 for x in rise),'downwardFrames':sum(x['dy']<-1e-7 for x in rise),'animationChanges':sum(x['animationChanged'] for x in rise),'walkFrames':sum(x['animation']=='walk' for x in rise),'maxTrace':max((x['enemyTraces'] for x in rise),default=0),'minMovingSpeed':min(moving,default=0),'maxMovingSpeed':max(moving,default=0),'medianUpdateMs':statistics.median(x['updateMs'] for x in rise) if rise else 0}
  output.append(result)
  print(json.dumps(result))
(root/'comparison.json').write_text(json.dumps(output,indent=2))
