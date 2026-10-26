/*
 * FUN_0045053c at 0045053c
 * undefined4 __register FUN_0045053c(int param_1)
 * Address ranges: 0045053c-00450553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0045053c(int param_1)

{
  if ((PTR_DAT_0057261c[9] != '\0') && (*(char *)(param_1 + 0x28) == '\x01')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}

