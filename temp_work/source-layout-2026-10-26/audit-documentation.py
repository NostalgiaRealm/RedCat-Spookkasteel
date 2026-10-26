from pathlib import Path
import re,json,os,urllib.parse,collections
root=Path(__file__).resolve().parents[2]
# Do not walk application outputs, dependency installations, copied third-party trees,
# or a prohibited website copy. Retained project Markdown remains in the inventory.
pruned=[]; paths=[]
exclude={'.git','node_modules','RCSPOOK_WEBSITE','dist','.gradle','build','.venv'}
for d,dirs,files in os.walk(root):
 for name in dirs[:]:
  if name in exclude:
   pruned.append(str((Path(d)/name).relative_to(root)));dirs.remove(name)
 for name in files:
  if name.lower().endswith('.md'):paths.append(Path(d)/name)
def category(p):
 rel=p.relative_to(root)
 if rel.parts[0]=='temp_work' and rel.name!='README.md':return 'retained-record'
 if rel.parts[0]=='temp_work':return 'retained-record' if len(rel.parts)>2 else 'maintained-index'
 if rel.parts[0]=='RC_ORIGINAL_DECOMPILED':return 'recovery-documentation'
 if rel.parts[0] in ['RC_ACTOR_TEST','RC_COIN_TEST','RC_SHOVE_TEST']:return 'independent-lab'
 if rel.parts[0]=='assets':return 'license-or-attribution'
 return 'maintained'
def nofences(s):
 return re.sub(r'(?ms)^\s*(`{3,}|~{3,})[^\n]*\n.*?^\s*\1\s*$',lambda m:'\n'*m[0].count('\n'),s)
def slug(s):
 s=re.sub(r'\[([^]]+)\]\([^)]*\)',r'\1',s);s=re.sub(r'<[^>]+>','',s);s=s.replace('`','').lower();s=re.sub(r'[^\w\- ]','',s);return s.replace(' ','-')
def headings(p):
 try:s=p.read_text()
 except (UnicodeError,IsADirectoryError):return None
 if p.suffix!='.md':return None
 found=set();counts={}
 for m in re.finditer(r'^#{1,6}\s+(.+?)\s*#*$',nofences(s),re.M):
  h=slug(m[1]);n=counts.get(h,0);counts[h]=n+1;found.add(h if n==0 else f'{h}-{n}')
 return found
records=[];issues=[];checkscount=0;anchorscount=0;codepointers=[];cmdissues=[]
package=json.loads((root/'package.json').read_text())
for p in sorted(paths):
 raw=p.read_text(errors='replace');s=nofences(raw);cat=category(p);rel=str(p.relative_to(root));records.append({'file':rel,'category':cat,'lines':raw.count('\n')+1})
 links=list(re.finditer(r'(?<!!)\[[^\]\n]*\]\((<[^>]+>|[^\s)]+)(?:\s+["\'][^\n]*?["\'])?\)',s))
 links+=list(re.finditer(r'(?m)^\s*\[[^\]\n]+\]:\s*(<[^>]+>|\S+)',s))
 for m in links:
  target=m[1].strip('<>')
  if re.match(r'^[a-zA-Z][a-zA-Z0-9+.-]*:',target):continue
  target=urllib.parse.urlsplit(target);filepart=urllib.parse.unquote(target.path);anchor=urllib.parse.unquote(target.fragment)
  resolved=(p.parent/filepart).resolve() if filepart else p
  checkscount+=1
  if not resolved.exists():issues.append({'file':rel,'line':s[:m.start()].count('\n')+1,'target':m[1],'category':cat,'issue':'missing-file'});continue
  if anchor:
   known=headings(resolved)
   if known is not None:
    anchorscount+=1
    if anchor not in known:issues.append({'file':rel,'line':s[:m.start()].count('\n')+1,'target':m[1],'category':cat,'issue':'missing-heading'})
 if cat in ('maintained','maintained-index','recovery-documentation'):
  for m in re.finditer(r'`((?:source|src|tools|tests|electron)/[^`\s*]+)`',raw):
   v=m[1].rstrip('.,:');v=re.sub(r':\d+(?:-\d+)?$','',v)
   if not (root/v).exists():codepointers.append({'file':rel,'line':raw[:m.start()].count('\n')+1,'target':v})
  for m in re.finditer(r'\bnpm run ([\w:-]+)',raw):
   if m[1] not in package['scripts']:cmdissues.append({'file':rel,'command':m[1]})
report={'files':records,'fileCount':len(records),'categories':dict(collections.Counter(r['category'] for r in records)),'relativeLinksChecked':checkscount,'headingLinksChecked':anchorscount,'issues':issues,'inlinePathCandidates':codepointers,'npmScriptCandidates':cmdissues,'prunedDirectories':pruned,'scope':'All discovered Markdown outside dependencies/build outputs/prohibited website copy; retained historical and upstream Markdown inventoried and link-scanned, not rewritten as current implementation.'}
(root/'temp_work/source-layout-2026-10-26/documentation-audit.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps({'fileCount':len(records),'categories':report['categories'],'relativeLinksChecked':checkscount,'headingLinksChecked':anchorscount,'currentIssues':[i for i in issues if i['category']!='retained-record'],'archivalIssueCount':len([i for i in issues if i['category']=='retained-record']),'inlinePathCandidates':codepointers,'npmScriptCandidates':cmdissues},indent=2))
