/*
 * FUN_004196dc at 004196dc
 * undefined4 __register FUN_004196dc(void)
 * Address ranges: 004196dc-004196f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004196dc(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x1c) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(**(int **)(in_stack_00000004 + 0x1c) + 4))();
  }
  return uVar1;
}

