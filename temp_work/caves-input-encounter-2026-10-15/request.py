import sys, json, urllib.request, datetime
from pathlib import Path
code=sys.stdin.read()
response=urllib.request.urlopen(urllib.request.Request('http://127.0.0.1:4561',data=json.dumps({'code':code}).encode(),headers={'Content-Type':'application/json'}),timeout=90).read().decode()
with (Path(__file__).parent/'runtime'/'responses-resumed.jsonl').open('a') as f:
    f.write(json.dumps({'at':datetime.datetime.now().isoformat(),'code':code,'response':json.loads(response)})+'\n')
print(response)
