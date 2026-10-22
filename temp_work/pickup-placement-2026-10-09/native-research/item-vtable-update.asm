  440290: push   esi
  440291: mov    esi,ecx
  440293: call   0x421560
  440298: test   al,al
  44029a: je     0x4402ad
  44029c: mov    eax,DWORD PTR [esp+0xc]
  4402a0: mov    ecx,DWORD PTR [esp+0x8]
  4402a4: push   eax
  4402a5: push   ecx
  4402a6: mov    ecx,esi
  4402a8: call   0x4e1420
  4402ad: pop    esi
  4402ae: ret    0x8
  4402c0: mov    al,BYTE PTR [ecx+0x7c]
  4402c3: test   al,al
  4402c5: je     0x4402d6
  4402c7: mov    al,BYTE PTR [ecx+0xde]
  4402cd: test   al,al
  4402cf: je     0x4402d6
  4402d1: jmp    0x4e1c60
  4402d6: ret
  4402e0: mov    cl,BYTE PTR ds:0x7103a0 // None
  4402e6: mov    al,0x1
  4402e8: test   al,cl
  4402ea: jne    0x4402f4
  4402ec: or     cl,al
  4402ee: mov    BYTE PTR ds:0x7103a0,cl // None
  4402f4: jmp    0x440300
