/*
 * FUN_004436e4 at 004436e4
 * undefined4 __register FUN_004436e4(int param_1)
 * Address ranges: 004436e4-00443703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004436e4(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x28))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

