/*
 * FUN_0045fc38 at 0045fc38
 * bool __register FUN_0045fc38(int param_1)
 * Address ranges: 0045fc38-0045fc54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0045fc38(int param_1)

{
  return (*(byte *)(param_1 + 0x10) & 4) != 0;
}

