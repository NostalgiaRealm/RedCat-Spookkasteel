/*
 * FUN_004918fc at 004918fc
 * bool __register FUN_004918fc(int param_1)
 * Address ranges: 004918fc-00491918
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004918fc(int param_1)

{
  return (*(byte *)(param_1 + 0x45) & 1) != 0;
}

