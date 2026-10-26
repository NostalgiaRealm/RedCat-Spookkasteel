/*
 * FUN_004f8464 at 004f8464
 * undefined __register FUN_004f8464(int * param_1, undefined4 param_2, LONG * param_3, undefined2 param_4)
 * Address ranges: 004f8464-004f8549
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f8464(int *param_1,undefined4 param_2,LONG *param_3,undefined2 param_4)

{
  uint uVar1;
  int iVar2;
  RECT *pRVar3;
  LONG *pLVar4;
  byte bVar5;
  bool bVar6;
  LONG local_3c [2];
  uint local_34;
  RECT local_2c;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  int *local_8;
  
  bVar5 = 0;
  pRVar3 = &local_2c;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    pRVar3->left = *param_3;
    param_3 = param_3 + 1;
    pRVar3 = (RECT *)&pRVar3->top;
  }
  local_c = param_2;
  local_8 = param_1;
  FUN_0041c9f8((int *)param_1[0x7e],&local_2c);
  uVar1 = local_8[0x8e] - 1;
  if (SBORROW4(local_8[0x8e],1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  if (-1 < (int)uVar1) {
    local_18 = uVar1 + 1;
    local_10 = 0;
    do {
      pRVar3 = &local_2c;
      pLVar4 = local_3c;
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pLVar4 = pRVar3->left;
        pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar5 * -2 + 1) * 4);
        pLVar4 = pLVar4 + (uint)bVar5 * -2 + 1;
      }
      local_3c[0] = -1;
      uVar1 = local_10 - 1;
      if (SBORROW4(local_10,1)) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      if (-1 < (int)uVar1) {
        local_1c = uVar1 + 1;
        local_14 = 0;
        do {
          uVar1 = FUN_004f82c8((int)local_8,local_14);
          bVar6 = SCARRY4(local_3c[0],uVar1);
          local_3c[0] = local_3c[0] + uVar1;
          if (bVar6) {
            thunk_FUN_00402874(uVar1);
          }
          local_14 = local_14 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
      iVar2 = FUN_004f82c8((int)local_8,local_10);
      uVar1 = iVar2 + local_3c[0];
      if (SCARRY4(iVar2,local_3c[0])) {
        uVar1 = thunk_FUN_00402874(uVar1);
      }
      local_34 = uVar1;
      (**(code **)(*local_8 + 0xbc))
                (local_8,local_10,local_c,CONCAT22((short)((uint)local_3c >> 0x10),param_4),local_3c
                );
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}

