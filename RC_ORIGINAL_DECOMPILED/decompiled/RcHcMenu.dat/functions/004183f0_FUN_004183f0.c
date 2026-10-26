/*
 * FUN_004183f0 at 004183f0
 * undefined __register FUN_004183f0(void)
 * Address ranges: 004183f0-00418436
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004183f0(void)

{
  bool bVar1;
  uint uVar2;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int in_stack_00000004;
  int iVar3;
  
  uVar2 = FUN_00410010(*(int **)(in_stack_00000004 + -8),*(int *)(in_stack_00000004 + -0xc));
  bVar1 = FUN_004183a0();
  if (!bVar1) {
    iVar3 = in_stack_00000004;
    FUN_00417fe0();
    FUN_00417e20(*(int *)(in_stack_00000004 + -4),extraout_EDX_00,iVar3,uVar2,extraout_EDX);
  }
  return;
}

