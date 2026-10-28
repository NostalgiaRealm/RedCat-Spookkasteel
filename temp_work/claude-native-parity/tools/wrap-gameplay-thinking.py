"""One-off fixture rewrite (28 October 2026): wrap each `new Gameplay(...)`
in the given test files with thinkingOnFirstUpdate(...), so mid-encounter
fixtures start with thinking enemies (native think gate, gameplay.js)."""
import sys
IMP="import {thinkingOnFirstUpdate} from './support/enemy-thinking.mjs';"
for path in sys.argv[1:]:
    s=open(path).read();out=[];i=0;count=0
    while True:
        j=s.find('new Gameplay(',i)
        if j<0:out.append(s[i:]);break
        if s[max(0,j-22):j].endswith('thinkingOnFirstUpdate('):
            out.append(s[i:j+13]);i=j+13;continue
        k=j+len('new Gameplay(');depth=1;quote=None
        while depth:
            c=s[k]
            if quote:
                if c=='\\':k+=1
                elif c==quote:quote=None
            elif c in '\'"`':quote=c
            elif c=='(':depth+=1
            elif c==')':depth-=1
            k+=1
        out.append(s[i:j]);out.append('thinkingOnFirstUpdate('+s[j:k]+')');i=k;count+=1
    s=''.join(out)
    if count and IMP not in s:
        lines=s.split('\n');last=max(n for n,l in enumerate(lines) if l.startswith('import '))
        lines.insert(last+1,"// Mid-encounter fixtures: enemies are already thinking (gameplay.js updateEnemy).\n"+IMP);s='\n'.join(lines)
    open(path,'w').write(s);print(count,path)
