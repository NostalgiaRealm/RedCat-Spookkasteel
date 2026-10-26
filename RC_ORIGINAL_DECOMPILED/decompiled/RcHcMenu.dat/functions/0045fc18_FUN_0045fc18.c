/*
 * FUN_0045fc18 at 0045fc18
 * bool __register FUN_0045fc18(int param_1)
 * Address ranges: 0045fc18-0045fc34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0045fc18(int param_1)

{
  return (*(byte *)(param_1 + 0x10) & 1) != 0;
}

