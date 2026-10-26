/*
 * FUN_00444a50 at 00444a50
 * undefined4 __register FUN_00444a50(int param_1)
 * Address ranges: 00444a50-00444a67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00444a50(int param_1)

{
  if ((PTR_DAT_0057261c[9] != '\0') && (*(char *)(param_1 + 0x24) != '\0')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}

