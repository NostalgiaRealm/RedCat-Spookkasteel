/*
 * FUN_004b5ce8 at 004b5ce8
 * undefined __register FUN_004b5ce8(int * param_1, undefined4 param_2, int param_3)
 * Address ranges: 004b5ce8-004b5d4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b5ce8(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int local_18;
  uint local_14;
  
  for (iVar2 = param_3 * 2 + 1; -1 < iVar2; iVar2 = iVar2 + -1) {
  }
  if (-1 < param_3) {
    local_18 = param_3 + 1;
    local_14 = 0;
    do {
      if (((int)local_14 < 0) || (uVar1 = local_14, param_3 < (int)local_14)) {
        uVar1 = thunk_FUN_00402874(local_14);
      }
      FUN_004b5d50(param_1,(undefined4 *)(&stack0xffffffe0 + uVar1 * 8));
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}

