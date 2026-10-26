/*
 * FUN_00443784 at 00443784
 * undefined4 __register FUN_00443784(int param_1)
 * Address ranges: 00443784-004437a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00443784(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x3c))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

