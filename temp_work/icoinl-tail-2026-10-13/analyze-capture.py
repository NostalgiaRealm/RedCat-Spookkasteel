from pathlib import Path
import json
import numpy as np
from scipy.signal import correlate, correlation_lags
root=Path(__file__).parent
j=json.loads((root/'captured-audio.json').read_text());ref=np.array(j['reference'])
result=[]
for r in j['results']:
    x=np.concatenate([np.array(c['data']) for c in r['chunks']]);sr=r['sampleRate']
    nz=np.flatnonzero(abs(x)>1e-5)
    cor=correlate(x,ref);lags=correlation_lags(len(x),len(ref));lag=int(lags[np.argmax(cor)])
    aligned=np.zeros(len(ref));a=max(0,lag);b=min(len(x),lag+len(ref));aligned[a-lag:b-lag]=x[a:b]
    gain=float(np.dot(aligned,ref)/np.dot(ref,ref))
    end=np.flatnonzero(abs(aligned)>1e-5)
    segments=[]
    for start in range(0,len(ref),1102):
        orig=ref[start:start+1102];out=aligned[start:start+1102]
        segments.append({'start_ms':round(start/sr*1000,2),'rms_ratio':float(np.sqrt(np.mean(out*out)/np.mean(orig*orig))),'error_rms':float(np.sqrt(np.mean((out-orig)**2)))})
    row={'mode':r['mode'],'nonzero_ms':(nz[-1]-nz[0]+1)/sr*1000,'lag':lag,'end_ms':(end[-1]+1)/sr*1000,'gain':gain,'segments':segments}
    result.append(row)
(root/'capture-analysis.json').write_text(json.dumps(result,indent=2))
print(json.dumps(result,indent=2))
