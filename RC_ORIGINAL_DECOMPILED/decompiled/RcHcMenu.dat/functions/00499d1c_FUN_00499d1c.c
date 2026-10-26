/*
 * FUN_00499d1c at 00499d1c
 * undefined __register FUN_00499d1c(void)
 * Address ranges: 00499d1c-00499dab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00499d1c(void)

{
  uint uVar1;
  int in_stack_00000004;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(in_stack_00000004 + -0x20) < 0) {
    uVar1 = (int)*(uint *)(in_stack_00000004 + -0x20) >> 0x1f;
    local_c = (*(uint *)(in_stack_00000004 + -0x20) ^ uVar1) - uVar1;
    if (-1 < local_c + -1) {
      local_8 = 0;
      do {
        FUN_00414804(*(int **)(in_stack_00000004 + -0x30),
                     *(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0x478) +
                     *(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0x430) * local_8,
                     *(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0x480));
        local_8 = local_8 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  else {
    FUN_00414804(*(int **)(in_stack_00000004 + -0x30),
                 *(undefined4 *)(*(int *)(in_stack_00000004 + -0x2c) + 0x440),
                 *(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0x474));
  }
  return;
}

