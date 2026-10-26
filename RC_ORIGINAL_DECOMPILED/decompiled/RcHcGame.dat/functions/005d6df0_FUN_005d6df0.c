/*
 * FUN_005d6df0 at 005d6df0
 * undefined FUN_005d6df0(void)
 * Address ranges: 005d6df0-005d6e47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d6df0(int param_1,int param_2)

{
  int iVar1;
  
  FUN_005c01c0();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  iVar1 = FUN_005d5c10(&param_2);
  if (iVar1 != 0) {
    FUN_005d5c80(iVar1,param_2 + 1);
    return 0;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  FUN_005d5b50(1);
  return 1;
}

