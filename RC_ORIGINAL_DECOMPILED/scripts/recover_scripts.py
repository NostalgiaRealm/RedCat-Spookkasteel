#!/usr/bin/env python3
"""Render every parsed Davi instruction without inventing high-level source structure."""
import json
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
GROUPS=('classes','globals','constants','objects','functions','variables','members','parameters','locals','handlers')
BINARY={1:'+',2:'*',3:'-',4:'/',5:'>=',6:'<=',7:'>',8:'<',9:'==',10:'!=',11:'OR',12:'AND',14:'MOD',15:'DIV',16:'POWER'}
def walk(obj):
 for k in GROUPS:
  for x in obj.get(k,[]): yield x; yield from walk(x)
def expr(e):
 tag=e['tag']
 if tag==0:return json.dumps(e['value'],ensure_ascii=False)
 if tag==1:return 'POP<'+str(e['type'])+'>()'
 if tag==2:return ref(e['ref'])
 if tag==3:return 'SELF'
 if tag==4:return 'CALL '+ref(e['ref'])+'(stack; flag='+str(e['callFlag'])+')'
 if tag==5:return 'TEMP['+str(e['index'])+']'
 raise ValueError(tag)
def ref(r): return '<null>' if r is None else r['name']+'['+r['id']+']'
def instruction(i):
 op=i['opcode']
 target='RETURN' if i.get('target')==-2 else 'L'+str(i.get('target'))
 if op==0:return 'GOTO '+target
 if op==1:return 'IF '+('' if i['whenTruthy'] else 'NOT ')+expr(i['a'])+' THEN '+target
 if op==2:return 'IF '+('' if i['whenTruthy'] else 'NOT ')+expr(i['a'])+' '+BINARY.get(i['operator'],'BINOP_'+str(i['operator']))+' '+expr(i['b'])+' THEN '+target
 if op==3:return expr(i['destination'])+' := '+expr(i['source'])
 if op==4:return expr(i['destination'])+' := '+expr(i['source'])+' '+BINARY.get(i['operator'],'BINOP_'+str(i['operator']))+' '+expr(i['rhs'])
 if op in (5,6):return expr(i['destination'])+' := '+('UNOP_' if op==5 else 'CAST_')+str(i['operator'])+'('+expr(i['source'])+')'
 raise ValueError(op)
def main():
 out=ROOT/'recovered-scripts/listings';out.mkdir(parents=True,exist_ok=True); index=[]
 for f in sorted((ROOT/'recovered-scripts/ir').glob('lvl*.json')):
  p=json.loads(f.read_text());lines=['// Complete address-preserving Davi-Script v27 listing.','// Recovered representation, not the original high-level source.','// Stack/cast/operator IDs remain explicit; JSON IR is the lossless authority.','// Input '+p['source']+' SHA256 '+p['sha256'],'']; count=0
  for r in walk(p):
   params=', '.join(x['type']['name']+' '+x['name'] for x in r.get('parameters',[])); name=r['name']+'('+params+')' if 'parameters' in r else r['name']
   lines.append(f"{r['kind']} {r['type']['name']} {name}; // id={r['id']} bytes=0x{r['offset']:x}..0x{r['endOffset']:x}")
   if 'owner' in r:lines.append('  // Owner: '+ref(r['owner']))
   if 'instructions' in r:
    lines.append('{')
    for n,i in enumerate(r['instructions']):lines.append(f"  L{n}: {instruction(i)}; // byte 0x{i['offset']:x}");count+=1
    lines.append('}')
  dest=out/(f.stem+'.davi');dest.write_text('\n'.join(lines)+'\n');index.append({'level':f.stem,'instructions':count,'statistics':p['statistics'],'listing':str(dest.relative_to(ROOT))})
 (ROOT/'recovered-scripts/index.json').write_text(json.dumps(index,indent=2)+'\n');print(json.dumps(index,indent=2))
if __name__=='__main__':main()
