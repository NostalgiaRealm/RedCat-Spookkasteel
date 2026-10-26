/*
 * FUN_00486b98 at 00486b98
 * undefined4 __register FUN_00486b98(int param_1)
 * Address ranges: 00486b98-00486bc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00486b98(int param_1)

{
  if ((*(char *)(param_1 + 0x1b2) != '\0') &&
     (((*(short *)(param_1 + 0x21a) != 0 || (*(short *)(param_1 + 0x222) != 0)) ||
      (*(int *)(param_1 + 0x210) != 0)))) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}

