/*
 * FUN_004181d8 at 004181d8
 * bool __register FUN_004181d8(void)
 * Address ranges: 004181d8-00418227
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004181d8(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_stack_00000004;
  
  uVar1 = FUN_00417f94();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_0040f9f8(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x20),
                         *(undefined4 **)(*(int *)(in_stack_00000004 + 8) + -0xc));
    return uVar2 == *(uint *)(in_stack_00000004 + -4);
  }
  return *(int *)(in_stack_00000004 + -4) ==
         *(int *)(*(int *)(*(int *)(in_stack_00000004 + 8) + -0xc) + 0x14);
}

