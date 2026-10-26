/*
 * FUN_004ad80c at 004ad80c
 * undefined __register FUN_004ad80c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 004ad80c-004ad861
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ad80c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 8);
  local_14 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    local_14 = thunk_FUN_00402874(local_14);
  }
  if (-1 < (int)local_14) {
    do {
      uVar2 = param_4;
      iVar1 = FUN_00412384(*(undefined4 **)(param_1 + 0x48),local_14);
      FUN_00433700(iVar1,param_2,param_3,uVar2);
      local_14 = local_14 - 1;
    } while (local_14 != 0xffffffff);
  }
  return;
}

