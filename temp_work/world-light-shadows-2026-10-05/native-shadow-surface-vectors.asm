  5d4f50:	83 ec 5c             	sub    esp,0x5c
  5d4f53:	8b 44 24 60          	mov    eax,DWORD PTR [esp+0x60]
  5d4f57:	55                   	push   ebp
  5d4f58:	33 c9                	xor    ecx,ecx
  5d4f5a:	56                   	push   esi
  5d4f5b:	8b 90 88 01 00 00    	mov    edx,DWORD PTR [eax+0x188]
  5d4f61:	8b a8 2c 01 00 00    	mov    ebp,DWORD PTR [eax+0x12c]
  5d4f67:	8b b0 c0 01 00 00    	mov    esi,DWORD PTR [eax+0x1c0]
  5d4f6d:	3b d1                	cmp    edx,ecx
  5d4f6f:	89 6c 24 20          	mov    DWORD PTR [esp+0x20],ebp
  5d4f73:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  5d4f77:	0f 8e c2 02 00 00    	jle    0x5d523f
  5d4f7d:	53                   	push   ebx
  5d4f7e:	57                   	push   edi
  5d4f7f:	89 4c 24 1c          	mov    DWORD PTR [esp+0x1c],ecx
  5d4f83:	eb 08                	jmp    0x5d4f8d
  5d4f85:	8b 6c 24 28          	mov    ebp,DWORD PTR [esp+0x28]
  5d4f89:	8b 44 24 70          	mov    eax,DWORD PTR [esp+0x70]
  5d4f8d:	8b 5c 24 1c          	mov    ebx,DWORD PTR [esp+0x1c]
  5d4f91:	8b 90 30 01 00 00    	mov    edx,DWORD PTR [eax+0x130]
  5d4f97:	03 da                	add    ebx,edx
  5d4f99:	8b 90 50 01 00 00    	mov    edx,DWORD PTR [eax+0x150]
  5d4f9f:	8d 44 24 3c          	lea    eax,[esp+0x3c]
  5d4fa3:	8b 7b 10             	mov    edi,DWORD PTR [ebx+0x10]
  5d4fa6:	50                   	push   eax
  5d4fa7:	c1 e7 06             	shl    edi,0x6
  5d4faa:	03 fa                	add    edi,edx
  5d4fac:	8b cf                	mov    ecx,edi
  5d4fae:	8d 57 0c             	lea    edx,[edi+0xc]
  5d4fb1:	e8 aa de fd ff       	call   0x5b2e60
  5d4fb6:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  5d4fba:	e8 61 df fd ff       	call   0x5b2f20
  5d4fbf:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
  5d4fc2:	dd d8                	fstp   st(0)
  5d4fc4:	8d 0c 80             	lea    ecx,[eax+eax*4]
  5d4fc7:	8d 54 8d 00          	lea    edx,[ebp+ecx*4+0x0]
  5d4fcb:	8b 44 8d 00          	mov    eax,DWORD PTR [ebp+ecx*4+0x0]
  5d4fcf:	89 44 24 30          	mov    DWORD PTR [esp+0x30],eax
  5d4fd3:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
  5d4fd6:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  5d4fda:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  5d4fdd:	89 54 24 38          	mov    DWORD PTR [esp+0x38],edx
  5d4fe1:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
  5d4fe4:	8d 04 80             	lea    eax,[eax+eax*4]
  5d4fe7:	d9 44 85 0c          	fld    DWORD PTR [ebp+eax*4+0xc]
  5d4feb:	8b 43 0c             	mov    eax,DWORD PTR [ebx+0xc]
  5d4fee:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  5d4ff2:	85 c0                	test   eax,eax
  5d4ff4:	74 13                	je     0x5d5009
  5d4ff6:	8d 4c 24 30          	lea    ecx,[esp+0x30]
  5d4ffa:	e8 81 e0 fd ff       	call   0x5b3080
  5d4fff:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  5d5003:	d9 e0                	fchs
  5d5005:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
  5d5009:	8d 54 24 30          	lea    edx,[esp+0x30]
  5d500d:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  5d5011:	e8 2a de fd ff       	call   0x5b2e40
  5d5016:	d8 15 50 a4 64 00    	fcom   DWORD PTR ds:0x64a450
  5d501c:	d9 54 24 14          	fst    DWORD PTR [esp+0x14]
  5d5020:	df e0                	fnstsw ax
  5d5022:	f6 c4 01             	test   ah,0x1
  5d5025:	74 11                	je     0x5d5038
  5d5027:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  5d502b:	dd d8                	fstp   st(0)
  5d502d:	e8 4e e0 fd ff       	call   0x5b3080
  5d5032:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  5d5036:	d9 e0                	fchs
  5d5038:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  5d503e:	d8 f1                	fdiv   st,st(1)
  5d5040:	8d 6e 1c             	lea    ebp,[esi+0x1c]
  5d5043:	8b df                	mov    ebx,edi
  5d5045:	89 6c 24 10          	mov    DWORD PTR [esp+0x10],ebp
  5d5049:	c7 44 24 20 02 00 00 	mov    DWORD PTR [esp+0x20],0x2
  5d5050:	00 
  5d5051:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
  5d5055:	dd d8                	fstp   st(0)
  5d5057:	8b cb                	mov    ecx,ebx
  5d5059:	e8 72 df fd ff       	call   0x5b2fd0
  5d505e:	d9 5c 24 2c          	fstp   DWORD PTR [esp+0x2c]
  5d5062:	8d 54 24 30          	lea    edx,[esp+0x30]
  5d5066:	8b cb                	mov    ecx,ebx
  5d5068:	e8 d3 dd fd ff       	call   0x5b2e40
  5d506d:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5d5071:	8d 54 24 3c          	lea    edx,[esp+0x3c]
  5d5075:	d8 4c 24 14          	fmul   DWORD PTR [esp+0x14]
  5d5079:	51                   	push   ecx
  5d507a:	51                   	push   ecx
  5d507b:	8b cb                	mov    ecx,ebx
  5d507d:	d9 e0                	fchs
  5d507f:	d9 1c 24             	fstp   DWORD PTR [esp]
  5d5082:	e8 99 df fd ff       	call   0x5b3020
  5d5087:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  5d508d:	d8 74 24 2c          	fdiv   DWORD PTR [esp+0x2c]
  5d5091:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5d5095:	51                   	push   ecx
  5d5096:	8b d1                	mov    edx,ecx
  5d5098:	d9 c0                	fld    st(0)
  5d509a:	d8 c9                	fmul   st,st(1)
  5d509c:	d9 1c 24             	fstp   DWORD PTR [esp]
  5d509f:	dd d8                	fstp   st(0)
  5d50a1:	e8 fa de fd ff       	call   0x5b2fa0
  5d50a6:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
  5d50aa:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
  5d50ae:	83 c3 0c             	add    ebx,0xc
  5d50b1:	83 c1 0c             	add    ecx,0xc
  5d50b4:	48                   	dec    eax
  5d50b5:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
  5d50b9:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  5d50bd:	75 98                	jne    0x5d5057
  5d50bf:	8d 5e 28             	lea    ebx,[esi+0x28]
  5d50c2:	b9 03 00 00 00       	mov    ecx,0x3
  5d50c7:	8b c3                	mov    eax,ebx
  5d50c9:	d9 40 f4             	fld    DWORD PTR [eax-0xc]
  5d50cc:	d8 4f 08             	fmul   DWORD PTR [edi+0x8]
  5d50cf:	83 c0 04             	add    eax,0x4
  5d50d2:	49                   	dec    ecx
  5d50d3:	d9 e0                	fchs
  5d50d5:	d9 40 fc             	fld    DWORD PTR [eax-0x4]
  5d50d8:	d8 4f 14             	fmul   DWORD PTR [edi+0x14]
  5d50db:	de e9                	fsubp  st(1),st
  5d50dd:	d9 58 08             	fstp   DWORD PTR [eax+0x8]
  5d50e0:	75 e7                	jne    0x5d50c9
  5d50e2:	8d 7e 34             	lea    edi,[esi+0x34]
  5d50e5:	8d 54 24 30          	lea    edx,[esp+0x30]
  5d50e9:	8b cf                	mov    ecx,edi
  5d50eb:	e8 50 dd fd ff       	call   0x5b2e40
  5d50f0:	d8 64 24 18          	fsub   DWORD PTR [esp+0x18]
  5d50f4:	57                   	push   edi
  5d50f5:	51                   	push   ecx
  5d50f6:	8d 54 24 44          	lea    edx,[esp+0x44]
  5d50fa:	8b cf                	mov    ecx,edi
  5d50fc:	d8 25 54 a3 64 00    	fsub   DWORD PTR ds:0x64a354
  5d5102:	d8 4c 24 1c          	fmul   DWORD PTR [esp+0x1c]
  5d5106:	d9 e0                	fchs
  5d5108:	d9 1c 24             	fstp   DWORD PTR [esp]
  5d510b:	e8 10 df fd ff       	call   0x5b3020
  5d5110:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
  5d5113:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
  5d5116:	89 54 24 2c          	mov    DWORD PTR [esp+0x2c],edx
  5d511a:	89 44 24 20          	mov    DWORD PTR [esp+0x20],eax
  5d511e:	db 44 24 2c          	fild   DWORD PTR [esp+0x2c]
  5d5122:	d9 c0                	fld    st(0)
  5d5124:	db 44 24 20          	fild   DWORD PTR [esp+0x20]
  5d5128:	d9 54 24 20          	fst    DWORD PTR [esp+0x20]
  5d512c:	d9 c0                	fld    st(0)
  5d512e:	d8 0b                	fmul   DWORD PTR [ebx]
  5d5130:	d9 c2                	fld    st(2)
  5d5132:	d8 4d 00             	fmul   DWORD PTR [ebp+0x0]
  5d5135:	de c1                	faddp  st(1),st
  5d5137:	d8 07                	fadd   DWORD PTR [edi]
  5d5139:	d9 5c 24 48          	fstp   DWORD PTR [esp+0x48]
  5d513d:	d9 c0                	fld    st(0)
  5d513f:	d8 4e 2c             	fmul   DWORD PTR [esi+0x2c]
  5d5142:	d9 c2                	fld    st(2)
  5d5144:	d8 4e 20             	fmul   DWORD PTR [esi+0x20]
  5d5147:	de c1                	faddp  st(1),st
  5d5149:	d8 46 38             	fadd   DWORD PTR [esi+0x38]
  5d514c:	d9 5c 24 4c          	fstp   DWORD PTR [esp+0x4c]
  5d5150:	d8 4e 30             	fmul   DWORD PTR [esi+0x30]
  5d5153:	d9 c9                	fxch   st(1)
  5d5155:	d8 4e 24             	fmul   DWORD PTR [esi+0x24]
  5d5158:	de c1                	faddp  st(1),st
  5d515a:	d8 46 3c             	fadd   DWORD PTR [esi+0x3c]
  5d515d:	d9 5c 24 50          	fstp   DWORD PTR [esp+0x50]
  5d5161:	d9 c0                	fld    st(0)
  5d5163:	d8 05 8c 09 65 00    	fadd   DWORD PTR ds:0x65098c
  5d5169:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  5d516d:	d9 c0                	fld    st(0)
  5d516f:	d8 0b                	fmul   DWORD PTR [ebx]
  5d5171:	d9 c2                	fld    st(2)
  5d5173:	d8 4d 00             	fmul   DWORD PTR [ebp+0x0]
  5d5176:	de c1                	faddp  st(1),st
  5d5178:	d8 07                	fadd   DWORD PTR [edi]
  5d517a:	d9 5c 24 54          	fstp   DWORD PTR [esp+0x54]
  5d517e:	d9 c0                	fld    st(0)
  5d5180:	d8 4e 2c             	fmul   DWORD PTR [esi+0x2c]
  5d5183:	d9 c2                	fld    st(2)
  5d5185:	d8 4e 20             	fmul   DWORD PTR [esi+0x20]
  5d5188:	de c1                	faddp  st(1),st
  5d518a:	d8 46 38             	fadd   DWORD PTR [esi+0x38]
  5d518d:	d9 5c 24 58          	fstp   DWORD PTR [esp+0x58]
  5d5191:	d8 4e 30             	fmul   DWORD PTR [esi+0x30]
  5d5194:	d9 c9                	fxch   st(1)
  5d5196:	d8 4e 24             	fmul   DWORD PTR [esi+0x24]
  5d5199:	de c1                	faddp  st(1),st
  5d519b:	d8 46 3c             	fadd   DWORD PTR [esi+0x3c]
  5d519e:	d9 5c 24 5c          	fstp   DWORD PTR [esp+0x5c]
  5d51a2:	d9 44 24 20          	fld    DWORD PTR [esp+0x20]
  5d51a6:	d8 05 8c 09 65 00    	fadd   DWORD PTR ds:0x65098c
  5d51ac:	d9 c0                	fld    st(0)
  5d51ae:	d8 0b                	fmul   DWORD PTR [ebx]
  5d51b0:	d9 c2                	fld    st(2)
  5d51b2:	d8 4d 00             	fmul   DWORD PTR [ebp+0x0]
  5d51b5:	de c1                	faddp  st(1),st
  5d51b7:	d8 07                	fadd   DWORD PTR [edi]
  5d51b9:	d9 5c 24 60          	fstp   DWORD PTR [esp+0x60]
  5d51bd:	d9 c0                	fld    st(0)
  5d51bf:	d8 4e 2c             	fmul   DWORD PTR [esi+0x2c]
  5d51c2:	d9 c2                	fld    st(2)
  5d51c4:	d8 4e 20             	fmul   DWORD PTR [esi+0x20]
  5d51c7:	de c1                	faddp  st(1),st
  5d51c9:	d8 46 38             	fadd   DWORD PTR [esi+0x38]
  5d51cc:	d9 5c 24 64          	fstp   DWORD PTR [esp+0x64]
  5d51d0:	55                   	push   ebp
  5d51d1:	8d 54 24 4c          	lea    edx,[esp+0x4c]
  5d51d5:	d8 4e 30             	fmul   DWORD PTR [esi+0x30]
  5d51d8:	d9 c9                	fxch   st(1)
  5d51da:	d8 4e 24             	fmul   DWORD PTR [esi+0x24]
  5d51dd:	8d 4c 24 58          	lea    ecx,[esp+0x58]
  5d51e1:	de c1                	faddp  st(1),st
  5d51e3:	d8 46 3c             	fadd   DWORD PTR [esi+0x3c]
  5d51e6:	d9 5c 24 6c          	fstp   DWORD PTR [esp+0x6c]
  5d51ea:	e8 f1 dd fd ff       	call   0x5b2fe0
  5d51ef:	53                   	push   ebx
  5d51f0:	8d 54 24 4c          	lea    edx,[esp+0x4c]
  5d51f4:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  5d51f8:	e8 e3 dd fd ff       	call   0x5b2fe0
  5d51fd:	8b 4c 24 48          	mov    ecx,DWORD PTR [esp+0x48]
  5d5201:	81 c6 88 00 00 00    	add    esi,0x88
  5d5207:	89 0f                	mov    DWORD PTR [edi],ecx
  5d5209:	8b 54 24 4c          	mov    edx,DWORD PTR [esp+0x4c]
  5d520d:	8b 4c 24 70          	mov    ecx,DWORD PTR [esp+0x70]
  5d5211:	89 57 04             	mov    DWORD PTR [edi+0x4],edx
  5d5214:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
  5d5218:	89 47 08             	mov    DWORD PTR [edi+0x8],eax
  5d521b:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
  5d521f:	8b 7c 24 1c          	mov    edi,DWORD PTR [esp+0x1c]
  5d5223:	8b 91 88 01 00 00    	mov    edx,DWORD PTR [ecx+0x188]
  5d5229:	40                   	inc    eax
  5d522a:	83 c7 24             	add    edi,0x24
  5d522d:	3b c2                	cmp    eax,edx
  5d522f:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
  5d5233:	89 7c 24 1c          	mov    DWORD PTR [esp+0x1c],edi
  5d5237:	0f 8c 48 fd ff ff    	jl     0x5d4f85
  5d523d:	5f                   	pop    edi
  5d523e:	5b                   	pop    ebx
  5d523f:	5e                   	pop    esi
  5d5240:	5d                   	pop    ebp
  5d5241:	83 c4 5c             	add    esp,0x5c
  5d5244:	c3                   	ret
