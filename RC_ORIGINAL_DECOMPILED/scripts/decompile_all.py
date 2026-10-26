#!/usr/bin/env python3
"""Batch every inventoried PE with Ghidra; targets are never executed."""
import argparse, concurrent.futures, hashlib, json, os, subprocess, time
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
DEFAULT_GHIDRA='ghidra-headless'
def sha(p): return hashlib.sha256(Path(p).read_bytes()).hexdigest()
def run(item,ghidra):
 name=item['path']; source=ROOT/item['prepared_path']; out=ROOT/'decompiled'/name; project=ROOT/'analysis-projects'/name; logdir=ROOT/'logs/decompile'
 if sha(source)!=item['prepared_sha256']: raise ValueError('Input mismatch: '+name)
 out.mkdir(parents=True,exist_ok=True); project.mkdir(parents=True,exist_ok=True)
 recordpath=logdir/(name+'-job.json'); previous=json.loads(recordpath.read_text()) if recordpath.exists() else {}
 scripts={n:sha(ROOT/'scripts'/n) for n in ['RecoverFunctions.java','ExportAll.java']}
 if previous.get('exit_code')==0 and previous.get('scripts_sha256')==scripts and (out/'summary.json').exists():
  print('SKIP '+name,flush=True); return previous
 cmd=[ghidra,str(project),'analysis','-import',str(source),'-overwrite','-scriptPath',str(ROOT/'scripts'),'-max-cpu','3','-analysisTimeoutPerFile','2400','-log',str(logdir/(name+'-ghidra.log')),'-scriptlog',str(logdir/(name+'-script.log')),'-postScript','RecoverFunctions.java','-postScript','ExportAll.java',str(out)]
 env=os.environ.copy(); env['GHIDRA_HEADLESS_MAXMEM']='4G'; env['TMPDIR']=str(ROOT/'temp_work'); env['JAVA_TOOL_OPTIONS']=' '.join('-D'+key+'="'+str(ROOT/'temp_work')+'"' for key in ['java.io.tmpdir','application.tempdir','application.cachedir'])
 record={'binary':name,'input_sha256':sha(source),'scripts_sha256':scripts,'command':cmd,'state':'running','started_utc':time.strftime('%Y-%m-%dT%H:%M:%SZ',time.gmtime())}; recordpath.write_text(json.dumps(record,indent=2)+'\n')
 print('START '+name,flush=True); start=time.monotonic()
 with (logdir/(name+'-console.log')).open('w') as log: r=subprocess.run(cmd,env=env,cwd=ROOT,stdout=log,stderr=subprocess.STDOUT)
 record.update(exit_code=r.returncode,elapsed_seconds=round(time.monotonic()-start,2),state='complete' if r.returncode==0 and (out/'summary.json').exists() else 'failed')
 if (out/'summary.json').exists(): record['summary']=json.loads((out/'summary.json').read_text())
 recordpath.write_text(json.dumps(record,indent=2)+'\n'); print(record['state'].upper()+' '+name+' '+str(record.get('summary',{}).get('functions','?'))+' functions',flush=True); return record

def main():
 p=argparse.ArgumentParser(description=__doc__); p.add_argument('--workers',type=int,default=2); p.add_argument('--ghidra',default=DEFAULT_GHIDRA); p.add_argument('--only',default=''); a=p.parse_args()
 jobs=json.loads((ROOT/'inventory/manifest.json').read_text())['files']; priority={'RcHcGame.dat':0,'RcHcMenu.dat':1}; jobs=sorted(jobs,key=lambda j:(priority.get(j['path'],2),j['bytes']))
 if a.only: jobs=[j for j in jobs if a.only in j['path']]
 with concurrent.futures.ThreadPoolExecutor(max_workers=a.workers) as pool: results=list(pool.map(lambda j:run(j,a.ghidra),jobs))
 (ROOT/'logs/decompile/jobs.json').write_text(json.dumps(results,indent=2)+'\n')
 raise SystemExit(1 if any(j['state']!='complete' for j in results) else 0)
if __name__=='__main__':main()
