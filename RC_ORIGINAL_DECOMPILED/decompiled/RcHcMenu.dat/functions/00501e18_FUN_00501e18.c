/*
 * FUN_00501e18 at 00501e18
 * undefined __register FUN_00501e18(int param_1, undefined4 param_2, int param_3)
 * Address ranges: 00501e18-00501eb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00501e18(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int extraout_ECX;
  uint extraout_EDX;
  uint uVar2;
  int iVar3;
  int local_18;
  uint local_14;
  
  for (iVar3 = param_3; -1 < iVar3; iVar3 = iVar3 + -1) {
  }
  if (SCARRY4(param_3,1)) {
    thunk_FUN_00402874(param_3 + 1);
  }
  FUN_00406454((int *)(param_1 + 0x240),(int)&DAT_00500d1c,1);
  if (-1 < param_3) {
    local_18 = param_3 + 1;
    local_14 = 0;
    do {
      if (((int)local_14 < 0) || (uVar1 = local_14, param_3 < (int)local_14)) {
        uVar1 = thunk_FUN_00402874(local_14);
      }
      uVar1 = *(uint *)(&stack0xffffffe0 + uVar1 * 4);
      iVar3 = *(int *)(param_1 + 0x240);
      uVar2 = local_14;
      if (*(uint *)(iVar3 + -4) <= local_14) {
        uVar1 = thunk_FUN_00402874(uVar1);
        iVar3 = extraout_ECX;
        uVar2 = extraout_EDX;
      }
      *(uint *)(iVar3 + uVar2 * 4) = uVar1;
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}

