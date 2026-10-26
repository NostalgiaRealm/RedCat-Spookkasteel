#!/usr/bin/env python3
"""Recover explicitly inventoried stored-pointer/prologue candidates; preserve inference labels."""
import subprocess,os,argparse,json
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
p=argparse.ArgumentParser();p.add_argument('--ghidra',default='ghidra-headless');a=p.parse_args()
env=os.environ.copy();env['JAVA_TOOL_OPTIONS']=' '.join('-D'+k+'="'+str(ROOT/'temp_work')+'"' for k in ['java.io.tmpdir','application.tempdir','application.cachedir']);env['TMPDIR']=str(ROOT/'temp_work');jobs=[]
for seed in sorted((ROOT/'inventory').glob('*-callback-seeds.tsv')):
 binary=seed.name.removesuffix('-callback-seeds.tsv')
 cmd=[a.ghidra,str(ROOT/'analysis-projects'/binary),'analysis','-process',binary,'-noanalysis','-scriptPath',str(ROOT/'scripts'),'-postScript','RecoverCallbackFunctions.java',str(seed),'-postScript','RecoverFunctions.java','-postScript','ExportAll.java',str(ROOT/'decompiled'/binary)]
 with (ROOT/'logs/decompile'/(binary+'-callback-recovery.log')).open('w') as log:r=subprocess.run(cmd,env=env,stdout=log,stderr=subprocess.STDOUT)
 jobs.append({'binary':binary,'exit_code':r.returncode,'command':cmd});print(binary,r.returncode,flush=True)
(ROOT/'logs/decompile/callback-jobs.json').write_text(json.dumps(jobs,indent=2)+'\n');raise SystemExit(1 if any(j['exit_code'] for j in jobs) else 0)
