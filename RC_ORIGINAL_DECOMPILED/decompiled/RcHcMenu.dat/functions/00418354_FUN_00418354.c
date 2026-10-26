/*
 * FUN_00418354 at 00418354
 * undefined __register FUN_00418354(void)
 * Address ranges: 00418354-0041839d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418354(void)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  int in_stack_00000004;
  
  FUN_0040fdf4(*(int **)(in_stack_00000004 + -8),*(undefined4 **)(in_stack_00000004 + -0xc));
  uVar1 = FUN_004182fc();
  if ((char)uVar1 == '\0') {
    FUN_00417fe0();
    FUN_00417c58(*(int *)(in_stack_00000004 + -4),extraout_EDX,in_stack_00000004);
  }
  return;
}

