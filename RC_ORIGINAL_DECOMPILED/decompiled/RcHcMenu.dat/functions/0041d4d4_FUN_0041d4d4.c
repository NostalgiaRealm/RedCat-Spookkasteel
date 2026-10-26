/*
 * FUN_0041d4d4 at 0041d4d4
 * int __register FUN_0041d4d4(short param_1)
 * Address ranges: 0041d4d4-0041d4f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0041d4d4(short param_1)

{
  if (((param_1 != 1) && (param_1 != 4)) && (param_1 != 8)) {
    return 0;
  }
  return 1 << ((byte)param_1 & 0x1f);
}

