/*
 * FUN_00417f94 at 00417f94
 * undefined4 __register FUN_00417f94(void)
 * Address ranges: 00417f94-00417fdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00417f94(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x20) != 0) {
    iVar1 = FUN_00402fdc(*(undefined4 **)(in_stack_00000004 + -8));
    iVar2 = FUN_00402fdc(*(undefined4 **)(*(int *)(in_stack_00000004 + -4) + 0x20));
    if ((iVar1 == iVar2) ||
       (iVar2 = *(int *)(in_stack_00000004 + -8),
       iVar2 == *(int *)(*(int *)(in_stack_00000004 + -4) + 0x18))) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}

