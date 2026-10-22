  55c65c:	55                   	push   ebp
  55c65d:	8b ec                	mov    ebp,esp
  55c65f:	81 c4 b0 fe ff ff    	add    esp,0xfffffeb0
  55c665:	33 c9                	xor    ecx,ecx
  55c667:	89 8d b0 fe ff ff    	mov    DWORD PTR [ebp-0x150],ecx
  55c66d:	89 8d e0 fe ff ff    	mov    DWORD PTR [ebp-0x120],ecx
  55c673:	89 8d e4 fe ff ff    	mov    DWORD PTR [ebp-0x11c],ecx
  55c679:	89 8d e8 fe ff ff    	mov    DWORD PTR [ebp-0x118],ecx
  55c67f:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
  55c682:	89 4d ec             	mov    DWORD PTR [ebp-0x14],ecx
  55c685:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55c688:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55c68b:	33 c0                	xor    eax,eax
  55c68d:	55                   	push   ebp
  55c68e:	68 82 cc 55 00       	push   0x55cc82
  55c693:	64 ff 30             	push   DWORD PTR fs:[eax]
  55c696:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55c699:	8d 95 ec fe ff ff    	lea    edx,[ebp-0x114]
  55c69f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c6a2:	8b 00                	mov    eax,DWORD PTR [eax]
  55c6a4:	e8 37 69 ea ff       	call   0x402fe0
  55c6a9:	8d 95 ec fe ff ff    	lea    edx,[ebp-0x114]
  55c6af:	8d 45 ec             	lea    eax,[ebp-0x14]
  55c6b2:	e8 1d 79 ea ff       	call   0x403fd4
  55c6b7:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
  55c6ba:	68 98 cc 55 00       	push   0x55cc98
  55c6bf:	68 a4 cc 55 00       	push   0x55cca4
  55c6c4:	8d 45 f0             	lea    eax,[ebp-0x10]
  55c6c7:	ba 03 00 00 00       	mov    edx,0x3
  55c6cc:	e8 1f 7a ea ff       	call   0x4040f0
  55c6d1:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
  55c6d4:	50                   	push   eax
  55c6d5:	e8 b2 7a f4 ff       	call   0x4a418c
  55c6da:	8a 0d b0 cc 55 00    	mov    cl,BYTE PTR ds:0x55ccb0
  55c6e0:	5a                   	pop    edx
  55c6e1:	e8 d2 81 f4 ff       	call   0x4a48b8
  55c6e6:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55c6e9:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c6ec:	e8 cf 69 ff ff       	call   0x5530c0
  55c6f1:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55c6f6:	8b 00                	mov    eax,DWORD PTR [eax]
  55c6f8:	80 b8 00 01 00 00 01 	cmp    BYTE PTR [eax+0x100],0x1
  55c6ff:	75 41                	jne    0x55c742
  55c701:	a1 04 24 57 00       	mov    eax,ds:0x572404
  55c706:	ff b0 94 00 00 00    	push   DWORD PTR [eax+0x94]
  55c70c:	68 bc cc 55 00       	push   0x55ccbc
  55c711:	a1 04 24 57 00       	mov    eax,ds:0x572404
  55c716:	ff b0 b0 00 00 00    	push   DWORD PTR [eax+0xb0]
  55c71c:	8d 85 e8 fe ff ff    	lea    eax,[ebp-0x118]
  55c722:	ba 03 00 00 00       	mov    edx,0x3
  55c727:	e8 c4 79 ea ff       	call   0x4040f0
  55c72c:	8b 95 e8 fe ff ff    	mov    edx,DWORD PTR [ebp-0x118]
  55c732:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c735:	8b 80 f0 02 00 00    	mov    eax,DWORD PTR [eax+0x2f0]
  55c73b:	e8 04 60 ed ff       	call   0x432744
  55c740:	eb 3f                	jmp    0x55c781
  55c742:	a1 04 24 57 00       	mov    eax,ds:0x572404
  55c747:	ff b0 94 00 00 00    	push   DWORD PTR [eax+0x94]
  55c74d:	68 bc cc 55 00       	push   0x55ccbc
  55c752:	a1 04 24 57 00       	mov    eax,ds:0x572404
  55c757:	ff b0 ac 00 00 00    	push   DWORD PTR [eax+0xac]
  55c75d:	8d 85 e4 fe ff ff    	lea    eax,[ebp-0x11c]
  55c763:	ba 03 00 00 00       	mov    edx,0x3
  55c768:	e8 83 79 ea ff       	call   0x4040f0
  55c76d:	8b 95 e4 fe ff ff    	mov    edx,DWORD PTR [ebp-0x11c]
  55c773:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c776:	8b 80 f0 02 00 00    	mov    eax,DWORD PTR [eax+0x2f0]
  55c77c:	e8 c3 5f ed ff       	call   0x432744
  55c781:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55c787:	8b 92 cc 00 00 00    	mov    edx,DWORD PTR [edx+0xcc]
  55c78d:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c790:	8b 80 e0 02 00 00    	mov    eax,DWORD PTR [eax+0x2e0]
  55c796:	e8 a9 5f ed ff       	call   0x432744
  55c79b:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55c7a0:	8b 00                	mov    eax,DWORD PTR [eax]
  55c7a2:	80 b8 00 01 00 00 01 	cmp    BYTE PTR [eax+0x100],0x1
  55c7a9:	75 18                	jne    0x55c7c3
  55c7ab:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55c7b0:	8b 00                	mov    eax,DWORD PTR [eax]
  55c7b2:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55c7b8:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
  55c7bb:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
  55c7be:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  55c7c1:	eb 16                	jmp    0x55c7d9
  55c7c3:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55c7c8:	8b 00                	mov    eax,DWORD PTR [eax]
  55c7ca:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55c7d0:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
  55c7d3:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
  55c7d6:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
  55c7d9:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
  55c7dc:	83 f8 04             	cmp    eax,0x4
  55c7df:	0f 87 32 01 00 00    	ja     0x55c917
  55c7e5:	ff 24 85 ec c7 55 00 	jmp    DWORD PTR [eax*4+0x55c7ec]
  55c7ec:	00 c8                	add    al,cl
  55c7ee:	55                   	push   ebp
  55c7ef:	00 3a                	add    BYTE PTR [edx],bh
  55c7f1:	c8 55 00 74          	enter  0x55,0x74
  55c7f5:	c8 55 00 ab          	enter  0x55,0xab
  55c7f9:	c8 55 00 e2          	enter  0x55,0xe2
  55c7fd:	c8 55 00 8b          	enter  0x55,0x8b
  55c801:	15 04 24 57 00       	adc    eax,0x572404
  55c806:	8b 92 d0 00 00 00    	mov    edx,DWORD PTR [edx+0xd0]
  55c80c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c80f:	8b 80 30 03 00 00    	mov    eax,DWORD PTR [eax+0x330]
  55c815:	e8 2a 5f ed ff       	call   0x432744
  55c81a:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55c81f:	8b 00                	mov    eax,DWORD PTR [eax]
  55c821:	8b 90 b0 00 00 00    	mov    edx,DWORD PTR [eax+0xb0]
  55c827:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c82a:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  55c830:	e8 bb 22 f5 ff       	call   0x4aeaf0
  55c835:	e9 dd 00 00 00       	jmp    0x55c917
  55c83a:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55c840:	8b 92 d4 00 00 00    	mov    edx,DWORD PTR [edx+0xd4]
  55c846:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c849:	8b 80 30 03 00 00    	mov    eax,DWORD PTR [eax+0x330]
  55c84f:	e8 f0 5e ed ff       	call   0x432744
  55c854:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55c859:	8b 00                	mov    eax,DWORD PTR [eax]
  55c85b:	8b 90 b4 00 00 00    	mov    edx,DWORD PTR [eax+0xb4]
  55c861:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c864:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  55c86a:	e8 81 22 f5 ff       	call   0x4aeaf0
  55c86f:	e9 a3 00 00 00       	jmp    0x55c917
  55c874:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55c87a:	8b 92 d8 00 00 00    	mov    edx,DWORD PTR [edx+0xd8]
  55c880:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c883:	8b 80 30 03 00 00    	mov    eax,DWORD PTR [eax+0x330]
  55c889:	e8 b6 5e ed ff       	call   0x432744
  55c88e:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55c893:	8b 00                	mov    eax,DWORD PTR [eax]
  55c895:	8b 90 b8 00 00 00    	mov    edx,DWORD PTR [eax+0xb8]
  55c89b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c89e:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  55c8a4:	e8 47 22 f5 ff       	call   0x4aeaf0
  55c8a9:	eb 6c                	jmp    0x55c917
  55c8ab:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55c8b1:	8b 92 dc 00 00 00    	mov    edx,DWORD PTR [edx+0xdc]
  55c8b7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c8ba:	8b 80 30 03 00 00    	mov    eax,DWORD PTR [eax+0x330]
  55c8c0:	e8 7f 5e ed ff       	call   0x432744
  55c8c5:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55c8ca:	8b 00                	mov    eax,DWORD PTR [eax]
  55c8cc:	8b 90 dc 00 00 00    	mov    edx,DWORD PTR [eax+0xdc]
  55c8d2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c8d5:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  55c8db:	e8 10 22 f5 ff       	call   0x4aeaf0
  55c8e0:	eb 35                	jmp    0x55c917
  55c8e2:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55c8e8:	8b 92 e0 00 00 00    	mov    edx,DWORD PTR [edx+0xe0]
  55c8ee:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c8f1:	8b 80 30 03 00 00    	mov    eax,DWORD PTR [eax+0x330]
  55c8f7:	e8 48 5e ed ff       	call   0x432744
  55c8fc:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55c901:	8b 00                	mov    eax,DWORD PTR [eax]
  55c903:	8b 90 bc 00 00 00    	mov    edx,DWORD PTR [eax+0xbc]
  55c909:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c90c:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  55c912:	e8 d9 21 f5 ff       	call   0x4aeaf0
  55c917:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55c91c:	8b 00                	mov    eax,DWORD PTR [eax]
  55c91e:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55c924:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
  55c927:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
  55c92a:	8b 40 24             	mov    eax,DWORD PTR [eax+0x24]
  55c92d:	48                   	dec    eax
  55c92e:	74 0b                	je     0x55c93b
  55c930:	48                   	dec    eax
  55c931:	74 3f                	je     0x55c972
  55c933:	48                   	dec    eax
  55c934:	74 73                	je     0x55c9a9
  55c936:	e9 a3 00 00 00       	jmp    0x55c9de
  55c93b:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55c940:	8b 00                	mov    eax,DWORD PTR [eax]
  55c942:	8b 90 ec 00 00 00    	mov    edx,DWORD PTR [eax+0xec]
  55c948:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c94b:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55c951:	e8 9a 21 f5 ff       	call   0x4aeaf0
  55c956:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55c95c:	8b 92 f8 00 00 00    	mov    edx,DWORD PTR [edx+0xf8]
  55c962:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c965:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55c96b:	e8 d4 5d ed ff       	call   0x432744
  55c970:	eb 6c                	jmp    0x55c9de
  55c972:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55c977:	8b 00                	mov    eax,DWORD PTR [eax]
  55c979:	8b 90 f4 00 00 00    	mov    edx,DWORD PTR [eax+0xf4]
  55c97f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c982:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55c988:	e8 63 21 f5 ff       	call   0x4aeaf0
  55c98d:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55c993:	8b 92 00 01 00 00    	mov    edx,DWORD PTR [edx+0x100]
  55c999:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c99c:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55c9a2:	e8 9d 5d ed ff       	call   0x432744
  55c9a7:	eb 35                	jmp    0x55c9de
  55c9a9:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55c9ae:	8b 00                	mov    eax,DWORD PTR [eax]
  55c9b0:	8b 90 f0 00 00 00    	mov    edx,DWORD PTR [eax+0xf0]
  55c9b6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c9b9:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55c9bf:	e8 2c 21 f5 ff       	call   0x4aeaf0
  55c9c4:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55c9ca:	8b 92 fc 00 00 00    	mov    edx,DWORD PTR [edx+0xfc]
  55c9d0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c9d3:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55c9d9:	e8 66 5d ed ff       	call   0x432744
  55c9de:	33 d2                	xor    edx,edx
  55c9e0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c9e3:	8b 80 08 03 00 00    	mov    eax,DWORD PTR [eax+0x308]
  55c9e9:	e8 56 5d ed ff       	call   0x432744
  55c9ee:	33 d2                	xor    edx,edx
  55c9f0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55c9f3:	8b 80 1c 03 00 00    	mov    eax,DWORD PTR [eax+0x31c]
  55c9f9:	e8 46 5d ed ff       	call   0x432744
  55c9fe:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55ca04:	8b 52 70             	mov    edx,DWORD PTR [edx+0x70]
  55ca07:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ca0a:	8b 80 28 03 00 00    	mov    eax,DWORD PTR [eax+0x328]
  55ca10:	e8 2f 5d ed ff       	call   0x432744
  55ca15:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55ca1b:	8b 92 f4 00 00 00    	mov    edx,DWORD PTR [edx+0xf4]
  55ca21:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ca24:	8b 80 2c 03 00 00    	mov    eax,DWORD PTR [eax+0x32c]
  55ca2a:	e8 15 5d ed ff       	call   0x432744
  55ca2f:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55ca35:	8b 52 78             	mov    edx,DWORD PTR [edx+0x78]
  55ca38:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ca3b:	8b 80 34 03 00 00    	mov    eax,DWORD PTR [eax+0x334]
  55ca41:	e8 fe 5c ed ff       	call   0x432744
  55ca46:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55ca4c:	8b 52 24             	mov    edx,DWORD PTR [edx+0x24]
  55ca4f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ca52:	8b 80 0c 03 00 00    	mov    eax,DWORD PTR [eax+0x30c]
  55ca58:	e8 e7 5c ed ff       	call   0x432744
  55ca5d:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55ca63:	8b 52 28             	mov    edx,DWORD PTR [edx+0x28]
  55ca66:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ca69:	8b 80 10 03 00 00    	mov    eax,DWORD PTR [eax+0x310]
  55ca6f:	e8 d0 5c ed ff       	call   0x432744
  55ca74:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55ca7a:	8b 92 98 00 00 00    	mov    edx,DWORD PTR [edx+0x98]
  55ca80:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ca83:	8b 80 20 03 00 00    	mov    eax,DWORD PTR [eax+0x320]
  55ca89:	e8 b6 5c ed ff       	call   0x432744
  55ca8e:	8d 85 e0 fe ff ff    	lea    eax,[ebp-0x120]
  55ca94:	50                   	push   eax
  55ca95:	8d 95 b4 fe ff ff    	lea    edx,[ebp-0x14c]
  55ca9b:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55caa0:	8b 00                	mov    eax,DWORD PTR [eax]
  55caa2:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55caa8:	e8 cb 8e 00 00       	call   0x565978
  55caad:	8d 85 b4 fe ff ff    	lea    eax,[ebp-0x14c]
  55cab3:	89 85 d8 fe ff ff    	mov    DWORD PTR [ebp-0x128],eax
  55cab9:	c6 85 dc fe ff ff 04 	mov    BYTE PTR [ebp-0x124],0x4
  55cac0:	8d 95 d8 fe ff ff    	lea    edx,[ebp-0x128]
  55cac6:	33 c9                	xor    ecx,ecx
  55cac8:	b8 c8 cc 55 00       	mov    eax,0x55ccc8
  55cacd:	e8 c2 dd ea ff       	call   0x40a894
  55cad2:	8b 95 e0 fe ff ff    	mov    edx,DWORD PTR [ebp-0x120]
  55cad8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55cadb:	8b 80 14 03 00 00    	mov    eax,DWORD PTR [eax+0x314]
  55cae1:	e8 5e 5c ed ff       	call   0x432744
  55cae6:	8d 85 b0 fe ff ff    	lea    eax,[ebp-0x150]
  55caec:	50                   	push   eax
  55caed:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55caf2:	8b 00                	mov    eax,DWORD PTR [eax]
  55caf4:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55cafa:	e8 5d 8e 00 00       	call   0x56595c
  55caff:	89 85 d8 fe ff ff    	mov    DWORD PTR [ebp-0x128],eax
  55cb05:	c6 85 dc fe ff ff 00 	mov    BYTE PTR [ebp-0x124],0x0
  55cb0c:	8d 95 d8 fe ff ff    	lea    edx,[ebp-0x128]
  55cb12:	33 c9                	xor    ecx,ecx
  55cb14:	b8 d4 cc 55 00       	mov    eax,0x55ccd4
  55cb19:	e8 76 dd ea ff       	call   0x40a894
  55cb1e:	8b 95 b0 fe ff ff    	mov    edx,DWORD PTR [ebp-0x150]
  55cb24:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55cb27:	8b 80 18 03 00 00    	mov    eax,DWORD PTR [eax+0x318]
  55cb2d:	e8 12 5c ed ff       	call   0x432744
  55cb32:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cb37:	8b 00                	mov    eax,DWORD PTR [eax]
  55cb39:	80 b8 00 01 00 00 02 	cmp    BYTE PTR [eax+0x100],0x2
  55cb40:	75 7f                	jne    0x55cbc1
  55cb42:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cb47:	8b 00                	mov    eax,DWORD PTR [eax]
  55cb49:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55cb4f:	8b 40 0c             	mov    eax,DWORD PTR [eax+0xc]
  55cb52:	8a 40 08             	mov    al,BYTE PTR [eax+0x8]
  55cb55:	2c 01                	sub    al,0x1
  55cb57:	72 0b                	jb     0x55cb64
  55cb59:	74 28                	je     0x55cb83
  55cb5b:	fe c8                	dec    al
  55cb5d:	74 43                	je     0x55cba2
  55cb5f:	e9 de 00 00 00       	jmp    0x55cc42
  55cb64:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55cb6a:	8b 92 c0 00 00 00    	mov    edx,DWORD PTR [edx+0xc0]
  55cb70:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55cb73:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55cb79:	e8 c6 5b ed ff       	call   0x432744
  55cb7e:	e9 bf 00 00 00       	jmp    0x55cc42
  55cb83:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55cb89:	8b 92 c4 00 00 00    	mov    edx,DWORD PTR [edx+0xc4]
  55cb8f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55cb92:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55cb98:	e8 a7 5b ed ff       	call   0x432744
  55cb9d:	e9 a0 00 00 00       	jmp    0x55cc42
  55cba2:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55cba8:	8b 92 c8 00 00 00    	mov    edx,DWORD PTR [edx+0xc8]
  55cbae:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55cbb1:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55cbb7:	e8 88 5b ed ff       	call   0x432744
  55cbbc:	e9 81 00 00 00       	jmp    0x55cc42
  55cbc1:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cbc6:	8b 00                	mov    eax,DWORD PTR [eax]
  55cbc8:	80 b8 00 01 00 00 01 	cmp    BYTE PTR [eax+0x100],0x1
  55cbcf:	75 71                	jne    0x55cc42
  55cbd1:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cbd6:	8b 00                	mov    eax,DWORD PTR [eax]
  55cbd8:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55cbde:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
  55cbe1:	8a 40 08             	mov    al,BYTE PTR [eax+0x8]
  55cbe4:	2c 01                	sub    al,0x1
  55cbe6:	72 08                	jb     0x55cbf0
  55cbe8:	74 22                	je     0x55cc0c
  55cbea:	fe c8                	dec    al
  55cbec:	74 3a                	je     0x55cc28
  55cbee:	eb 52                	jmp    0x55cc42
  55cbf0:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55cbf6:	8b 92 c0 00 00 00    	mov    edx,DWORD PTR [edx+0xc0]
  55cbfc:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55cbff:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55cc05:	e8 3a 5b ed ff       	call   0x432744
  55cc0a:	eb 36                	jmp    0x55cc42
  55cc0c:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55cc12:	8b 92 c4 00 00 00    	mov    edx,DWORD PTR [edx+0xc4]
  55cc18:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55cc1b:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55cc21:	e8 1e 5b ed ff       	call   0x432744
  55cc26:	eb 1a                	jmp    0x55cc42
  55cc28:	8b 15 04 24 57 00    	mov    edx,DWORD PTR ds:0x572404
  55cc2e:	8b 92 c8 00 00 00    	mov    edx,DWORD PTR [edx+0xc8]
  55cc34:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55cc37:	8b 80 24 03 00 00    	mov    eax,DWORD PTR [eax+0x324]
  55cc3d:	e8 02 5b ed ff       	call   0x432744
  55cc42:	e8 45 75 f4 ff       	call   0x4a418c
  55cc47:	e8 64 7d f4 ff       	call   0x4a49b0
  55cc4c:	33 c0                	xor    eax,eax
  55cc4e:	5a                   	pop    edx
  55cc4f:	59                   	pop    ecx
  55cc50:	59                   	pop    ecx
  55cc51:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55cc54:	68 89 cc 55 00       	push   0x55cc89
  55cc59:	8d 85 b0 fe ff ff    	lea    eax,[ebp-0x150]
  55cc5f:	e8 4c 71 ea ff       	call   0x403db0
  55cc64:	8d 85 e0 fe ff ff    	lea    eax,[ebp-0x120]
  55cc6a:	ba 03 00 00 00       	mov    edx,0x3
  55cc6f:	e8 60 71 ea ff       	call   0x403dd4
  55cc74:	8d 45 ec             	lea    eax,[ebp-0x14]
  55cc77:	ba 02 00 00 00       	mov    edx,0x2
  55cc7c:	e8 53 71 ea ff       	call   0x403dd4
  55cc81:	c3                   	ret
  55cc82:	e9 6d 6b ea ff       	jmp    0x4037f4
  55cc87:	eb d0                	jmp    0x55cc59
  55cc89:	8b e5                	mov    esp,ebp
  55cc8b:	5d                   	pop    ebp
  55cc8c:	c3                   	ret
  55cc8d:	00 00                	add    BYTE PTR [eax],al
  55cc8f:	00 ff                	add    bh,bh
  55cc91:	ff                   	(bad)
  55cc92:	ff                   	(bad)
  55cc93:	ff 01                	inc    DWORD PTR [ecx]
  55cc95:	00 00                	add    BYTE PTR [eax],al
  55cc97:	00 2e                	add    BYTE PTR [esi],ch
  55cc99:	00 00                	add    BYTE PTR [eax],al
  55cc9b:	00 ff                	add    bh,bh
  55cc9d:	ff                   	(bad)
  55cc9e:	ff                   	(bad)
  55cc9f:	ff 08                	dec    DWORD PTR [eax]
  55cca1:	00 00                	add    BYTE PTR [eax],al
  55cca3:	00 46 6f             	add    BYTE PTR [esi+0x6f],al
  55cca6:	72 6d                	jb     0x55cd15
  55cca8:	53                   	push   ebx
  55cca9:	68 6f 77 00 00       	push   0x776f
  55ccae:	00 00                	add    BYTE PTR [eax],al
  55ccb0:	00 00                	add    BYTE PTR [eax],al
  55ccb2:	00 00                	add    BYTE PTR [eax],al
  55ccb4:	ff                   	(bad)
  55ccb5:	ff                   	(bad)
  55ccb6:	ff                   	(bad)
  55ccb7:	ff 03                	inc    DWORD PTR [ebx]
  55ccb9:	00 00                	add    BYTE PTR [eax],al
  55ccbb:	00 20                	add    BYTE PTR [eax],ah
  55ccbd:	2d 20 00 ff ff       	sub    eax,0xffff0020
  55ccc2:	ff                   	(bad)
  55ccc3:	ff 02                	inc    DWORD PTR [edx]
  55ccc5:	00 00                	add    BYTE PTR [eax],al
  55ccc7:	00 25 73 00 00 ff    	add    BYTE PTR ds:0xff000073,ah
  55cccd:	ff                   	(bad)
  55ccce:	ff                   	(bad)
  55cccf:	ff 02                	inc    DWORD PTR [edx]
  55ccd1:	00 00                	add    BYTE PTR [eax],al
  55ccd3:	00 25 64 00 00 55    	add    BYTE PTR ds:0x55000064,ah
  55ccd9:	8b ec                	mov    ebp,esp
  55ccdb:	83 c4 f8             	add    esp,0xfffffff8
  55ccde:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55cce1:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55cce4:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55cce7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ccea:	e8 09 6a ff ff       	call   0x5536f8
  55ccef:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ccf4:	8b 00                	mov    eax,DWORD PTR [eax]
  55ccf6:	80 b8 00 01 00 00 02 	cmp    BYTE PTR [eax+0x100],0x2
  55ccfd:	75 42                	jne    0x55cd41
  55ccff:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cd04:	8b 00                	mov    eax,DWORD PTR [eax]
  55cd06:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
  55cd0c:	c6 40 14 00          	mov    BYTE PTR [eax+0x14],0x0
  55cd10:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cd15:	8b 00                	mov    eax,DWORD PTR [eax]
  55cd17:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55cd1d:	e8 ba 32 ff ff       	call   0x54ffdc
  55cd22:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cd27:	8b 00                	mov    eax,DWORD PTR [eax]
  55cd29:	ba 88 cd 55 00       	mov    edx,0x55cd88
  55cd2e:	e8 39 cf 00 00       	call   0x569c6c
  55cd33:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cd38:	8b 00                	mov    eax,DWORD PTR [eax]
  55cd3a:	e8 a5 dc 00 00       	call   0x56a9e4
  55cd3f:	eb 2f                	jmp    0x55cd70
  55cd41:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cd46:	8b 00                	mov    eax,DWORD PTR [eax]
  55cd48:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55cd4e:	e8 89 32 ff ff       	call   0x54ffdc
  55cd53:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cd58:	8b 00                	mov    eax,DWORD PTR [eax]
  55cd5a:	ba 98 cd 55 00       	mov    edx,0x55cd98
  55cd5f:	e8 08 cf 00 00       	call   0x569c6c
  55cd64:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cd69:	8b 00                	mov    eax,DWORD PTR [eax]
  55cd6b:	e8 74 dc 00 00       	call   0x56a9e4
  55cd70:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cd75:	8b 00                	mov    eax,DWORD PTR [eax]
  55cd77:	e8 74 cc 00 00       	call   0x5699f0
  55cd7c:	59                   	pop    ecx
  55cd7d:	59                   	pop    ecx
  55cd7e:	5d                   	pop    ebp
  55cd7f:	c3                   	ret
  55cd80:	ff                   	(bad)
  55cd81:	ff                   	(bad)
  55cd82:	ff                   	(bad)
  55cd83:	ff 06                	inc    DWORD PTR [esi]
  55cd85:	00 00                	add    BYTE PTR [eax],al
  55cd87:	00 52 43             	add    BYTE PTR [edx+0x43],dl
  55cd8a:	4d                   	dec    ebp
  55cd8b:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55cd8c:	33 32                	xor    esi,DWORD PTR [edx]
  55cd8e:	00 00                	add    BYTE PTR [eax],al
  55cd90:	ff                   	(bad)
  55cd91:	ff                   	(bad)
  55cd92:	ff                   	(bad)
  55cd93:	ff 06                	inc    DWORD PTR [esi]
  55cd95:	00 00                	add    BYTE PTR [eax],al
  55cd97:	00 52 43             	add    BYTE PTR [edx+0x43],dl
  55cd9a:	4d                   	dec    ebp
  55cd9b:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55cd9c:	34 33                	xor    al,0x33
  55cd9e:	00 00                	add    BYTE PTR [eax],al
  55cda0:	55                   	push   ebp
  55cda1:	8b ec                	mov    ebp,esp
  55cda3:	83 c4 f8             	add    esp,0xfffffff8
  55cda6:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55cda9:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55cdac:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cdb1:	8b 00                	mov    eax,DWORD PTR [eax]
  55cdb3:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55cdb9:	e8 1e 32 ff ff       	call   0x54ffdc
  55cdbe:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cdc3:	8b 00                	mov    eax,DWORD PTR [eax]
  55cdc5:	ba 34 ce 55 00       	mov    edx,0x55ce34
  55cdca:	e8 9d ce 00 00       	call   0x569c6c
  55cdcf:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cdd4:	8b 00                	mov    eax,DWORD PTR [eax]
  55cdd6:	e8 09 dc 00 00       	call   0x56a9e4
  55cddb:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55cdde:	e8 f9 66 ff ff       	call   0x5534dc
  55cde3:	e8 bc 7e ff ff       	call   0x554ca4
  55cde8:	84 c0                	test   al,al
  55cdea:	74 34                	je     0x55ce20
  55cdec:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cdf1:	8b 00                	mov    eax,DWORD PTR [eax]
  55cdf3:	e8 ec db 00 00       	call   0x56a9e4
  55cdf8:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55cdfd:	8b 00                	mov    eax,DWORD PTR [eax]
  55cdff:	ba 48 ce 55 00       	mov    edx,0x55ce48
  55ce04:	e8 63 ce 00 00       	call   0x569c6c
  55ce09:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ce0e:	8b 00                	mov    eax,DWORD PTR [eax]
  55ce10:	e8 cf db 00 00       	call   0x56a9e4
  55ce15:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55ce18:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ce1b:	e8 0c 65 ff ff       	call   0x55332c
  55ce20:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ce23:	e8 a8 67 ff ff       	call   0x5535d0
  55ce28:	59                   	pop    ecx
  55ce29:	59                   	pop    ecx
  55ce2a:	5d                   	pop    ebp
  55ce2b:	c3                   	ret
  55ce2c:	ff                   	(bad)
  55ce2d:	ff                   	(bad)
  55ce2e:	ff                   	(bad)
  55ce2f:	ff 08                	dec    DWORD PTR [eax]
  55ce31:	00 00                	add    BYTE PTR [eax],al
  55ce33:	00 4d 6e             	add    BYTE PTR [ebp+0x6e],cl
  55ce36:	5f                   	pop    edi
  55ce37:	72 65                	jb     0x55ce9e
  55ce39:	64 32 33             	xor    dh,BYTE PTR fs:[ebx]
  55ce3c:	00 00                	add    BYTE PTR [eax],al
  55ce3e:	00 00                	add    BYTE PTR [eax],al
  55ce40:	ff                   	(bad)
  55ce41:	ff                   	(bad)
  55ce42:	ff                   	(bad)
  55ce43:	ff 08                	dec    DWORD PTR [eax]
  55ce45:	00 00                	add    BYTE PTR [eax],al
  55ce47:	00 4d 6e             	add    BYTE PTR [ebp+0x6e],cl
  55ce4a:	5f                   	pop    edi
  55ce4b:	52                   	push   edx
  55ce4c:	65 64 32 38          	gs xor bh,BYTE PTR fs:[eax]
  55ce50:	00 00                	add    BYTE PTR [eax],al
  55ce52:	00 00                	add    BYTE PTR [eax],al
  55ce54:	55                   	push   ebp
  55ce55:	8b ec                	mov    ebp,esp
  55ce57:	83 c4 f8             	add    esp,0xfffffff8
  55ce5a:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55ce5d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55ce60:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55ce63:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55ce66:	e8 51 68 ff ff       	call   0x5536bc
  55ce6b:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ce70:	8b 00                	mov    eax,DWORD PTR [eax]
  55ce72:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
  55ce78:	e8 5f 31 ff ff       	call   0x54ffdc
  55ce7d:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ce82:	8b 00                	mov    eax,DWORD PTR [eax]
  55ce84:	ba a8 ce 55 00       	mov    edx,0x55cea8
  55ce89:	e8 de cd 00 00       	call   0x569c6c
  55ce8e:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ce93:	8b 00                	mov    eax,DWORD PTR [eax]
  55ce95:	e8 4a db 00 00       	call   0x56a9e4
  55ce9a:	59                   	pop    ecx
  55ce9b:	59                   	pop    ecx
  55ce9c:	5d                   	pop    ebp
  55ce9d:	c3                   	ret
  55ce9e:	00 00                	add    BYTE PTR [eax],al
  55cea0:	ff                   	(bad)
  55cea1:	ff                   	(bad)
  55cea2:	ff                   	(bad)
  55cea3:	ff 05 00 00 00 52    	inc    DWORD PTR ds:0x52000000
  55cea9:	43                   	inc    ebx
  55ceaa:	4d                   	dec    ebp
  55ceab:	6e                   	outs   dx,BYTE PTR ds:[esi]
  55ceac:	36 00 00             	add    BYTE PTR ss:[eax],al
  55ceaf:	00 55 8b             	add    BYTE PTR [ebp-0x75],dl
  55ceb2:	ec                   	in     al,dx
  55ceb3:	83 c4 f8             	add    esp,0xfffffff8
  55ceb6:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
  55ceb9:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
  55cebc:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
  55cebf:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55cec2:	e8 41 63 ff ff       	call   0x553208
  55cec7:	e8 8c f3 fe ff       	call   0x54c258
  55cecc:	33 d2                	xor    edx,edx
  55cece:	e8 41 fc fe ff       	call   0x54cb14
  55ced3:	a1 08 21 57 00       	mov    eax,ds:0x572108
  55ced8:	8b 00                	mov    eax,DWORD PTR [eax]
  55ceda:	80 b8 00 01 00 00 01 	cmp    BYTE PTR [eax+0x100],0x1
  55cee1:	75 13                	jne    0x55cef6
  55cee3:	e8 70 f3 fe ff       	call   0x54c258
  55cee8:	33 c9                	xor    ecx,ecx
  55ceea:	ba 32 00 00 00       	mov    edx,0x32
  55ceef:	e8 f0 fb fe ff       	call   0x54cae4
  55cef4:	eb 11                	jmp    0x55cf07
  55cef6:	e8 5d f3 fe ff       	call   0x54c258
  55cefb:	33 c9                	xor    ecx,ecx
  55cefd:	ba 28 00 00 00       	mov    edx,0x28
  55cf02:	e8 dd fb fe ff       	call   0x54cae4
  55cf07:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
  55cf0a:	8b 10                	mov    edx,DWORD PTR [eax]
  55cf0c:	ff 52 74             	call   DWORD PTR [edx+0x74]
  55cf0f:	59                   	pop    ecx
  55cf10:	59                   	pop    ecx
  55cf11:	5d                   	pop    ebp
  55cf12:	c3                   	ret
  55cf13:	90                   	nop
  55cf14:	55                   	push   ebp
  55cf15:	8b ec                	mov    ebp,esp
  55cf17:	33 c0                	xor    eax,eax
  55cf19:	55                   	push   ebp
  55cf1a:	68 39 cf 55 00       	push   0x55cf39
  55cf1f:	64 ff 30             	push   DWORD PTR fs:[eax]
  55cf22:	64 89 20             	mov    DWORD PTR fs:[eax],esp
  55cf25:	ff 05 a4 48 57 00    	inc    DWORD PTR ds:0x5748a4
  55cf2b:	33 c0                	xor    eax,eax
  55cf2d:	5a                   	pop    edx
  55cf2e:	59                   	pop    ecx
  55cf2f:	59                   	pop    ecx
  55cf30:	64 89 10             	mov    DWORD PTR fs:[eax],edx
  55cf33:	68 40 cf 55 00       	push   0x55cf40
  55cf38:	c3                   	ret
  55cf39:	e9 b6 68 ea ff       	jmp    0x4037f4
  55cf3e:	eb f8                	jmp    0x55cf38
  55cf40:	5d                   	pop    ebp
  55cf41:	c3                   	ret
  55cf42:	8b c0                	mov    eax,eax
  55cf44:	83 2d a4 48 57 00 01 	sub    DWORD PTR ds:0x5748a4,0x1
  55cf4b:	c3                   	ret
