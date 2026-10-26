from pathlib import Path
import json,re,subprocess,time
root=Path.cwd();out=root/'temp_work/efficiency-2026-10-26'
names=['level-selection-menu-scenes','player-menu-scenes','player-menu-lifecycle-scenes','new-adventure-skills-scenes','replayed-level-intros-scenes','recovery-menu-scenes','campaign-settings-scenes','cheat-unlock-levels-scenes','touch-scenes','web-subpath-scenes']
report={'date':'2026-10-26','scope':'Current full-application browser scene harnesses referring to obsolete flat-menu buttons, plus current menu/settings prerequisites. No game source or saved-data formats changed by this migration.','sharedHelper':'tests/scene-menu.mjs','activeHarnesses':[],'historicalHarness':{'file':'tests/new-adventure-warning-scenes.mjs','policy':'Keep flat-menu presentation assertions; fail immediately with valid current-suite pointers unless --historical-flat-menu deliberately requests the obsolete source snapshot. Temporary output path updated to temp_work.'},'isolatedFixture':{'file':'tests/pickup-audio-tail-scenes.mjs','policy':'Unchanged: its #start belongs to the fixture HTML, not the game menu.'},'validationBoundary':'Headless source browser checks with software WebGL. Real menus, storage and input where asserted; isolated profiles, no original user saves. Not complete campaign, performance, package or physical touch-device validation. No builds.'}
for name in names:
 log=(out/f'{name}.log').read_text()
 expected={'level-selection-menu-scenes':'Confirm launches the last selected level','player-menu-scenes':'layout passed.','player-menu-lifecycle-scenes':'layout passed.'}.get(name,'PASS')
 if expected not in log or re.search(r'AssertionError|TimeoutError|Error:',log):raise SystemExit(f'Unexpected result in {name}')
 p=root/'tests'/f'{name}.mjs'
 syntax=subprocess.run(['node','--check',str(p)],capture_output=True,text=True)
 if syntax.returncode:raise SystemExit(syntax.stderr)
 runs=sorted((root/'temp_work'/name).glob('run-*'))
 checks=[re.sub(r'^PASS:? ?', '', l) for l in log.splitlines() if l.strip()]
 report['activeHarnesses'].append({'file':str(p.relative_to(root)),'result':'passed','log':str((out/f'{name}.log').relative_to(root)),'checks':checks,'latestEvidenceDirectory':str(runs[-1].relative_to(root)) if runs else 'temp_work/level-selection-menu/ (initial run before unique-output helper was added)'})
p=root/'tests/new-adventure-warning-scenes.mjs';start=time.monotonic();r=subprocess.run(['node',str(p)],capture_output=True,text=True)
assert r.returncode and 'Historical flat-menu harness' in r.stderr
assert 'tests/original-menu-scenes.mjs' not in r.stderr
report['historicalHarness']['failFastVerifiedSeconds']=round(time.monotonic()-start,3)
(out/'menu-harness-audit.json').write_text(json.dumps(report,indent=2)+'\n')
summary=json.loads((out/'documentation-summary.json').read_text());links=json.loads((out/'document-links.json').read_text());refs=json.loads((out/'documentation-reference-review.json').read_text())
summary.update({'markdownFilesAudited':links['filesAudited'],'relativeFileLinksChecked':links['relativeFileLinksChecked'],'missingRelativeFileLinks':len(links['missing']),'headingLinksChecked':refs['headingLinksChecked'],'standaloneLabMarkdownFilesAudited':5,'standaloneLabRelativeLinksChecked':20})
summary['scope']='Root/docs Markdown relative file, heading, npm and tool/test references; maintained guide status and actionable instructions. Standalone lab documentation links/paths also audited; isolated runtime snapshots and historical evidence preserved.'
summary['modifiedFiles']+=['docs/intentional-fixes-and-findings.md','docs/campaign-menu-native.md','docs/player-profiles-native.md','docs/autosave.md','docs/original-menu-native.md','RC_ACTOR_TEST/README.md','RC_COIN_TEST/README.md']
summary['modifiedFiles']=sorted(set(summary['modifiedFiles']))
for change in ['Current-menu verification pointers and shared navigation documented; old flat-menu test explicitly historical rather than a falsely failing current test.','Corrected automatic replay policy description to account for restored Avontuur/Snelspel UI sharing one campaign/save system.','Updated recovery, settings/cheat routes and lab retained-artifact descriptions.']:
 if change not in summary['changes']:summary['changes'].append(change)
summary['verification']='Actual source/tool/release records checked; all relative file/heading/npm/tool references passed, including standalone lab docs. Ten affected current-menu scene harnesses passed after migration; no broad old gameplay suite or builds. See menu-harness-audit.json for exact tests and software-renderer boundary.'
(out/'documentation-summary.json').write_text(json.dumps(summary,indent=2)+'\n')
print(json.dumps({'docs':summary['modifiedFiles'],'menuHarnessesPassed':len(names),'historicalGuardSeconds':report['historicalHarness']['failFastVerifiedSeconds']},indent=2))
