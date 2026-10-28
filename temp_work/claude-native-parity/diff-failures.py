import re,sys
def fails(path):
    s=open(path).read();tail=s[s.find('✖ failing tests'):]
    out=set()
    for m in re.finditer(r'^test at (tests/[^:]+):\d+:\d+\n✖ (.*?) \(\d',tail,re.M):out.add((m.group(1),m.group(2)))
    return out
cur=fails(sys.argv[1]);base=fails(sys.argv[2])
new=sorted(cur-base);fixed=sorted(base-cur)
print('NEW',len(new));[print(' ',f,'::',t) for f,t in new]
print('FIXED/CHANGED',len(fixed));[print(' ',f,'::',t) for f,t in fixed]
