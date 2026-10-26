/*
 * FUN_005d9790 at 005d9790
 * undefined FUN_005d9790(void)
 * Address ranges: 005d9790-005d97f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005d9790(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_1[4]) {
    iVar2 = param_1[4] + -1;
    param_1[4] = iVar2;
    iVar2 = *(int *)(param_1[6] + iVar2 * 4);
    param_1[7] = param_1[7] + 1;
    return iVar2;
  }
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 0x10) < *param_1) {
    iVar2 = FUN_005d9850(param_1,param_1[3]);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = param_1[1];
  }
  iVar1 = *(int *)(iVar2 + 8);
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) - *param_1;
  *(int *)(iVar2 + 8) = iVar1 + *param_1;
  param_1[7] = param_1[7] + 1;
  return iVar1;
}

