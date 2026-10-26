/*
 * FUN_0047f1ec at 0047f1ec
 * undefined * __register FUN_0047f1ec(void)
 * Address ranges: 0047f1ec-0047f218
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * FUN_0047f1ec(void)

{
  undefined *puVar1;
  int in_stack_00000004;
  
  if (-1 < *(int *)(in_stack_00000004 + -8)) {
    puVar1 = FUN_0047f0b0(*(undefined **)
                           (in_stack_00000004 + -0x1c + *(int *)(in_stack_00000004 + -8) * 4));
    *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + -1;
    return puVar1;
  }
  return &DAT_0047f21c;
}

