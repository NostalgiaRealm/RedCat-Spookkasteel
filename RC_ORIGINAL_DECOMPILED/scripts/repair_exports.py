#!/usr/bin/env python3
"""Reproduce evidence-scoped analysis repairs and refresh all affected exports."""
import argparse,subprocess,os,json,time
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
p=argparse.ArgumentParser();p.add_argument('--ghidra',default='ghidra-headless');a=p.parse_args()
env=os.environ.copy();env['JAVA_TOOL_OPTIONS']=' '.join('-D'+k+'="'+str(ROOT/'temp_work')+'"' for k in ['java.io.tmpdir','application.tempdir','application.cachedir']);env['TMPDIR']=str(ROOT/'temp_work')
items=[]
for binary,script,args in [('D3DDrv.dll','RepairDecompilerFailure.java',['10007f72']),('D3DDrvRGB.dll','RepairDecompilerFailure.java',['10008989']),('RcHcGame.dat','RecoverDaviSwitch.java',[])]:
 cmd=[a.ghidra,str(ROOT/'analysis-projects'/binary),'analysis','-process',binary,'-noanalysis','-scriptPath',str(ROOT/'scripts'),'-postScript',script,*args,'-postScript','ExportAll.java',str(ROOT/'decompiled'/binary)]
 with (ROOT/'logs/decompile'/f'{binary}-repair.log').open('w') as log:r=subprocess.run(cmd,env=env,stdout=log,stderr=subprocess.STDOUT)
 items.append({'binary':binary,'script':script,'args':args,'exit_code':r.returncode,'command':cmd})
(ROOT/'logs/decompile/repair-jobs.json').write_text(json.dumps(items,indent=2)+'\n')
raise SystemExit(1 if any(i['exit_code'] for i in items) else 0)
