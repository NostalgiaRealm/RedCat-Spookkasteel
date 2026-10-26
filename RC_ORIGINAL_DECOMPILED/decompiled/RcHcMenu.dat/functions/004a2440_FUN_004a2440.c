/*
 * FUN_004a2440 at 004a2440
 * undefined __register FUN_004a2440(int param_1, undefined4 param_2)
 * Address ranges: 004a2440-004a248d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a2440(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 8);
  local_10 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    local_10 = thunk_FUN_00402874(local_10);
  }
  if (-1 < (int)local_10) {
    do {
      uVar2 = 0;
      iVar1 = FUN_00412384(*(undefined4 **)(param_1 + 0x4c),local_10);
      FUN_00433700(iVar1,param_2,0,uVar2);
      local_10 = local_10 - 1;
    } while (local_10 != 0xffffffff);
  }
  return;
}

