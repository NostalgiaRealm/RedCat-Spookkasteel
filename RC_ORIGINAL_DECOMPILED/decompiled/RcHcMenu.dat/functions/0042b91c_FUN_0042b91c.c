/*
 * FUN_0042b91c at 0042b91c
 * undefined4 __register FUN_0042b91c(int param_1)
 * Address ranges: 0042b91c-0042b93b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0042b91c(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x24))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

