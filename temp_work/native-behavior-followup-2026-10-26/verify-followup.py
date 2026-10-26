#!/usr/bin/env python3
"""Record retained scoped checks and source hashes; does not rerun tests/builds."""
from pathlib import Path
import datetime, hashlib, json, re, subprocess
BASE=Path(__file__).resolve().parent
ROOT=BASE.parents[1]
def sha(path): return hashlib.sha256(path.read_bytes()).hexdigest()
def read(name): return json.loads((BASE/name).read_text())
logs=[
 'vm/coercion-tests-final.txt',
 'player/player-shot-tests.tap','player/player-hint-tests.tap',
 'player/player-release-consumers-tests.tap','player/player-flight-tests.tap','player/enemy-flight-tests.tap',
 'effects/death-smoke-tests-final.log','effects/jester-timing-tests-final.log','effects/jester-integration-tests.log',
 'effects/prop-debris-save-tests.txt','effects/prop-debris-save-final-tests.txt',
 'world/light-review/light-prop-clock-tests-final.txt',
 'world/light-review/impact-electric-light-integration-final.txt',
 'effects/green-variant-tests.txt',
 'effects/electric/helper-tests.tap','effects/electric/effects-final-order-tests.txt',
 'effects/explosion-variants-final-integration.txt',
]
# World ownership supplies the final test list once its phase corrections finish.
extra=BASE/'world/final-verification-logs.json'
if extra.exists():
 manifest=read('world/final-verification-logs.json')
 logs += [entry['path'] for entry in manifest['finalSourceLogs']]
 logs += [entry['path'] for entry in manifest.get('overlappingLogs',[])]
checks=[]
for name in logs:
 text=(BASE/name).read_text()
 stats={}
 for key in ['tests','pass','fail','skipped']:
  matches=re.findall(r'(?:ℹ|#) '+key+r' (\d+)',text)
  if matches: stats[key]=int(matches[-1])
 assert stats.get('fail')==0 and stats.get('pass',0)>0,(name,stats)
 checks.append({'log':name,'sha256':sha(BASE/name),**stats})
vm=read('vm/differential-probe.json');assert vm['mismatches']==0
atof=read('vm/atof-boundary-probe.json');assert atof['mismatches']==0
formatting=read('vm/format-boundary-probe.json');assert formatting['mismatches']==0
light=read('world/light-review/light-clock-differential.json');assert light['ticks']==74 and light['mismatches']==0
artwork=read('effects/variant-artwork-verification.json');assert artwork['result']=='PASS'
assert len(artwork['newImages'])==16 and all(item['rgbaPixelExact'] for item in artwork['newImages'])
electric=read('effects/electric/spark-kernel-probe.json');assert not electric['mismatches']
variantGpu=read('effects/explosion-variants-gpu-report.json')
assert not variantGpu['errors'] and variantGpu['remainingSceneChildren']==0
assert all(case['glError']==0 for case in variantGpu['cases'])
assert variantGpu['cases'][-1]['colored']==0 and variantGpu['cases'][1]['colored']>0
fx=read('effects/native-effects-differential-report.json')
for group in ['deathSmoke','jester']:
 for key in ['counts','alpha','size']: assert fx[group][key]==0
assert fx['jester']['maxPosition']<.0003
shader=read('effects/smoke-billboard-report.json')
assert len(shader['cases'])==12 and not shader['errors']
assert all(c['different']==0 and c['glError']==0 for c in shader['cases'])
original=Path('/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat')
assert sha(original)==vm['sha256']
subprocess.run(['git','diff','--check'],cwd=ROOT,check=True)
paths=['src','tests','docs','tools','assets/effects']
tracked=subprocess.check_output(['git','diff','--name-only','--',*paths],cwd=ROOT,text=True).splitlines()
untracked=subprocess.check_output(['git','ls-files','--others','--exclude-standard','--',*paths],cwd=ROOT,text=True).splitlines()
files={name:sha(ROOT/name) for name in sorted(set(tracked+untracked)) if (ROOT/name).is_file()}
report={
 'date':datetime.datetime.now(datetime.timezone.utc).isoformat(),
 'status':'scoped_checks_passed',
 'originalSha256':sha(original),
 'originalModified':False,'packagesBuilt':False,'published':False,
 'testLogs':checks,
 'testCounting':'Logs overlap; their counts must not be summed as unique tests. Earlier failure/diagnostic attempts are retained separately.',
 'nativeVmDifferential':vm,'additionalAtofBoundaryCases':len(atof['cases']),
 'additionalFormatterBoundaryCases':len(formatting['cases']),
 'nativeEffectsDifferential':fx,
 'nativeLightClockDifferential':light,
 'variantArtwork':artwork,'explosionVariantGpu':variantGpu,
 'electricSparkKernel':{'cases':len(electric['cases']),'mismatches':len(electric['mismatches']),
   'maximumFloatDifference':max(case['maxFloatDifference'] for case in electric['cases'])},
 'gpu':{'device':shader['gpu'],'pixelIdenticalCases':len(shader['cases'])},
 'sourceAndDocsSha256':files,
 'scope':'Current local source; bounded original-byte kernels, focused source regressions and shader comparison. Not proof of universal engine parity, a new complete campaign, native device packages, global RNG or Genesis collision equivalence.',
 'changeRecord':'docs/native-behavior-followup-2026-10-26.md',
}
(BASE/'verification.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps({'status':report['status'],'testLogs':len(checks),'sourceFiles':len(files),'nativeVmCases':vm['cases'],'shaderCases':len(shader['cases'])}))
