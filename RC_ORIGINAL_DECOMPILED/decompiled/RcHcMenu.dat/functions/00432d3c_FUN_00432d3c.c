/*
 * FUN_00432d3c at 00432d3c
 * undefined4 __register FUN_00432d3c(int param_1)
 * Address ranges: 00432d3c-00432d53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00432d3c(int param_1)

{
  if ((PTR_DAT_0057261c[9] != '\0') && (*(char *)(param_1 + 0x4f) != '\0')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}

