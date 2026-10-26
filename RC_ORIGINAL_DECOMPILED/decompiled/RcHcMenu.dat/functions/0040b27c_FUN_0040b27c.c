/*
 * FUN_0040b27c at 0040b27c
 * undefined __register FUN_0040b27c(void)
 * Address ranges: 0040b27c-0040b2ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040b27c(void)

{
  int in_stack_00000004;
  
  if (*(char *)(in_stack_00000004 + -0x1d) == '\0') {
    FUN_0040ad78((undefined2 *)(in_stack_00000004 + -0x16),(undefined2 *)(in_stack_00000004 + -0x18)
                 ,(undefined2 *)(in_stack_00000004 + -0x1a),
                 (undefined2 *)(in_stack_00000004 + -0x1c),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 8),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 0xc));
    *(undefined1 *)(in_stack_00000004 + -0x1d) = 1;
  }
  return;
}

