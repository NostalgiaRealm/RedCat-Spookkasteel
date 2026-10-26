/*
 * FUN_00499cac at 00499cac
 * undefined __register FUN_00499cac(void)
 * Address ranges: 00499cac-00499d1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00499cac(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  *(undefined4 *)(*(int *)(in_stack_00000004 + -0x2c) + 0x474) =
       *(undefined4 *)(in_stack_00000004 + -0x14);
  uVar1 = FUN_004027e8(*(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0x474));
  *(undefined4 *)(*(int *)(in_stack_00000004 + -0x2c) + 0x440) = uVar1;
  *(undefined4 *)(*(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0xc) + 0x14) =
       *(undefined4 *)(*(int *)(in_stack_00000004 + -0x2c) + 0x474);
  FUN_00414804(*(int **)(in_stack_00000004 + -0x30),
               *(undefined4 *)(*(int *)(in_stack_00000004 + -0x2c) + 0x440),
               *(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0x474));
  return;
}

