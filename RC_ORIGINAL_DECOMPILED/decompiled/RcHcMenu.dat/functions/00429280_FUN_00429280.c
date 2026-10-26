/*
 * FUN_00429280 at 00429280
 * uint __register FUN_00429280(int param_1)
 * Address ranges: 00429280-00429289
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00429280(int param_1)

{
  return CONCAT31((int3)((uint)param_1 >> 8),(*(byte *)(param_1 + 0x40) & 0x40) != 0) ^ 1;
}

