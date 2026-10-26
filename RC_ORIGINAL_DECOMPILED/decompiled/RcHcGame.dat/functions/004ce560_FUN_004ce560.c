/*
 * FUN_004ce560 at 004ce560
 * undefined FUN_004ce560(void)
 * Address ranges: 004ce560-004ce585
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_004ce560(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
  if (iVar1 == 0) {
    return (uint)(*(int *)(param_1 + 0xc) < 0);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 8) - iVar1;
  return CONCAT31((int3)(iVar1 >> 10),*(int *)(param_1 + 0xc) < iVar1 >> 2);
}

