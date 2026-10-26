from pathlib import Path
import re,json,urllib.parse
root=Path(__file__).resolve().parents[2]
files=sorted([*root.glob('*.md'),*root.glob('docs/**/*.md')])
missing=[];checked=0
for file in files:
 text=file.read_text()
 text=re.sub(r'(?ms)^\s*(`{3,}|~{3,})[^\n]*\n.*?^\s*\1\s*$','',text)
 links=list(re.finditer(r'(?<!!)\[[^\]\n]*\]\((<[^>]+>|[^\s)]+)(?:\s+["\'][^\n]*?["\'])?\)',text))
 links+=list(re.finditer(r'(?m)^\s*\[[^\]\n]+\]:\s*(<[^>]+>|\S+)',text))
 for match in links:
  target=match.group(1).strip('<>')
  if re.match(r'^[a-zA-Z][a-zA-Z0-9+.-]*:',target) or target.startswith('#'):continue
  parsed=urllib.parse.urlsplit(target); target=urllib.parse.unquote(parsed.path)
  if not target:continue
  checked+=1; resolved=(file.parent/target).resolve()
  if not resolved.exists(): missing.append({'file':str(file.relative_to(root)),'target':target,'line':text[:match.start()].count('\n')+1})
report={'filesAudited':len(files),'files':[str(f.relative_to(root)) for f in files],'relativeFileLinksChecked':checked,'missing':missing,'scope':'Root and docs Markdown; fenced code and external URLs excluded; checks file targets rather than heading fragments.'}
(root/'temp_work/efficiency-2026-10-26/document-links.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps({k:v for k,v in report.items() if k!='files'},indent=2))
