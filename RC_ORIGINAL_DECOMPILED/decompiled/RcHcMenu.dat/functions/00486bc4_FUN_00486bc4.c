/*
 * FUN_00486bc4 at 00486bc4
 * undefined4 __register FUN_00486bc4(int param_1)
 * Address ranges: 00486bc4-00486be5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00486bc4(int param_1)

{
  if ((*(char *)(param_1 + 0x1b2) != '\0') &&
     ((*(short *)(param_1 + 0x222) != 0 || (*(int *)(param_1 + 0x210) != 0)))) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}

