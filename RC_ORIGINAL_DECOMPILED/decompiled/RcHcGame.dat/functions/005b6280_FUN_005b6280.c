/*
 * FUN_005b6280 at 005b6280
 * undefined FUN_005b6280(void)
 * Address ranges: 005b6280-005b62a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b6280(undefined4 param_1,int param_2)

{
  int iVar1;
  
  while (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xb4);
    FUN_005b6ee0(param_1,param_2);
    param_2 = iVar1;
  }
  return;
}

