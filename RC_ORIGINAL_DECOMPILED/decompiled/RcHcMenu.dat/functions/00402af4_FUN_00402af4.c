/*
 * FUN_00402af4 at 00402af4
 * byte __register FUN_00402af4(byte param_1)
 * Address ranges: 00402af4-00402b01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_00402af4(byte param_1)

{
  if ((0x60 < param_1) && (param_1 < 0x7b)) {
    param_1 = param_1 - 0x20;
  }
  return param_1;
}

