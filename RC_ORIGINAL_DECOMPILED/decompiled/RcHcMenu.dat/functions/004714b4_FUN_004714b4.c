/*
 * FUN_004714b4 at 004714b4
 * uint __register FUN_004714b4(int param_1)
 * Address ranges: 004714b4-004714cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004714b4(int param_1)

{
  if ((*(char *)(param_1 + 0x8d) != '\0') && (*(char *)(param_1 + 0x8d) != '\f')) {
    return 1;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1) ^ 1;
}

