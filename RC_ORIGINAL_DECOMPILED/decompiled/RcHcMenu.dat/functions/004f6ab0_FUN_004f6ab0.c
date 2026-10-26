/*
 * FUN_004f6ab0 at 004f6ab0
 * undefined4 __register FUN_004f6ab0(int param_1)
 * Address ranges: 004f6ab0-004f6ac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f6ab0(int param_1)

{
  if ((PTR_DAT_0057261c[9] != '\0') && (*(char *)(param_1 + 0x24) != '\0')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}

