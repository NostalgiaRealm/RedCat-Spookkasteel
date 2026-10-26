/*
 * FUN_004758f4 at 004758f4
 * undefined * __register FUN_004758f4(void)
 * Address ranges: 004758f4-00475920
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * FUN_004758f4(void)

{
  undefined *puVar1;
  int in_stack_00000004;
  
  if (-1 < *(int *)(in_stack_00000004 + -8)) {
    puVar1 = FUN_004757b8(*(undefined **)
                           (in_stack_00000004 + -0x1c + *(int *)(in_stack_00000004 + -8) * 4));
    *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + -1;
    return puVar1;
  }
  return &DAT_00475924;
}

