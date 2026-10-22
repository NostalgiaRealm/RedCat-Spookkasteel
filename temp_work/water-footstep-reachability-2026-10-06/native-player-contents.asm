
/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/RcHcGame.dat:     file format pei-i386


Disassembly of section .text:

004dac80 <.text+0xd9c80>:
  4dac80:	00 00                	add    BYTE PTR [eax],al
  4dac82:	00 00                	add    BYTE PTR [eax],al
  4dac84:	00 00                	add    BYTE PTR [eax],al
  4dac86:	32 d2                	xor    dl,dl
  4dac88:	eb 24                	jmp    0x4dacae
  4dac8a:	85 c9                	test   ecx,ecx
  4dac8c:	7e 16                	jle    0x4daca4
  4dac8e:	2b c6                	sub    eax,esi
  4dac90:	89 44 24 28          	mov    DWORD PTR [esp+0x28],eax
  4dac94:	db 44 24 28          	fild   DWORD PTR [esp+0x28]
  4dac98:	da 74 24 24          	fidiv  DWORD PTR [esp+0x24]
  4dac9c:	d9 9d 28 01 00 00    	fstp   DWORD PTR [ebp+0x128]
  4daca2:	eb 0a                	jmp    0x4dacae
  4daca4:	c7 85 28 01 00 00 00 	mov    DWORD PTR [ebp+0x128],0x0
  4dacab:	00 00 00 
  4dacae:	84 d2                	test   dl,dl
  4dacb0:	88 95 2c 01 00 00    	mov    BYTE PTR [ebp+0x12c],dl
  4dacb6:	75 42                	jne    0x4dacfa
  4dacb8:	8b 55 00             	mov    edx,DWORD PTR [ebp+0x0]
  4dacbb:	8b cd                	mov    ecx,ebp
  4dacbd:	ff 52 58             	call   DWORD PTR [edx+0x58]
  4dacc0:	b8 01 00 00 00       	mov    eax,0x1
  4dacc5:	b9 00 00 80 3f       	mov    ecx,0x3f800000
  4dacca:	89 85 10 01 00 00    	mov    DWORD PTR [ebp+0x110],eax
  4dacd0:	89 bd 14 01 00 00    	mov    DWORD PTR [ebp+0x114],edi
  4dacd6:	89 8d 18 01 00 00    	mov    DWORD PTR [ebp+0x118],ecx
  4dacdc:	88 85 1c 01 00 00    	mov    BYTE PTR [ebp+0x11c],al
  4dace2:	89 85 20 01 00 00    	mov    DWORD PTR [ebp+0x120],eax
  4dace8:	89 bd 24 01 00 00    	mov    DWORD PTR [ebp+0x124],edi
  4dacee:	89 8d 28 01 00 00    	mov    DWORD PTR [ebp+0x128],ecx
  4dacf4:	88 85 2c 01 00 00    	mov    BYTE PTR [ebp+0x12c],al
  4dacfa:	d9 05 54 a3 64 00    	fld    DWORD PTR ds:0x64a354
  4dad00:	d8 a5 18 01 00 00    	fsub   DWORD PTR [ebp+0x118]
  4dad06:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dad0c:	51                   	push   ecx
  4dad0d:	8b 01                	mov    eax,DWORD PTR [ecx]
  4dad0f:	d8 0d f4 f0 64 00    	fmul   DWORD PTR ds:0x64f0f4
  4dad15:	d9 e0                	fchs
  4dad17:	d9 1c 24             	fstp   DWORD PTR [esp]
  4dad1a:	ff 50 20             	call   DWORD PTR [eax+0x20]
  4dad1d:	eb 0b                	jmp    0x4dad2a
  4dad1f:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dad25:	8b 11                	mov    edx,DWORD PTR [ecx]
  4dad27:	ff 52 38             	call   DWORD PTR [edx+0x38]
  4dad2a:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dad30:	8b 01                	mov    eax,DWORD PTR [ecx]
  4dad32:	ff 50 10             	call   DWORD PTR [eax+0x10]
  4dad35:	8b cd                	mov    ecx,ebp
  4dad37:	e8 d4 b9 ff ff       	call   0x4d6710
  4dad3c:	84 c0                	test   al,al
  4dad3e:	74 1a                	je     0x4dad5a
  4dad40:	8b 0d d0 92 6b 00    	mov    ecx,DWORD PTR ds:0x6b92d0
  4dad46:	89 8d 8c 01 00 00    	mov    DWORD PTR [ebp+0x18c],ecx
  4dad4c:	8b 15 d4 92 6b 00    	mov    edx,DWORD PTR ds:0x6b92d4
  4dad52:	89 95 90 01 00 00    	mov    DWORD PTR [ebp+0x190],edx
  4dad58:	eb 40                	jmp    0x4dad9a
  4dad5a:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dad60:	8b 01                	mov    eax,DWORD PTR [ecx]
  4dad62:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
  4dad65:	84 c0                	test   al,al
  4dad67:	74 1a                	je     0x4dad83
  4dad69:	8b 0d c0 92 6b 00    	mov    ecx,DWORD PTR ds:0x6b92c0
  4dad6f:	89 8d 8c 01 00 00    	mov    DWORD PTR [ebp+0x18c],ecx
  4dad75:	8b 15 c4 92 6b 00    	mov    edx,DWORD PTR ds:0x6b92c4
  4dad7b:	89 95 90 01 00 00    	mov    DWORD PTR [ebp+0x190],edx
  4dad81:	eb 17                	jmp    0x4dad9a
  4dad83:	a1 c8 92 6b 00       	mov    eax,ds:0x6b92c8
  4dad88:	89 85 8c 01 00 00    	mov    DWORD PTR [ebp+0x18c],eax
  4dad8e:	8b 0d cc 92 6b 00    	mov    ecx,DWORD PTR ds:0x6b92cc
  4dad94:	89 8d 90 01 00 00    	mov    DWORD PTR [ebp+0x190],ecx
  4dad9a:	8b 95 90 01 00 00    	mov    edx,DWORD PTR [ebp+0x190]
  4dada0:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dada6:	52                   	push   edx
  4dada7:	8d 54 24 44          	lea    edx,[esp+0x44]
  4dadab:	8b 01                	mov    eax,DWORD PTR [ecx]
  4dadad:	52                   	push   edx
  4dadae:	8d 74 24 3c          	lea    esi,[esp+0x3c]
  4dadb2:	ff 50 24             	call   DWORD PTR [eax+0x24]
  4dadb5:	8b c8                	mov    ecx,eax
  4dadb7:	8b d6                	mov    edx,esi
  4dadb9:	e8 e2 81 0d 00       	call   0x5b2fa0
  4dadbe:	d9 44 24 3c          	fld    DWORD PTR [esp+0x3c]
  4dadc2:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4dadc8:	df e0                	fnstsw ax
  4dadca:	f6 c4 01             	test   ah,0x1
  4dadcd:	74 1d                	je     0x4dadec
  4dadcf:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dadd5:	8d 54 24 40          	lea    edx,[esp+0x40]
  4dadd9:	52                   	push   edx
  4dadda:	8b 01                	mov    eax,DWORD PTR [ecx]
  4daddc:	ff 50 24             	call   DWORD PTR [eax+0x24]
  4daddf:	d9 40 08             	fld    DWORD PTR [eax+0x8]
  4dade2:	d8 8d 8c 01 00 00    	fmul   DWORD PTR [ebp+0x18c]
  4dade8:	d9 5c 24 3c          	fstp   DWORD PTR [esp+0x3c]
  4dadec:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4dadf2:	8d 54 24 40          	lea    edx,[esp+0x40]
  4dadf6:	52                   	push   edx
  4dadf7:	8b 01                	mov    eax,DWORD PTR [ecx]
  4dadf9:	ff 50 28             	call   DWORD PTR [eax+0x28]
  4dadfc:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
  4dadff:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4dae03:	50                   	push   eax
  4dae04:	8d 54 24 18          	lea    edx,[esp+0x18]
  4dae08:	51                   	push   ecx
  4dae09:	52                   	push   edx
  4dae0a:	8b cd                	mov    ecx,ebp
  4dae0c:	e8 0f fb ff ff       	call   0x4da920
  4dae11:	8b 08                	mov    ecx,DWORD PTR [eax]
  4dae13:	89 4c 24 34          	mov    DWORD PTR [esp+0x34],ecx
  4dae17:	8d 4c 24 34          	lea    ecx,[esp+0x34]
  4dae1b:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4dae1e:	51                   	push   ecx
  4dae1f:	89 54 24 3c          	mov    DWORD PTR [esp+0x3c],edx
  4dae23:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4dae26:	89 44 24 40          	mov    DWORD PTR [esp+0x40],eax
  4dae2a:	e8 d1 61 f5 ff       	call   0x431000
  4dae2f:	51                   	push   ecx
  4dae30:	8d 95 b4 01 00 00    	lea    edx,[ebp+0x1b4]
  4dae36:	8d 4c 24 3c          	lea    ecx,[esp+0x3c]
  4dae3a:	d9 1c 24             	fstp   DWORD PTR [esp]
  4dae3d:	e8 de 81 0d 00       	call   0x5b3020
  4dae42:	8b 95 00 01 00 00    	mov    edx,DWORD PTR [ebp+0x100]
  4dae48:	8b 4c 24 30          	mov    ecx,DWORD PTR [esp+0x30]
  4dae4c:	8b 45 00             	mov    eax,DWORD PTR [ebp+0x0]
  4dae4f:	89 54 24 24          	mov    DWORD PTR [esp+0x24],edx
  4dae53:	8d 54 24 34          	lea    edx,[esp+0x34]
  4dae57:	8d 9d 98 01 00 00    	lea    ebx,[ebp+0x198]
  4dae5d:	51                   	push   ecx
  4dae5e:	52                   	push   edx
  4dae5f:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dae63:	53                   	push   ebx
  4dae64:	51                   	push   ecx
  4dae65:	8b cd                	mov    ecx,ebp
  4dae67:	ff 50 54             	call   DWORD PTR [eax+0x54]
  4dae6a:	8b 30                	mov    esi,DWORD PTR [eax]
  4dae6c:	8d bd 80 01 00 00    	lea    edi,[ebp+0x180]
  4dae72:	8b cf                	mov    ecx,edi
  4dae74:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4dae77:	89 54 24 44          	mov    DWORD PTR [esp+0x44],edx
  4dae7b:	8b 54 24 34          	mov    edx,DWORD PTR [esp+0x34]
  4dae7f:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4dae82:	89 11                	mov    DWORD PTR [ecx],edx
  4dae84:	8b 54 24 3c          	mov    edx,DWORD PTR [esp+0x3c]
  4dae88:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
  4dae8c:	8b 44 24 38          	mov    eax,DWORD PTR [esp+0x38]
  4dae90:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
  4dae93:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  4dae96:	b9 f0 92 6b 00       	mov    ecx,0x6b92f0
  4dae9b:	e8 40 89 f5 ff       	call   0x4337e0
  4daea0:	85 c0                	test   eax,eax
  4daea2:	74 0e                	je     0x4daeb2
  4daea4:	68 64 9d 69 00       	push   0x699d64
  4daea9:	57                   	push   edi
  4daeaa:	e8 61 93 07 00       	call   0x554210
  4daeaf:	83 c4 08             	add    esp,0x8
  4daeb2:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
  4daeb6:	8b 54 24 48          	mov    edx,DWORD PTR [esp+0x48]
  4daeba:	8b c3                	mov    eax,ebx
  4daebc:	53                   	push   ebx
  4daebd:	89 30                	mov    DWORD PTR [eax],esi
  4daebf:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
  4daec2:	8b cd                	mov    ecx,ebp
  4daec4:	89 50 08             	mov    DWORD PTR [eax+0x8],edx
  4daec7:	e8 c4 25 00 00       	call   0x4dd490
  4daecc:	8b cd                	mov    ecx,ebp
  4daece:	e8 4d b8 ff ff       	call   0x4d6720
  4daed3:	8b 85 08 01 00 00    	mov    eax,DWORD PTR [ebp+0x108]
  4daed9:	8d 94 24 9c 00 00 00 	lea    edx,[esp+0x9c]
  4daee0:	52                   	push   edx
  4daee1:	6a 00                	push   0x0
  4daee3:	6a 03                	push   0x3
  4daee5:	8d 8d d0 01 00 00    	lea    ecx,[ebp+0x1d0]
  4daeeb:	53                   	push   ebx
  4daeec:	89 44 24 38          	mov    DWORD PTR [esp+0x38],eax
  4daef0:	c7 85 08 01 00 00 00 	mov    DWORD PTR [ebp+0x108],0x0
  4daef7:	00 00 00 
  4daefa:	e8 01 9c 07 00       	call   0x554b00
  4daeff:	84 c0                	test   al,al
  4daf01:	0f 84 09 02 00 00    	je     0x4db110
  4daf07:	8b 8c 24 a8 00 00 00 	mov    ecx,DWORD PTR [esp+0xa8]
  4daf0e:	8b c1                	mov    eax,ecx
  4daf10:	81 e1 00 00 03 00    	and    ecx,0x30000
  4daf16:	c1 e8 12             	shr    eax,0x12
  4daf19:	24 01                	and    al,0x1
  4daf1b:	89 8d 08 01 00 00    	mov    DWORD PTR [ebp+0x108],ecx
  4daf21:	84 c0                	test   al,al
  4daf23:	0f 84 e7 01 00 00    	je     0x4db110
  4daf29:	d9 05 e4 96 69 00    	fld    DWORD PTR ds:0x6996e4
  4daf2f:	d8 1d 6c d6 64 00    	fcomp  DWORD PTR ds:0x64d66c
  4daf35:	df e0                	fnstsw ax
  4daf37:	f6 c4 40             	test   ah,0x40
  4daf3a:	0f 84 38 01 00 00    	je     0x4db078
  4daf40:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4daf44:	6a 00                	push   0x0
  4daf46:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4daf4a:	88 44 24 44          	mov    BYTE PTR [esp+0x44],al
  4daf4e:	e8 4d 91 f2 ff       	call   0x4040a0
  4daf53:	83 ce ff             	or     esi,0xffffffff
  4daf56:	bf e0 02 69 00       	mov    edi,0x6902e0
  4daf5b:	8b ce                	mov    ecx,esi
  4daf5d:	33 c0                	xor    eax,eax
  4daf5f:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4daf61:	f7 d1                	not    ecx
  4daf63:	49                   	dec    ecx
  4daf64:	51                   	push   ecx
  4daf65:	68 e0 02 69 00       	push   0x6902e0
  4daf6a:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4daf6e:	e8 7d 91 f2 ff       	call   0x4040f0
  4daf73:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4daf77:	6a 00                	push   0x0
  4daf79:	88 4c 24 18          	mov    BYTE PTR [esp+0x18],cl
  4daf7d:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4daf81:	c7 84 24 5c 01 00 00 	mov    DWORD PTR [esp+0x15c],0x4
  4daf88:	04 00 00 00 
  4daf8c:	e8 0f 91 f2 ff       	call   0x4040a0
  4daf91:	bf 4c 9d 69 00       	mov    edi,0x699d4c
  4daf96:	8b ce                	mov    ecx,esi
  4daf98:	33 c0                	xor    eax,eax
  4daf9a:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4daf9c:	f7 d1                	not    ecx
  4daf9e:	49                   	dec    ecx
  4daf9f:	51                   	push   ecx
  4dafa0:	68 4c 9d 69 00       	push   0x699d4c
  4dafa5:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4dafa9:	e8 42 91 f2 ff       	call   0x4040f0
  4dafae:	8d 54 24 7c          	lea    edx,[esp+0x7c]
  4dafb2:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0x5
  4dafb9:	05 
  4dafba:	52                   	push   edx
  4dafbb:	e8 d0 bf f5 ff       	call   0x436f90
  4dafc0:	83 c4 04             	add    esp,0x4
  4dafc3:	50                   	push   eax
  4dafc4:	68 00 00 7a 44       	push   0x447a0000
  4dafc9:	6a 00                	push   0x0
  4dafcb:	8d 44 24 4c          	lea    eax,[esp+0x4c]
  4dafcf:	68 00 00 48 43       	push   0x43480000
  4dafd4:	8d 4c 24 24          	lea    ecx,[esp+0x24]
  4dafd8:	50                   	push   eax
  4dafd9:	51                   	push   ecx
  4dafda:	8d 8c 24 f4 00 00 00 	lea    ecx,[esp+0xf4]
  4dafe1:	c6 84 24 70 01 00 00 	mov    BYTE PTR [esp+0x170],0x6
  4dafe8:	06 
  4dafe9:	e8 22 8d 0c 00       	call   0x5a3d10
  4dafee:	8b f8                	mov    edi,eax
  4daff0:	d9 47 60             	fld    DWORD PTR [edi+0x60]
  4daff3:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4daff9:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0x7
  4db000:	07 
  4db001:	df e0                	fnstsw ax
  4db003:	f6 c4 40             	test   ah,0x40
  4db006:	74 16                	je     0x4db01e
  4db008:	8d 54 24 13          	lea    edx,[esp+0x13]
  4db00c:	8d 47 14             	lea    eax,[edi+0x14]
  4db00f:	52                   	push   edx
  4db010:	50                   	push   eax
  4db011:	e8 7a 23 0d 00       	call   0x5ad390
  4db016:	d9 57 60             	fst    DWORD PTR [edi+0x60]
  4db019:	83 c4 08             	add    esp,0x8
  4db01c:	eb 03                	jmp    0x4db021
  4db01e:	d9 47 60             	fld    DWORD PTR [edi+0x60]
  4db021:	d9 1d e4 96 69 00    	fstp   DWORD PTR ds:0x6996e4
  4db027:	8d 8c 24 dc 00 00 00 	lea    ecx,[esp+0xdc]
  4db02e:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0x6
  4db035:	06 
  4db036:	e8 a5 8c 0c 00       	call   0x5a3ce0
  4db03b:	6a 01                	push   0x1
  4db03d:	8d 8c 24 80 00 00 00 	lea    ecx,[esp+0x80]
  4db044:	c6 84 24 5c 01 00 00 	mov    BYTE PTR [esp+0x15c],0x5
  4db04b:	05 
  4db04c:	e8 4f 90 f2 ff       	call   0x4040a0
  4db051:	6a 01                	push   0x1
  4db053:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db057:	c6 84 24 5c 01 00 00 	mov    BYTE PTR [esp+0x15c],0x4
  4db05e:	04 
  4db05f:	e8 3c 90 f2 ff       	call   0x4040a0
  4db064:	6a 01                	push   0x1
  4db066:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4db06a:	89 b4 24 5c 01 00 00 	mov    DWORD PTR [esp+0x15c],esi
  4db071:	e8 2a 90 f2 ff       	call   0x4040a0
  4db076:	eb 03                	jmp    0x4db07b
  4db078:	83 ce ff             	or     esi,0xffffffff
  4db07b:	39 b4 24 64 01 00 00 	cmp    DWORD PTR [esp+0x164],esi
  4db082:	75 6b                	jne    0x4db0ef
  4db084:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4db088:	6a 00                	push   0x0
  4db08a:	88 4c 24 18          	mov    BYTE PTR [esp+0x18],cl
  4db08e:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db092:	e8 09 90 f2 ff       	call   0x4040a0
  4db097:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4db09c:	8b ce                	mov    ecx,esi
  4db09e:	33 c0                	xor    eax,eax
  4db0a0:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4db0a2:	f7 d1                	not    ecx
  4db0a4:	49                   	dec    ecx
  4db0a5:	51                   	push   ecx
  4db0a6:	68 70 3f 6b 00       	push   0x6b3f70
  4db0ab:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4db0af:	e8 3c 90 f2 ff       	call   0x4040f0
  4db0b4:	8d 54 24 14          	lea    edx,[esp+0x14]
  4db0b8:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0x8
  4db0bf:	08 00 00 00 
  4db0c3:	52                   	push   edx
  4db0c4:	68 8a 00 00 00       	push   0x8a
  4db0c9:	68 2c e2 68 00       	push   0x68e22c
  4db0ce:	68 14 e2 68 00       	push   0x68e214
  4db0d3:	e8 18 57 0c 00       	call   0x5a07f0
  4db0d8:	ff d0                	call   eax
  4db0da:	83 c4 10             	add    esp,0x10
  4db0dd:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db0e1:	89 b4 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],esi
  4db0e8:	6a 01                	push   0x1
  4db0ea:	e8 b1 8f f2 ff       	call   0x4040a0
  4db0ef:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  4db0f3:	d8 0d e4 96 69 00    	fmul   DWORD PTR ds:0x6996e4
  4db0f9:	6a 00                	push   0x0
  4db0fb:	6a 00                	push   0x0
  4db0fd:	51                   	push   ecx
  4db0fe:	8b cd                	mov    ecx,ebp
  4db100:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  4db106:	d9 1c 24             	fstp   DWORD PTR [esp]
  4db109:	e8 b2 8e 02 00       	call   0x503fc0
  4db10e:	eb 03                	jmp    0x4db113
  4db110:	83 ce ff             	or     esi,0xffffffff
  4db113:	8b 44 24 30          	mov    eax,DWORD PTR [esp+0x30]
  4db117:	8b 8d 08 01 00 00    	mov    ecx,DWORD PTR [ebp+0x108]
  4db11d:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
  4db121:	50                   	push   eax
  4db122:	8b 85 00 01 00 00    	mov    eax,DWORD PTR [ebp+0x100]
  4db128:	51                   	push   ecx
  4db129:	8b 4c 24 2c          	mov    ecx,DWORD PTR [esp+0x2c]
  4db12d:	52                   	push   edx
  4db12e:	50                   	push   eax
  4db12f:	51                   	push   ecx
  4db130:	8b cd                	mov    ecx,ebp
  4db132:	e8 a9 0f 00 00       	call   0x4dc0e0
  4db137:	f7 85 08 01 00 00 00 	test   DWORD PTR [ebp+0x108],0x20000
  4db13e:	00 02 00 
  4db141:	0f 84 0c 02 00 00    	je     0x4db353
  4db147:	d9 05 e8 96 69 00    	fld    DWORD PTR ds:0x6996e8
  4db14d:	d8 1d 6c d6 64 00    	fcomp  DWORD PTR ds:0x64d66c
  4db153:	df e0                	fnstsw ax
  4db155:	f6 c4 40             	test   ah,0x40
  4db158:	0f 84 62 01 00 00    	je     0x4db2c0
  4db15e:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
  4db162:	6a 00                	push   0x0
  4db164:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db168:	88 54 24 18          	mov    BYTE PTR [esp+0x18],dl
  4db16c:	e8 2f 8f f2 ff       	call   0x4040a0
  4db171:	bf e0 02 69 00       	mov    edi,0x6902e0
  4db176:	8b ce                	mov    ecx,esi
  4db178:	33 c0                	xor    eax,eax
  4db17a:	6a 01                	push   0x1
  4db17c:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4db17e:	f7 d1                	not    ecx
  4db180:	49                   	dec    ecx
  4db181:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
  4db185:	51                   	push   ecx
  4db186:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4db18a:	e8 b1 67 f2 ff       	call   0x401940
  4db18f:	84 c0                	test   al,al
  4db191:	74 2a                	je     0x4db1bd
  4db193:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
  4db197:	8b 7c 24 18          	mov    edi,DWORD PTR [esp+0x18]
  4db19b:	8b c8                	mov    ecx,eax
  4db19d:	be e0 02 69 00       	mov    esi,0x6902e0
  4db1a2:	8b d1                	mov    edx,ecx
  4db1a4:	50                   	push   eax
  4db1a5:	c1 e9 02             	shr    ecx,0x2
  4db1a8:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
  4db1aa:	8b ca                	mov    ecx,edx
  4db1ac:	83 e1 03             	and    ecx,0x3
  4db1af:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
  4db1b1:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db1b5:	e8 d6 8f f2 ff       	call   0x404190
  4db1ba:	83 ce ff             	or     esi,0xffffffff
  4db1bd:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4db1c1:	6a 00                	push   0x0
  4db1c3:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4db1c7:	c7 84 24 5c 01 00 00 	mov    DWORD PTR [esp+0x15c],0x9
  4db1ce:	09 00 00 00 
  4db1d2:	88 44 24 44          	mov    BYTE PTR [esp+0x44],al
  4db1d6:	e8 c5 8e f2 ff       	call   0x4040a0
  4db1db:	bf 38 9d 69 00       	mov    edi,0x699d38
  4db1e0:	8b ce                	mov    ecx,esi
  4db1e2:	33 c0                	xor    eax,eax
  4db1e4:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4db1e6:	f7 d1                	not    ecx
  4db1e8:	49                   	dec    ecx
  4db1e9:	51                   	push   ecx
  4db1ea:	68 38 9d 69 00       	push   0x699d38
  4db1ef:	8d 4c 24 48          	lea    ecx,[esp+0x48]
  4db1f3:	e8 f8 8e f2 ff       	call   0x4040f0
  4db1f8:	8d 4c 24 7c          	lea    ecx,[esp+0x7c]
  4db1fc:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0xa
  4db203:	0a 
  4db204:	51                   	push   ecx
  4db205:	e8 86 bd f5 ff       	call   0x436f90
  4db20a:	83 c4 04             	add    esp,0x4
  4db20d:	50                   	push   eax
  4db20e:	68 00 00 c8 42       	push   0x42c80000
  4db213:	6a 00                	push   0x0
  4db215:	8d 54 24 20          	lea    edx,[esp+0x20]
  4db219:	68 00 00 40 40       	push   0x40400000
  4db21e:	8d 44 24 50          	lea    eax,[esp+0x50]
  4db222:	52                   	push   edx
  4db223:	50                   	push   eax
  4db224:	8d 8c 24 f4 00 00 00 	lea    ecx,[esp+0xf4]
  4db22b:	c6 84 24 70 01 00 00 	mov    BYTE PTR [esp+0x170],0xb
  4db232:	0b 
  4db233:	e8 d8 8a 0c 00       	call   0x5a3d10
  4db238:	8b f8                	mov    edi,eax
  4db23a:	d9 47 60             	fld    DWORD PTR [edi+0x60]
  4db23d:	d8 1d 50 a4 64 00    	fcomp  DWORD PTR ds:0x64a450
  4db243:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0xc
  4db24a:	0c 
  4db24b:	df e0                	fnstsw ax
  4db24d:	f6 c4 40             	test   ah,0x40
  4db250:	74 16                	je     0x4db268
  4db252:	8d 4c 24 13          	lea    ecx,[esp+0x13]
  4db256:	8d 57 14             	lea    edx,[edi+0x14]
  4db259:	51                   	push   ecx
  4db25a:	52                   	push   edx
  4db25b:	e8 30 21 0d 00       	call   0x5ad390
  4db260:	d9 57 60             	fst    DWORD PTR [edi+0x60]
  4db263:	83 c4 08             	add    esp,0x8
  4db266:	eb 03                	jmp    0x4db26b
  4db268:	d9 47 60             	fld    DWORD PTR [edi+0x60]
  4db26b:	d9 1d e8 96 69 00    	fstp   DWORD PTR ds:0x6996e8
  4db271:	8d 8c 24 dc 00 00 00 	lea    ecx,[esp+0xdc]
  4db278:	c6 84 24 58 01 00 00 	mov    BYTE PTR [esp+0x158],0xb
  4db27f:	0b 
  4db280:	e8 5b 8a 0c 00       	call   0x5a3ce0
  4db285:	6a 01                	push   0x1
  4db287:	8d 8c 24 80 00 00 00 	lea    ecx,[esp+0x80]
  4db28e:	c6 84 24 5c 01 00 00 	mov    BYTE PTR [esp+0x15c],0xa
  4db295:	0a 
  4db296:	e8 05 8e f2 ff       	call   0x4040a0
  4db29b:	6a 01                	push   0x1
  4db29d:	8d 4c 24 44          	lea    ecx,[esp+0x44]
  4db2a1:	c6 84 24 5c 01 00 00 	mov    BYTE PTR [esp+0x15c],0x9
  4db2a8:	09 
  4db2a9:	e8 f2 8d f2 ff       	call   0x4040a0
  4db2ae:	6a 01                	push   0x1
  4db2b0:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db2b4:	89 b4 24 5c 01 00 00 	mov    DWORD PTR [esp+0x15c],esi
  4db2bb:	e8 e0 8d f2 ff       	call   0x4040a0
  4db2c0:	39 b4 24 64 01 00 00 	cmp    DWORD PTR [esp+0x164],esi
  4db2c7:	75 6b                	jne    0x4db334
  4db2c9:	8a 44 24 13          	mov    al,BYTE PTR [esp+0x13]
  4db2cd:	6a 00                	push   0x0
  4db2cf:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db2d3:	88 44 24 18          	mov    BYTE PTR [esp+0x18],al
  4db2d7:	e8 c4 8d f2 ff       	call   0x4040a0
  4db2dc:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4db2e1:	8b ce                	mov    ecx,esi
  4db2e3:	33 c0                	xor    eax,eax
  4db2e5:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4db2e7:	f7 d1                	not    ecx
  4db2e9:	49                   	dec    ecx
  4db2ea:	51                   	push   ecx
  4db2eb:	68 70 3f 6b 00       	push   0x6b3f70
  4db2f0:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4db2f4:	e8 f7 8d f2 ff       	call   0x4040f0
  4db2f9:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db2fd:	c7 84 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],0xd
  4db304:	0d 00 00 00 
  4db308:	51                   	push   ecx
  4db309:	68 8a 00 00 00       	push   0x8a
  4db30e:	68 2c e2 68 00       	push   0x68e22c
  4db313:	68 14 e2 68 00       	push   0x68e214
  4db318:	e8 d3 54 0c 00       	call   0x5a07f0
  4db31d:	ff d0                	call   eax
  4db31f:	83 c4 10             	add    esp,0x10
  4db322:	8d 4c 24 14          	lea    ecx,[esp+0x14]
  4db326:	89 b4 24 58 01 00 00 	mov    DWORD PTR [esp+0x158],esi
  4db32d:	6a 01                	push   0x1
  4db32f:	e8 6c 8d f2 ff       	call   0x4040a0
  4db334:	d9 44 24 2c          	fld    DWORD PTR [esp+0x2c]
  4db338:	d8 0d e8 96 69 00    	fmul   DWORD PTR ds:0x6996e8
  4db33e:	6a 00                	push   0x0
  4db340:	6a 00                	push   0x0
  4db342:	51                   	push   ecx
  4db343:	8b cd                	mov    ecx,ebp
  4db345:	d8 0d 5c a9 64 00    	fmul   DWORD PTR ds:0x64a95c
  4db34b:	d9 1c 24             	fstp   DWORD PTR [esp]
  4db34e:	e8 6d 8c 02 00       	call   0x503fc0
  4db353:	8b 4b 08             	mov    ecx,DWORD PTR [ebx+0x8]
  4db356:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
  4db359:	8b 13                	mov    edx,DWORD PTR [ebx]
  4db35b:	89 4c 24 78          	mov    DWORD PTR [esp+0x78],ecx
  4db35f:	8b 8d f8 00 00 00    	mov    ecx,DWORD PTR [ebp+0xf8]
  4db365:	89 44 24 74          	mov    DWORD PTR [esp+0x74],eax
  4db369:	89 54 24 70          	mov    DWORD PTR [esp+0x70],edx
  4db36d:	8d 44 24 14          	lea    eax,[esp+0x14]
  4db371:	8b 11                	mov    edx,DWORD PTR [ecx]
  4db373:	50                   	push   eax
  4db374:	ff 52 28             	call   DWORD PTR [edx+0x28]
  4db377:	8b 08                	mov    ecx,DWORD PTR [eax]
  4db379:	8b bc 24 60 01 00 00 	mov    edi,DWORD PTR [esp+0x160]
  4db380:	89 4c 24 64          	mov    DWORD PTR [esp+0x64],ecx
  4db384:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
  4db387:	89 54 24 68          	mov    DWORD PTR [esp+0x68],edx
  4db38b:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
  4db38e:	89 44 24 6c          	mov    DWORD PTR [esp+0x6c],eax
  4db392:	8a 85 04 01 00 00    	mov    al,BYTE PTR [ebp+0x104]
  4db398:	84 c0                	test   al,al
  4db39a:	74 19                	je     0x4db3b5
  4db39c:	8b 9c 24 64 01 00 00 	mov    ebx,DWORD PTR [esp+0x164]
  4db3a3:	57                   	push   edi
  4db3a4:	53                   	push   ebx
  4db3a5:	8b cd                	mov    ecx,ebp
  4db3a7:	e8 74 f0 ff ff       	call   0x4da420
  4db3ac:	57                   	push   edi
  4db3ad:	53                   	push   ebx
  4db3ae:	8b cd                	mov    ecx,ebp
  4db3b0:	e8 8b e9 ff ff       	call   0x4d9d40
  4db3b5:	8b 94 24 64 01 00 00 	mov    edx,DWORD PTR [esp+0x164]
  4db3bc:	8d 4c 24 64          	lea    ecx,[esp+0x64]
  4db3c0:	51                   	push   ecx
  4db3c1:	57                   	push   edi
  4db3c2:	8d 44 24 1c          	lea    eax,[esp+0x1c]
  4db3c6:	52                   	push   edx
  4db3c7:	50                   	push   eax
  4db3c8:	8b cd                	mov    ecx,ebp
  4db3ca:	e8 11 e1 ff ff       	call   0x4d94e0
  4db3cf:	8b d0                	mov    edx,eax
  4db3d1:	8d 4c 24 68          	lea    ecx,[esp+0x68]
  4db3d5:	e8 26 7c 0d 00       	call   0x5b3000
  4db3da:	8b 85 0c 01 00 00    	mov    eax,DWORD PTR [ebp+0x10c]
  4db3e0:	85 c0                	test   eax,eax
  4db3e2:	75 6b                	jne    0x4db44f
  4db3e4:	8a 4c 24 13          	mov    cl,BYTE PTR [esp+0x13]
  4db3e8:	6a 00                	push   0x0
  4db3ea:	88 4c 24 18          	mov    BYTE PTR [esp+0x18],cl
  4db3ee:	8d 4c 24 18          	lea    ecx,[esp+0x18]
  4db3f2:	e8 a9 8c f2 ff       	call   0x4040a0
  4db3f7:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
  4db3fc:	8b ce                	mov    ecx,esi
  4db3fe:	33 c0                	xor    eax,eax
  4db400:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
  4db402:	f7 d1                	not    ecx
  4db404:	49                   	dec    ecx
  4db405:	51                   	push   ecx
  4db406:	68 70 3f 6b 00       	push   0x6b3f70
  4db40b:	8d 4c 24 1c          	lea    ecx,[esp+0x1c]
  4db40f:	e8                   	.byte 0xe8
