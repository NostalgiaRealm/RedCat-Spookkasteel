from pathlib import Path
from urllib.parse import urlsplit,unquote
import json,re
root=Path.cwd();files=sorted([*root.glob('*.md'),*root.glob('docs/**/*.md')]);labfiles=sorted([*root.glob('RC_*_TEST/*.md'),*root.glob('RC_*_TEST/docs/**/*.md')])
package=json.loads((root/'package.json').read_text());result={'headingLinksChecked':0,'headingLinksRequiringReview':[],'npmScriptReferencesRequiringReview':[],'toolTestReferencesRequiringReview':[]}
def slugs(file):
 seen={};out=set()
 for line in file.read_text().splitlines():
  m=re.match(r'^#{1,6}\s+(.+?)\s*#*$',line)
  if not m:continue
  text=re.sub(r'<[^>]*>','',m[1]).lower()
  text=re.sub(r'[^\w\- ]','',text).strip().replace(' ','-')
  count=seen.get(text,0);seen[text]=count+1
  out.add(text+(f'-{count}' if count else ''))
 return out
for file in files:
 text=file.read_text();withoutcode=re.sub(r'(?ms)^\s*(`{3,}|~{3,})[^\n]*\n.*?^\s*\1\s*$','',text)
 for m in re.finditer(r'(?<!!)\[[^\]\n]*\]\((<[^>]+>|[^\s)]+)(?:\s+["\'][^\n]*?["\'])?\)',withoutcode):
  target=m[1].strip('<>');url=urlsplit(target)
  if url.scheme or not url.fragment:continue
  dest=(file.parent/unquote(url.path)).resolve() if url.path else file
  if dest.suffix!='.md' or not dest.is_file():continue
  result['headingLinksChecked']+=1
  if unquote(url.fragment) not in slugs(dest):result['headingLinksRequiringReview'].append({'file':str(file.relative_to(root)),'target':target})
 for cmd in re.findall(r'\bnpm run ([a-zA-Z0-9_:-]+)',text):
  if cmd not in package['scripts']:result['npmScriptReferencesRequiringReview'].append({'file':str(file.relative_to(root)),'command':cmd})
 for command in re.findall(r'\b(?:node|python3)(?: --[a-z-]+)* ((?:tools|tests)/[a-zA-Z0-9_./-]+)',text):
  if not (root/command).exists():result['toolTestReferencesRequiringReview'].append({'file':str(file.relative_to(root)),'command':command})
(root/'temp_work/efficiency-2026-10-26/documentation-reference-review.json').write_text(json.dumps(result,indent=2)+'\n')
lab={'filesAudited':[str(p.relative_to(root)) for p in labfiles],'relativeLinksChecked':0,'missingLinks':[],'missingToolTestCommands':[],'obsoleteWorkPaths':[],'scope':'Standalone lab root/docs Markdown, not vendored snapshots or node_modules. Original installation research references remain intentionally historical/read-only.'}
for p in labfiles:
 s=p.read_text()
 for m in re.finditer(r'\[[^\]\n]*\]\((<[^>]+>|[^\s)]+)\)',s):
  u=urlsplit(m[1].strip('<>'))
  if u.scheme or not u.path:continue
  lab['relativeLinksChecked']+=1
  if not (p.parent/unquote(u.path)).exists():lab['missingLinks'].append({'file':str(p.relative_to(root)),'target':m[1]})
 for cmd in re.findall(r'\b(?:node|python3)(?: --[a-z-]+)* ((?:tools|tests)/[a-zA-Z0-9_./-]+)',s):
  if not (root/p.parts[-2]/cmd).exists() and not(p.parent/cmd).exists():lab['missingToolTestCommands'].append({'file':str(p.relative_to(root)),'command':cmd})
 if re.search(r'current_work|/mnt/Storage/Cloud|/home/rick/RCSPOOK_NEW',s):lab['obsoleteWorkPaths'].append(str(p.relative_to(root)))
(root/'temp_work/efficiency-2026-10-26/lab-documentation-review.json').write_text(json.dumps(lab,indent=2)+'\n')
print(json.dumps({'rootDocs':result,'labs':lab},indent=2))
