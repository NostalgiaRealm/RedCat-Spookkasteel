/*
 * FUN_0040b244 at 0040b244
 * undefined __register FUN_0040b244(void)
 * Address ranges: 0040b244-0040b27b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040b244(void)

{
  int in_stack_00000004;
  
  if (*(char *)(in_stack_00000004 + -0x13) == '\0') {
    FUN_0040b090((short *)(in_stack_00000004 + -0xe),(ushort *)(in_stack_00000004 + -0x10),
                 (short *)(in_stack_00000004 + -0x12),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 8),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + 8) + 0xc));
    *(undefined1 *)(in_stack_00000004 + -0x13) = 1;
  }
  return;
}

