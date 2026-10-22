import wave, json
from pathlib import Path
import numpy as np
from scipy.signal import correlate, find_peaks
out=Path('temp_work/fairy-idle-regression-2026-10-18')
with wave.open('assets/audio/idlefee1.wav') as w:
 rate=w.getframerate(); native=np.frombuffer(w.readframes(w.getnframes()),dtype='<i2').astype(np.float32)/32768
report={}
start=4000;template=native[start:start+8192]
for kind in ['html','buffered']:
 samples=np.fromfile(out/f'idle-{kind}.f32',dtype='<f4')
 c=correlate(samples,template,mode='valid',method='fft')/np.dot(template,template)
 peaks,_=find_peaks(c,height=.95,distance=len(native)//2)
 report[kind]={'sampleRate':rate,'originalFrames':len(native),'matchingLoopOffsets':(peaks-start).tolist(),'matchCorrelation':c[peaks].tolist(),'loopLengths':np.diff(peaks).tolist(),'excessSamplesPerLoop':(np.diff(peaks)-len(native)).tolist(),'excessMsPerLoop':((np.diff(peaks)-len(native))/rate*1000).tolist()}
(out/'loop-sample-analysis.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
