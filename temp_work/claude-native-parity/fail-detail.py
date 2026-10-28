import re,sys
s=open(sys.argv[1]).read();tail=s[s.find('✖ failing tests'):]
pat=sys.argv[2]
blocks=re.split(r'\n(?=test at )',tail)
for b in blocks:
    if pat in b.split('\n')[0] or pat in b[:300]:
        lines=b.split('\n')
        keep=[l for l in lines[:40] if 'node:internal' not in l and 'node:async' not in l]
        print('\n'.join(keep[:22]));print('-----')
