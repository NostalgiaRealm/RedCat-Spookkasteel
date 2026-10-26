/*
 * FUN_004c7000 at 004c7000
 * undefined __register FUN_004c7000(int param_1)
 * Address ranges: 004c7000-004c7067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c7000(int param_1)

{
  undefined1 local_9;
  
  local_9 = 0;
  do {
    if (*(int *)(param_1 + 0xc + (uint)local_9 * 4) != -1) {
      FUN_004c6d34(*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc + (uint)local_9 * 4));
    }
    *(undefined4 *)(param_1 + 0xc + (uint)local_9 * 4) = 0xffffffff;
    local_9 = local_9 + 1;
  } while (local_9 != 4);
  FUN_004c6e8c(DAT_00571ccc,*(int **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

