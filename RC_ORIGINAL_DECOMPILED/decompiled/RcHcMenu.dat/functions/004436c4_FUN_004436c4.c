/*
 * FUN_004436c4 at 004436c4
 * undefined4 __register FUN_004436c4(int param_1)
 * Address ranges: 004436c4-004436e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004436c4(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x24))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

