/*
 * FUN_00431c08 at 00431c08
 * bool __register FUN_00431c08(int param_1)
 * Address ranges: 00431c08-00431c1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00431c08(int param_1)

{
  return (&DAT_0056f7a0)[*(byte *)(param_1 + 0x4b)] != *(char *)(param_1 + 0x51);
}

