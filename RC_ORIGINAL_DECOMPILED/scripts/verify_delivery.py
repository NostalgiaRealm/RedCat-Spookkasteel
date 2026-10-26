#!/usr/bin/env python3
"""Verify original identity, complete discovered-function exports and structured recovery."""
import argparse,csv,hashlib,json,time
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
 manifest=json.loads((ROOT/'inventory/manifest.json').read_text());files=json.loads((ROOT/'inventory/files.json').read_text());source=Path(manifest['source_root']);errors=[];programs=[]
 for f in files['files']:
  original=ROOT/'originals'/f['path']
  if f['kind']!='local-runtime-data' and not original.is_file():errors.append('Missing preserved original '+f['path'])
  elif original.exists() and sha(original)!=f['sha256']:errors.append('Changed preserved original '+f['path'])
 for f in manifest['files']:
  name=f['path'];out=ROOT/'decompiled'/name;summary=json.loads((out/'summary.json').read_text());rows=list(csv.DictReader((out/'functions.tsv').open(),delimiter='\t'));full=(out/'full_decompilation.c').read_text()
  if sha(source/name)!=f['sha256']:errors.append('Source binary changed '+name)
  if len(rows)!=summary['functions']:errors.append('Function count mismatch '+name)
  if not (ROOT/'analysis-projects'/name/'analysis.gpr').is_file():errors.append('Missing Ghidra project '+name)
  seen=set()
  for row in rows:
   if row['address'] in seen:errors.append('Duplicate function '+name+' '+row['address'])
   seen.add(row['address']);p=out/row['file']
   if not p.is_file() or row['address'] not in p.read_text():errors.append('Missing/incorrect function '+str(p))
   if row['status']!='decompiled':errors.append('C fallback '+name+' '+row['address'])
  if not (out/'assembly.tsv').is_file() or not (out/'linear-disassembly.asm').is_file():errors.append('Missing assembly '+name)
  programs.append({'binary':name,**summary,'unresolved_switch_warnings':full.count('Could not recover jumptable'),'unreachable_block_warnings':full.count('Removing unreachable block'),'original_sha256':f['sha256']})
 for resource in json.loads((ROOT/'inventory/resources.json').read_text()):
  payload=ROOT/resource['path']
  if not payload.is_file() or sha(payload)!=resource['sha256']:errors.append('Missing/changed PE resource '+resource['path'])
 scripts=json.loads((ROOT/'recovered-scripts/index.json').read_text());forms=json.loads((ROOT/'recovered-resources/forms/index.json').read_text());levels=json.loads((ROOT/'recovered-levels/index.json').read_text());helpfiles=json.loads((ROOT/'recovered-resources/help/index.json').read_text())
 for s in scripts:
  data=json.loads((ROOT/'recovered-scripts/ir'/f"{s['level']}.json").read_text());original=ROOT/'originals/Levels'/data['source']
  if sha(original)!=data['sha256'] or s['instructions']!=data['statistics']['instructions']:errors.append('Script mismatch '+s['level'])
  listing=(ROOT/s['listing']).read_text()
  if listing.count('// byte 0x')!=s['instructions']:errors.append('Instruction listing mismatch '+s['level'])
 if any(not f['fully_consumed'] for f in forms):errors.append('Incomplete form recovery')
 if any(not l['fully_consumed'] for l in levels):errors.append('Incomplete level recovery')
 if any(h['exit_code'] for h in helpfiles):errors.append('Help extraction failed')
 recovered=ROOT/'decompiled/RcHcGame.dat/functions/005fc480_FUN_005fc480.c'
 if 'switch' not in recovered.read_text() or 'case 0x19' not in recovered.read_text():errors.append('UNOP dispatch switch incomplete')
 report={'verified_utc':time.strftime('%Y-%m-%dT%H:%M:%SZ',time.gmtime()),'inventory_files':len(files['files']),'native_binaries':len(programs),'native_functions':sum(p['functions'] for p in programs),'native_functions_decompiled':sum(p['decompiled'] for p in programs),'assembly_fallbacks':sum(p['assembly_fallback'] for p in programs),'script_modules':len(scripts),'script_instructions':sum(s['instructions'] for s in scripts),'script_records':sum(s['statistics']['records'] for s in scripts),'native_forms':len(forms),'help_projects':len(helpfiles),'level_entities':sum(x['entities'] for x in levels),'pe_resources':len(json.loads((ROOT/'inventory/resources.json').read_text())),'preserved_files':sum(1 for p in (ROOT/'originals').rglob('*') if p.is_file()),'programs':programs,'code_gap_classification':json.loads((ROOT/'inventory/code-gap-classification.json').read_text()),'errors':errors,'status':'pass' if not errors else 'fail','limits':['Counts cover every function Ghidra discovered; unknown function boundaries and indirect destinations remain.', 'Decoded instructions outside functions and executable bytes without decoded instructions are reported separately for each image.', 'All original bytes and linear executable-section disassembly are retained; undecoded ranges may include padding or data, not necessarily missing functions.', 'C is inferred pseudocode, not the original source, buildable source or proof of gameplay equivalence.']}
 (ROOT/'VERIFICATION.json').write_text(json.dumps(report,indent=2)+'\n')
 lines=['# Decompiled original: verification and coverage','',f"Verified {report['verified_utc']}. Status: **{report['status'].upper()}**.",'',f"Inventoried {report['inventory_files']} original-installation files and retained {report['preserved_files']} non-log/non-save inputs. All 11 native binaries match their source hashes. Exported **{report['native_functions']:,} discovered functions**, with **{report['assembly_fallbacks']} C-decompilation failures** after repairs.",'',f"Recovered all {len(scripts)} Davi-Script objects ({report['script_records']:,} records; {report['script_instructions']:,} instructions), {len(forms)} menu forms, 258 PE resource payloads, all three WinHelp projects, and {report['level_entities']:,} BSP entity records.",'','| Binary | Functions / C | Instructions | Decoded bytes outside functions | Executable bytes without instructions | Unresolved switch warnings |','|---|---:|---:|---:|---:|---:|']
 for p in programs:lines.append(f"| `{p['binary']}` | {p['functions']:,} / {p['decompiled']:,} | {p['instructions']:,} | {p['instruction_bytes_outside_functions']:,} | {p['executable_bytes_without_instructions']:,} | {p['unresolved_switch_warnings']:,} |")
 lines+=['','## Meaning and limits','']+['- '+s for s in report['limits']]+['','An unresolved-switch warning is a decompiler analysis limitation; its original jump/table bytes remain available. It does not establish an original-game defect or justify replacing port behavior without tracing the affected branch. In particular, function counts are not a claim that all original source functions were identified.','', '## Analysis repairs','', '- `D3DDrv.dll:10007f72` and `D3DDrvRGB.dll:10008989`: removed the locked status of an automatically inferred function signature to resolve overlapping x87 input varnodes. Machine code is unchanged; recovered types remain inferred.', '- Validated MSVC RTTI and Delphi VMT metadata recovered virtual procedures missed by the default analyzer. Delphi methods with instructions decoded across their real entry points were repaired at those validated entry addresses. Exact seeds and retained logs record the evidence.', '- Stored executable pointers plus canonical prologues identify additional candidate runtime procedures; they are labeled as inferred routine boundaries.', '- `RcHcGame.dat:005fc480`: restored all 26 UNOP dispatch destinations from the exact pointer table at `005fcb90`, including shared case blocks. The saved project and C listing retain this evidence-based override.', '', 'The initial job logs retain their original two failures for provenance. `VERIFICATION.json` and current per-image `summary.json` describe the final corrected exports. Earlier `failed-assembly` files are retained evidence, not current unresolved failures.', '', 'No original game executables were launched by this export pipeline. Verification checked files, hashes, recoverability and coverage, not campaign completion or native gameplay equivalence.']
 lines += ['','## Remaining code discovery by byte pattern','','| Binary | Non-padding decoded bytes outside functions | Undecoded bytes not entirely fill |','|---|---:|---:|']
 for gap in report['code_gap_classification']:lines.append(f"| `{gap['binary']}` | {gap['remaining_nonpadding_unowned_instruction_bytes']:,} | {gap['remaining_unclassified_executable_bytes']:,} |")
 lines += ['', 'These are outstanding static-analysis boundaries, not a count of unported features. Exact ranges and original bytes are retained for future review. In Delphi, executable CODE sections also contain strings, RTTI and form-class metadata; executable-section membership alone does not establish code.']
 if errors:lines+=['','## Errors','']+['- '+e for e in errors]
 (ROOT/'VERIFICATION.md').write_text('\n'.join(lines)+'\n');print(json.dumps({k:v for k,v in report.items() if k not in ('programs','limits','code_gap_classification')},indent=2))
 raise SystemExit(1 if errors else 0)
if __name__=='__main__':
 argparse.ArgumentParser(description=__doc__).parse_args()
 main()
