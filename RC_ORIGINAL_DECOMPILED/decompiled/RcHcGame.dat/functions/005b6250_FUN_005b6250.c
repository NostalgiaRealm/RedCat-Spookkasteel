/*
 * FUN_005b6250 at 005b6250
 * undefined FUN_005b6250(void)
 * Address ranges: 005b6250-005b6276
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b6250(undefined4 param_1,int param_2)

{
  int iVar1;
  
  while (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xb8);
    FUN_005b6ee0(param_1,param_2);
    param_2 = iVar1;
  }
  return;
}

