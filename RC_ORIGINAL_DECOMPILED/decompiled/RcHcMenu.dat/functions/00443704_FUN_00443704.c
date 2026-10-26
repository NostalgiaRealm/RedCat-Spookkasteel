/*
 * FUN_00443704 at 00443704
 * undefined4 __register FUN_00443704(int param_1)
 * Address ranges: 00443704-00443723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00443704(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x30))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

