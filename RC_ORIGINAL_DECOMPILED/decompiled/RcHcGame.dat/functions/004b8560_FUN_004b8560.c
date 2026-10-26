/*
 * FUN_004b8560 at 004b8560
 * undefined FUN_004b8560(void)
 * Address ranges: 004b8560-004b857f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004b8560(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x178);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  return;
}

