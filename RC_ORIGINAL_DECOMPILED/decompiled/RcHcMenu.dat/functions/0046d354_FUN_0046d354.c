/*
 * FUN_0046d354 at 0046d354
 * undefined4 __register FUN_0046d354(void)
 * Address ranges: 0046d354-0046d38b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0046d354(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    *(char *)(*(int *)(in_stack_00000004 + -8) + 0xe0) != *(char *)(iVar1 + 0xe0));
  }
  return CONCAT31((int3)((uint)*(int *)(in_stack_00000004 + -8) >> 8),
                  *(undefined1 *)(*(int *)(in_stack_00000004 + -8) + 0xe0));
}

