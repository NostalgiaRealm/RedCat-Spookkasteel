  423650:	8b 01                	mov    eax,DWORD PTR [ecx]
  423652:	ff 90 9c 00 00 00    	call   DWORD PTR [eax+0x9c]
  423658:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  42365c:	8b 10                	mov    edx,DWORD PTR [eax]
  42365e:	51                   	push   ecx
  42365f:	8b c8                	mov    ecx,eax
  423661:	ff 52 4c             	call   DWORD PTR [edx+0x4c]
  423664:	c2 04 00             	ret    0x4
  423667:	90                   	nop
  423668:	90                   	nop
  423669:	90                   	nop
  42366a:	90                   	nop
  42366b:	90                   	nop
  42366c:	90                   	nop
  42366d:	90                   	nop
  42366e:	90                   	nop
  42366f:	90                   	nop
  423670:	8b 01                	mov    eax,DWORD PTR [ecx]
  423672:	83 ec 0c             	sub    esp,0xc
  423675:	56                   	push   esi
  423676:	ff 90 a4 00 00 00    	call   DWORD PTR [eax+0xa4]
  42367c:	8b 10                	mov    edx,DWORD PTR [eax]
  42367e:	8d 4c 24 04          	lea    ecx,[esp+0x4]
  423682:	51                   	push   ecx
  423683:	8b c8                	mov    ecx,eax
  423685:	ff 52 48             	call   DWORD PTR [edx+0x48]
  423688:	8b d0                	mov    edx,eax
  42368a:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  42368e:	8b c8                	mov    ecx,eax
  423690:	8b 32                	mov    esi,DWORD PTR [edx]
  423692:	89 31                	mov    DWORD PTR [ecx],esi
  423694:	8b 72 04             	mov    esi,DWORD PTR [edx+0x4]
  423697:	89 71 04             	mov    DWORD PTR [ecx+0x4],esi
  42369a:	5e                   	pop    esi
  42369b:	8b 52 08             	mov    edx,DWORD PTR [edx+0x8]
  42369e:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  4236a1:	83 c4 0c             	add    esp,0xc
  4236a4:	c2 04 00             	ret    0x4
  4236a7:	90                   	nop
  4236a8:	90                   	nop
  4236a9:	90                   	nop
  4236aa:	90                   	nop
  4236ab:	90                   	nop
  4236ac:	90                   	nop
  4236ad:	90                   	nop
  4236ae:	90                   	nop
  4236af:	90                   	nop
