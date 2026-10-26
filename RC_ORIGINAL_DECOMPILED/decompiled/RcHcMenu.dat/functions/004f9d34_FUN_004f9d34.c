/*
 * FUN_004f9d34 at 004f9d34
 * int __register FUN_004f9d34(int param_1, int param_2)
 * Address ranges: 004f9d34-004f9d97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004f9d34(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_18;
  int local_14;
  
  iVar1 = FUN_0045da14(*(int *)(param_1 + 8));
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_18 = uVar2 + 1;
    local_14 = 0;
    do {
      iVar1 = FUN_0045d430(*(int **)(param_1 + 8),local_14);
      if (*(int *)(iVar1 + 4) == param_2) {
        return local_14;
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return -1;
}

