/*
 * FUN_0050300c at 0050300c
 * uint __register FUN_0050300c(int * param_1, LONG * param_2)
 * Address ranges: 0050300c-00503099
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0050300c(int *param_1,LONG *param_2)

{
  POINT pt;
  bool bVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  LONG LVar6;
  RECT local_24;
  uint local_14;
  LONG local_10;
  LONG local_c;
  int *local_8;
  
  local_10 = *param_2;
  local_c = param_2[1];
  local_14 = 0xffffffff;
  local_8 = param_1;
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    LVar5 = local_10;
    LVar6 = local_c;
    (**(code **)(*local_8 + 0x40))(local_8,&local_24);
    pt.y = LVar6;
    pt.x = LVar5;
    BVar2 = PtInRect(&local_24,pt);
    if (BVar2 != 0) {
      uVar3 = local_c / local_8[0x80] + local_8[0x83];
      if (SCARRY4(local_c / local_8[0x80],local_8[0x83])) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      local_14 = uVar3;
      iVar4 = (**(code **)(*(int *)local_8[0x82] + 0x14))();
      if ((iVar4 <= (int)local_14) || ((int)local_14 < 0)) {
        local_14 = 0xffffffff;
      }
    }
  }
  return local_14;
}

