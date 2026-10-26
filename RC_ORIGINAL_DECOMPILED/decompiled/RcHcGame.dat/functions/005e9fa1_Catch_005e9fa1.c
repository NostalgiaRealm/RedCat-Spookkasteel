/*
 * Catch@005e9fa1 at 005e9fa1
 * undefined Catch@005e9fa1(void)
 * Address ranges: 005e9fa1-005e9fc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * Catch_005e9fa1(void)

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
  return &DAT_005e9fc7;
}

