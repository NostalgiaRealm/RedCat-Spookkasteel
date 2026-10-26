/*
 * FUN_004437a4 at 004437a4
 * undefined4 __register FUN_004437a4(int param_1)
 * Address ranges: 004437a4-004437c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004437a4(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 8))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

