/*
 * FUN_004f6ac8 at 004f6ac8
 * undefined4 __register FUN_004f6ac8(int param_1)
 * Address ranges: 004f6ac8-004f6adf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f6ac8(int param_1)

{
  if ((PTR_DAT_0057261c[9] != '\0') && (*(char *)(param_1 + 0x24) == '\x01')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}

