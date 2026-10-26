/*
 * FUN_005293c0 at 005293c0
 * undefined FUN_005293c0(void)
 * Address ranges: 005293c0-005293e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005293c0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + param_3 * 4);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  return;
}

