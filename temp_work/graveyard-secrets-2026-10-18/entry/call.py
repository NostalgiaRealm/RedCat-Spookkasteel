import json,urllib.request,sys
code=sys.stdin.read()
r=urllib.request.urlopen(urllib.request.Request('http://127.0.0.1:4585',json.dumps({'code':code}).encode(),{'Content-Type':'application/json'}),timeout=120)
raw=r.read().decode()
with open('temp_work/graveyard-secrets-2026-10-18/entry/responses.jsonl','a') as f:f.write(json.dumps({'code':code,'response':json.loads(raw)})+'\n')
print(raw)
