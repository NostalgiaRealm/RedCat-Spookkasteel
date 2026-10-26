/*
 * FUN_00468d54 at 00468d54
 * bool __register FUN_00468d54(void)
 * Address ranges: 00468d54-00468d90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00468d54(void)

{
  int iVar1;
  int in_stack_00000004;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x20);
  if (iVar1 != 0) {
    iVar1 = FUN_00409758(*(char **)(*(int *)(in_stack_00000004 + -8) + 0x70),
                         *(char **)(iVar1 + 0x70));
    return iVar1 != 0;
  }
  return *(int *)(*(int *)(in_stack_00000004 + -8) + 0x70) != 0;
}

