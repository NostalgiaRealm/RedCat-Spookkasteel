/*
 * FUN_0048dff0 at 0048dff0
 * byte __register FUN_0048dff0(byte * param_1)
 * Address ranges: 0048dff0-0048e02b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_0048dff0(byte *param_1)

{
  if (9 < *param_1) {
    FUN_00403d94("PropRefDepth: depth is invalid");
  }
  return *param_1;
}

