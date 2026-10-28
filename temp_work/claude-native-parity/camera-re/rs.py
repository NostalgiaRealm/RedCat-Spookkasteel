import sys
exec(open('asm.py').read().split('def ann')[0])
va=int(sys.argv[1],16); n=int(sys.argv[2],0) if len(sys.argv)>2 else 64
print(rd(va,n))
