/*
 * FUN_005e7380 at 005e7380
 * undefined FUN_005e7380(void)
 * Address ranges: 005e7380-005e73a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005e7380(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *param_2 = iVar1;
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  return;
}

