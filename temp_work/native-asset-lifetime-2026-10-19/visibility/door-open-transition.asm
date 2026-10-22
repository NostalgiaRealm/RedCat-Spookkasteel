; Original complete assembly excerpt
; source line280035
  4ccb9d:	8b 95 84 01 00 00    	mov    edx,DWORD PTR [ebp+0x184]
; source line280036
  4ccba3:	39 72 40             	cmp    DWORD PTR [edx+0x40],esi
; source line280037
  4ccba6:	74 0c                	je     0x4ccbb4
; source line280038
  4ccba8:	68 c0 96 6b 00       	push   0x6b96c0
; source line280039
  4ccbad:	8b cd                	mov    ecx,ebp
; source line280040
  4ccbaf:	e8 4c 88 03 00       	call   0x505400
; source line280041
  4ccbb4:	8b 8d 94 01 00 00    	mov    ecx,DWORD PTR [ebp+0x194]
; source line280042
  4ccbba:	3b ce                	cmp    ecx,esi
; source line280043
  4ccbbc:	74 07                	je     0x4ccbc5
; source line280044
  4ccbbe:	8b 01                	mov    eax,DWORD PTR [ecx]
; source line280045
  4ccbc0:	6a 01                	push   0x1
; source line280046
  4ccbc2:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
; source line280047
  4ccbc5:	6a 01                	push   0x1
; source line280048
  4ccbc7:	8b cd                	mov    ecx,ebp
; source line280049
  4ccbc9:	e8 22 07 00 00       	call   0x4cd2f0
; source line280050
  4ccbce:	8b cd                	mov    ecx,ebp
; source line280051
  4ccbd0:	e8 ab 58 03 00       	call   0x502480
; source line280052
  4ccbd5:	84 c0                	test   al,al
; source line280053
  4ccbd7:	0f 84 99 00 00 00    	je     0x4ccc76
; source line280054
  4ccbdd:	8b 8d 84 01 00 00    	mov    ecx,DWORD PTR [ebp+0x184]
; source line280055
  4ccbe3:	39 71 58             	cmp    DWORD PTR [ecx+0x58],esi
; source line280056
  4ccbe6:	0f 84 8a 00 00 00    	je     0x4ccc76
; source line280057
  4ccbec:	bf 70 3f 6b 00       	mov    edi,0x6b3f70
; source line280058
  4ccbf1:	83 c9 ff             	or     ecx,0xffffffff
; source line280059
  4ccbf4:	33 c0                	xor    eax,eax
; source line280060
  4ccbf6:	8a 54 24 13          	mov    dl,BYTE PTR [esp+0x13]
; source line280061
  4ccbfa:	f2 ae                	repnz scas al,BYTE PTR es:[edi]
; source line280062
  4ccbfc:	f7 d1                	not    ecx
; source line280063
  4ccbfe:	49                   	dec    ecx
; source line280064
  4ccbff:	88 54 24 20          	mov    BYTE PTR [esp+0x20],dl
; source line280065
  4ccc03:	51                   	push   ecx
; source line280066
  4ccc04:	68 70 3f 6b 00       	push   0x6b3f70
; source line280067
  4ccc09:	8d 4c 24 28          	lea    ecx,[esp+0x28]
; source line280068
  4ccc0d:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
; source line280069
  4ccc11:	89 74 24 30          	mov    DWORD PTR [esp+0x30],esi
; source line280070
  4ccc15:	89 74 24 34          	mov    DWORD PTR [esp+0x34],esi
; source line280071
  4ccc19:	e8 d2 74 f3 ff       	call   0x4040f0
; source line280072
  4ccc1e:	56                   	push   esi
; source line280073
  4ccc1f:	8d 44 24 24          	lea    eax,[esp+0x24]
; source line280074
  4ccc23:	56                   	push   esi
; source line280075
  4ccc24:	50                   	push   eax
; source line280076
  4ccc25:	6a 08                	push   0x8
; source line280077
  4ccc27:	c7 84 24 a8 00 00 00 	mov    DWORD PTR [esp+0xa8],0x9
; source line280078
  4ccc2e:	09 00 00 00 
; source line280079
  4ccc32:	e8 d9 20 02 00       	call   0x4eed10
; source line280080
  4ccc37:	8b 44 24 34          	mov    eax,DWORD PTR [esp+0x34]
; source line280081
  4ccc3b:	83 c4 10             	add    esp,0x10
; source line280082
  4ccc3e:	3b c6                	cmp    eax,esi
; source line280083
  4ccc40:	c7 84 24 98 00 00 00 	mov    DWORD PTR [esp+0x98],0xffffffff
; source line280084
  4ccc47:	ff ff ff ff 
; source line280085
  4ccc4b:	74 1d                	je     0x4ccc6a
; source line280086
  4ccc4d:	8d 48 ff             	lea    ecx,[eax-0x1]
; source line280087
  4ccc50:	8a 40 ff             	mov    al,BYTE PTR [eax-0x1]
; source line280088
  4ccc53:	84 c0                	test   al,al
; source line280089
  4ccc55:	74 0a                	je     0x4ccc61
; source line280090
  4ccc57:	3c ff                	cmp    al,0xff
; source line280091
  4ccc59:	74 06                	je     0x4ccc61
; source line280092
  4ccc5b:	fe c8                	dec    al
; source line280093
  4ccc5d:	88 01                	mov    BYTE PTR [ecx],al
; source line280094
  4ccc5f:	eb 09                	jmp    0x4ccc6a
; source line280095
  4ccc61:	51                   	push   ecx
; source line280096
  4ccc62:	e8 89 19 13 00       	call   0x5fe5f0
; source line280097
  4ccc67:	83 c4 04             	add    esp,0x4
; source line280098
  4ccc6a:	89 74 24 24          	mov    DWORD PTR [esp+0x24],esi
; source line280099
  4ccc6e:	89 74 24 28          	mov    DWORD PTR [esp+0x28],esi
; source line280100
  4ccc72:	89 74 24 2c          	mov    DWORD PTR [esp+0x2c],esi
; source line280101
  4ccc76:	8b cd                	mov    ecx,ebp
; source line280102
  4ccc78:	e8 c3 f4 ff ff       	call   0x4cc140
; source line280103
  4ccc7d:	c7 85 6c 01 00 00 04 	mov    DWORD PTR [ebp+0x16c],0x4
; source line280104
  4ccc84:	00 00 00 
; source line280105
  4ccc87:	e9 36 03 00 00       	jmp    0x4ccfc2
