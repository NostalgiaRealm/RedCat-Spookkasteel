/*
 * FUN_004071d0 at 004071d0
 * undefined __register FUN_004071d0(int param_1)
 * Address ranges: 004071d0-00407269
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004071d0(int param_1)

{
  uint uVar1;
  
  if (param_1 < 0) {
    uVar1 = -param_1;
    if (0x13ff < (int)uVar1) {
      return;
    }
    if ((uVar1 >> 5 != 0) && (uVar1 >> 9 != 0)) {
      return;
    }
  }
  else if ((param_1 != 0) && (0x13ff < param_1)) {
    return;
  }
  return;
}

