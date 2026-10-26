/*
 * FUN_005b2c70 at 005b2c70
 * undefined FUN_005b2c70(void)
 * Address ranges: 005b2c70-005b2c8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005b2c70(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  return;
}

