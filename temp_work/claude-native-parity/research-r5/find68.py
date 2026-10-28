import sys,re
rows=[l.rstrip('\n').split('\t') for l in open(sys.argv[1]) if l.strip()][1:]
pat=re.compile(r'(LEA|PUSH|MOV) E?[A-Z]*,?\s*\[?E(AX|BX|CX|DX|SI|DI|BP) \+ 0x68\]')
for i,r in enumerate(rows):
    if len(r)<4: continue
    if re.search(r'(LEA E..,\[E(AX|BX|CX|DX|SI|DI|BP) \+ 0x68\])',r[2]):
        win=rows[i:i+8]
        if any('+ 0x1c]' in w[2] and 'CALL' in w[2] for w in win if len(w)>2):
            print(r[3], r[0], r[2])
