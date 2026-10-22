import json,urllib.request,sys
code=sys.stdin.read()
r=urllib.request.urlopen(urllib.request.Request('http://127.0.0.1:4541',json.dumps({'code':code}).encode(),{'Content-Type':'application/json'}),timeout=120)
print(r.read().decode())
