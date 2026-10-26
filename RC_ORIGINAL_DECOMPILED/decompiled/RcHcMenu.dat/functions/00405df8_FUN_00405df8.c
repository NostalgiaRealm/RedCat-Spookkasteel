/*
 * FUN_00405df8 at 00405df8
 * bool __register FUN_00405df8(int param_1)
 * Address ranges: 00405df8-00405dff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00405df8(int param_1)

{
  return (*(byte *)(param_1 + 1) & 0x20) != 0;
}

