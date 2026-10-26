/*
 * FUN_004c6e04 at 004c6e04
 * int * __register FUN_004c6e04(int param_1, int param_2, int param_3)
 * Address ranges: 004c6e04-004c6e88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004c6e04(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint local_18;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
  local_18 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    local_18 = thunk_FUN_00402874(local_18);
  }
  if (-1 < (int)local_18) {
    do {
      piVar2 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 4),local_18);
      if ((param_2 == piVar2[10]) && (param_3 == piVar2[9])) {
        return piVar2;
      }
      local_18 = local_18 - 1;
    } while (local_18 != 0xffffffff);
  }
  piVar2 = FUN_004c6bf0((int *)&LAB_004c6acc,'\x01',param_2,param_3);
  FUN_004121d8(*(int **)(param_1 + 4),(int)piVar2);
  return piVar2;
}

