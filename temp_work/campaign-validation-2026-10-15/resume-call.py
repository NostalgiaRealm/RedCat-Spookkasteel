import sys,json,urllib.request,time
from pathlib import Path
code=sys.stdin.read()
response=urllib.request.urlopen("http://127.0.0.1:4511",data=json.dumps({"code":code}).encode(),timeout=240).read().decode()
with Path(__file__).with_name("resume-responses-2026-10-18.jsonl").open("a") as f: f.write(json.dumps({"time":time.time(),"code":code,"response":json.loads(response)})+"\n")
print(response)
