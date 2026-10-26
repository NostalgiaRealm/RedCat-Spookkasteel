/*
 * FUN_005e5a60 at 005e5a60
 * undefined FUN_005e5a60(void)
 * Address ranges: 005e5a60-005e5a81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005e5a60(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  *param_2 = iVar1;
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  return;
}

