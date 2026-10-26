#!/usr/bin/env python3
"""Apply structurally validated virtual entry seeds to saved projects and refresh exports."""
import subprocess,os,argparse,json
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
p=argparse.ArgumentParser();p.add_argument('--ghidra',default='ghidra-headless');p.add_argument('--only',default='');a=p.parse_args()
env=os.environ.copy();env['JAVA_TOOL_OPTIONS']=' '.join('-D'+k+'="'+str(ROOT/'temp_work')+'"' for k in ['java.io.tmpdir','application.tempdir','application.cachedir']);env['TMPDIR']=str(ROOT/'temp_work');jobs=[]
for binary in ('RcHcGame.dat','RcHcMenu.dat'):
 if a.only and a.only!=binary:continue
 cmd=[a.ghidra,str(ROOT/'analysis-projects'/binary),'analysis','-process',binary,'-noanalysis','-scriptPath',str(ROOT/'scripts'),'-postScript','RecoverVtableFunctions.java',str(ROOT/'inventory'/(binary+'-vtable-seeds.tsv')),'-postScript','RecoverFunctions.java','-postScript','ExportAll.java',str(ROOT/'decompiled'/binary)]
 print('Recovering virtual methods for '+binary,flush=True)
 with (ROOT/'logs/decompile'/(binary+'-vtable-recovery.log')).open('w') as log:r=subprocess.run(cmd,env=env,stdout=log,stderr=subprocess.STDOUT)
 jobs.append({'binary':binary,'exit_code':r.returncode,'command':cmd});print('Finished '+binary+' exit='+str(r.returncode),flush=True)
(ROOT/'logs/decompile'/('vtable-jobs'+('-'+a.only if a.only else '')+'.json')).write_text(json.dumps(jobs,indent=2)+'\n');raise SystemExit(1 if any(j['exit_code'] for j in jobs) else 0)
