import urllib.request,json,sys,time,pathlib
code=sys.stdin.read()
data=json.dumps({'code':code}).encode()
with urllib.request.urlopen(urllib.request.Request('http://127.0.0.1:4551',data=data,headers={'Content-Type':'application/json'}),timeout=180) as r: result=json.load(r)
p=pathlib.Path('temp_work/campaign-validation-2026-10-15/late/graveyard-route/resume-results.jsonl')
with p.open('a') as f: f.write(json.dumps({'time':time.time(),'code':code,'result':result})+'\n')
print(json.dumps(result))
