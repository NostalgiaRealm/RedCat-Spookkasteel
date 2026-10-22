import json,math
from pathlib import Path
root=Path(__file__).resolve().parent
checked=[]
for phase in ['after7ms','after-variable','after-frog7ms-final']:
 data=json.loads((root/phase/'report.json').read_text());assert not data['errors'],data['errors']
 for case in data['results']:
  previous=case['activated'];count=0;finished=False;serial=None
  for frame in case['frames']:
   if frame['enabled'] and previous['patrol'] and not previous['patrol']['leftStart']:
    delta=[b-a for a,b in zip(previous['position'],frame['position'])];length=math.hypot(*delta)
    assert delta[1]>0,(phase,case['fixture'],frame['frame'],'non-upward',delta)
    assert frame['animation']=='walk',(phase,case['fixture'],frame['frame'],'animation',frame['animation'])
    if serial is not None:assert frame['animationSerial']==serial,'walk must not restart during ascent'
    serial=frame['animationSerial'];assert frame['enemyTraces']==0,'authored entrance must not collide against its sloped grave floor'
    expected=case['speed']*frame['dt']
    assert length<=expected+1e-7,(length,expected)
    if not frame['patrol']['leftStart']:assert abs(length-expected)<1e-7,(length,expected)
    count+=1
   finished |= bool(frame['patrol']['leftStart']);previous=frame
  assert count>0 and finished,(phase,case['fixture'],'did not complete rise')
  assert not case['scriptError'],case['scriptError']
  checked.append((phase,case['fixture']['name'],count))
print('PASS',len(checked),'focused actual-level scenarios: exact authored Speed, monotonic ascent, continuous walk, route handoff, zero slope collision traces, no script/browser errors.')
for item in checked:print(*item)
