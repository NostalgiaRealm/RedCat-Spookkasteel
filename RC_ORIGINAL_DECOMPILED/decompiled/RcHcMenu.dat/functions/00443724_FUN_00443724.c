/*
 * FUN_00443724 at 00443724
 * undefined4 __register FUN_00443724(int param_1)
 * Address ranges: 00443724-00443743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00443724(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x2c))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

