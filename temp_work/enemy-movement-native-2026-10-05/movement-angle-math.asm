  5b1600:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  5b1604:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5b1608:	83 ec 0c             	sub    esp,0xc
  5b160b:	8d 44 24 00          	lea    eax,[esp+0x0]
  5b160f:	50                   	push   eax
  5b1610:	e8 cb 19 00 00       	call   0x5b2fe0
  5b1615:	8d 4c 24 00          	lea    ecx,[esp+0x0]
  5b1619:	51                   	push   ecx
  5b161a:	e8 d1 ff ff ff       	call   0x5b15f0
  5b161f:	83 c4 10             	add    esp,0x10
  5b1622:	c3                   	ret
  5b1623:	90                   	nop
  5b1624:	90                   	nop
  5b1625:	90                   	nop
  5b1626:	90                   	nop
  5b1627:	90                   	nop
  5b1628:	90                   	nop
  5b1629:	90                   	nop
  5b162a:	90                   	nop
  5b162b:	90                   	nop
  5b162c:	90                   	nop
  5b162d:	90                   	nop
  5b162e:	90                   	nop
  5b162f:	90                   	nop
  5b1630:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  5b1634:	d9 c0                	fld    st(0)
  5b1636:	d9 e1                	fabs
  5b1638:	dc 1d 20 01 65 00    	fcomp  QWORD PTR ds:0x650120
  5b163e:	df e0                	fnstsw ax
  5b1640:	f6 c4 41             	test   ah,0x41
  5b1643:	75 11                	jne    0x5b1656
  5b1645:	dd d8                	fstp   st(0)
  5b1647:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
  5b164b:	d9 05 18 01 65 00    	fld    DWORD PTR ds:0x650118
  5b1651:	e8 84 9a 05 00       	call   0x60b0da
  5b1656:	d8 15 10 d9 64 00    	fcom   DWORD PTR ds:0x64d910
  5b165c:	df e0                	fnstsw ax
  5b165e:	f6 c4 41             	test   ah,0x41
  5b1661:	74 13                	je     0x5b1676
  5b1663:	d8 05 18 01 65 00    	fadd   DWORD PTR ds:0x650118
  5b1669:	d8 15 10 d9 64 00    	fcom   DWORD PTR ds:0x64d910
  5b166f:	df e0                	fnstsw ax
  5b1671:	f6 c4 41             	test   ah,0x41
  5b1674:	75 ed                	jne    0x5b1663
  5b1676:	d8 15 54 d6 64 00    	fcom   DWORD PTR ds:0x64d654
  5b167c:	df e0                	fnstsw ax
  5b167e:	f6 c4 41             	test   ah,0x41
  5b1681:	75 13                	jne    0x5b1696
  5b1683:	d8 25 18 01 65 00    	fsub   DWORD PTR ds:0x650118
  5b1689:	d8 15 54 d6 64 00    	fcom   DWORD PTR ds:0x64d654
  5b168f:	df e0                	fnstsw ax
  5b1691:	f6 c4 41             	test   ah,0x41
  5b1694:	74 ed                	je     0x5b1683
  5b1696:	c3                   	ret
  5b1697:	90                   	nop
  5b1698:	90                   	nop
  5b1699:	90                   	nop
  5b169a:	90                   	nop
  5b169b:	90                   	nop
  5b169c:	90                   	nop
  5b169d:	90                   	nop
  5b169e:	90                   	nop
  5b169f:	90                   	nop
  5b16a0:	83 ec 0c             	sub    esp,0xc
  5b16a3:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  5b16a7:	d9 ff                	fcos
  5b16a9:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5b16ad:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
  5b16b4:	00 
  5b16b5:	8b c8                	mov    ecx,eax
  5b16b7:	d9 5c 24 00          	fstp   DWORD PTR [esp+0x0]
  5b16bb:	d9 44 24 14          	fld    DWORD PTR [esp+0x14]
  5b16bf:	d9 fe                	fsin
  5b16c1:	8b 54 24 00          	mov    edx,DWORD PTR [esp+0x0]
  5b16c5:	89 11                	mov    DWORD PTR [ecx],edx
  5b16c7:	8b 54 24 04          	mov    edx,DWORD PTR [esp+0x4]
  5b16cb:	89 51 04             	mov    DWORD PTR [ecx+0x4],edx
  5b16ce:	d9 e0                	fchs
  5b16d0:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
  5b16d4:	8b 54 24 08          	mov    edx,DWORD PTR [esp+0x8]
  5b16d8:	89 51 08             	mov    DWORD PTR [ecx+0x8],edx
  5b16db:	83 c4 0c             	add    esp,0xc
  5b16de:	c3                   	ret
  5b16df:	90                   	nop
  5b16e0:	83 ec 0c             	sub    esp,0xc
  5b16e3:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  5b16e7:	d9 ff                	fcos
  5b16e9:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
  5b16ed:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
  5b16f0:	89 4c 24 04          	mov    DWORD PTR [esp+0x4],ecx
  5b16f4:	d9 44 24 18          	fld    DWORD PTR [esp+0x18]
  5b16f8:	d9 fe                	fsin
  5b16fa:	d9 c0                	fld    st(0)
  5b16fc:	d8 48 08             	fmul   DWORD PTR [eax+0x8]
  5b16ff:	d9 c2                	fld    st(2)
  5b1701:	d8 08                	fmul   DWORD PTR [eax]
  5b1703:	de c1                	faddp  st(1),st
  5b1705:	d9 5c 24 00          	fstp   DWORD PTR [esp+0x0]
  5b1709:	d9 c9                	fxch   st(1)
  5b170b:	d8 48 08             	fmul   DWORD PTR [eax+0x8]
  5b170e:	d9 c9                	fxch   st(1)
  5b1710:	d8 08                	fmul   DWORD PTR [eax]
  5b1712:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
  5b1716:	8b 4c 24 00          	mov    ecx,DWORD PTR [esp+0x0]
  5b171a:	8b d0                	mov    edx,eax
  5b171c:	de e9                	fsubp  st(1),st
  5b171e:	89 0a                	mov    DWORD PTR [edx],ecx
  5b1720:	8b 4c 24 04          	mov    ecx,DWORD PTR [esp+0x4]
  5b1724:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
  5b1728:	89 4a 04             	mov    DWORD PTR [edx+0x4],ecx
  5b172b:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
  5b172f:	89 4a 08             	mov    DWORD PTR [edx+0x8],ecx
  5b1732:	83 c4 0c             	add    esp,0xc
  5b1735:	c3                   	ret
  5b1736:	90                   	nop
  5b1737:	90                   	nop
  5b1738:	90                   	nop
  5b1739:	90                   	nop
  5b173a:	90                   	nop
  5b173b:	90                   	nop
  5b173c:	90                   	nop
  5b173d:	90                   	nop
  5b173e:	90                   	nop
  5b173f:	90                   	nop
