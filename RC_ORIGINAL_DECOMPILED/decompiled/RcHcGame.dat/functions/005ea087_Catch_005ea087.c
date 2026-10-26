/*
 * Catch@005ea087 at 005ea087
 * undefined Catch@005ea087(void)
 * Address ranges: 005ea087-005ea0ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * Catch_005ea087(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  uVar2 = *(uint *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4);
  uVar3 = uVar2 | 4;
  if (*(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) == 0) {
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(char)uVar3) | 4;
  }
  FUN_005fe7e4(uVar3,1);
  return &DAT_005ea0ad;
}

