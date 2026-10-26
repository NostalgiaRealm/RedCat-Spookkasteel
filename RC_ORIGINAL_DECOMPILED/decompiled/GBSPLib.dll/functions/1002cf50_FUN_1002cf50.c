/*
 * FUN_1002cf50 at 1002cf50
 * undefined FUN_1002cf50(void)
 * Address ranges: 1002cf50-1002cf86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1002cf50(uint param_1)

{
  uint uVar1;
  
  if (DAT_1003d32c < 2) {
    uVar1 = (byte)PTR_DAT_1003d120[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_1002c371(param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}

