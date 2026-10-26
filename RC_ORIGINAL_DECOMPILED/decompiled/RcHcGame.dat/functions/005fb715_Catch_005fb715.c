/*
 * Catch@005fb715 at 005fb715
 * undefined Catch@005fb715(void)
 * Address ranges: 005fb715-005fb73a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * Catch_005fb715(void)

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
  return &DAT_005fb73b;
}

