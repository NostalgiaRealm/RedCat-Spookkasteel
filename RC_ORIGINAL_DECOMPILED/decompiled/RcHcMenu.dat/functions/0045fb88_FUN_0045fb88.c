/*
 * FUN_0045fb88 at 0045fb88
 * bool __register FUN_0045fb88(int param_1)
 * Address ranges: 0045fb88-0045fba4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0045fb88(int param_1)

{
  return (*(byte *)(param_1 + 0x10) & 2) != 0;
}

