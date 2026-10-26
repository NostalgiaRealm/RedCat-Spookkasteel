/*
 * FUN_005af940 at 005af940
 * undefined FUN_005af940(void)
 * Address ranges: 005af940-005af948
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005af940(void)

{
  int iVar1;
  
  iVar1 = FUN_005ae840();
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  return;
}

