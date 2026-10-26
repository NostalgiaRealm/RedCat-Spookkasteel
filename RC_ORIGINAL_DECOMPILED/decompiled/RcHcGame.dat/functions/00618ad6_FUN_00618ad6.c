/*
 * FUN_00618ad6 at 00618ad6
 * undefined FUN_00618ad6(void)
 * Address ranges: 00618ad6-00618b02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00618ad6(byte param_1)

{
  undefined4 uStack_4;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) == 0) {
      if ((param_1 & 4) == 0) {
        if ((param_1 & 1) == 0) {
          return (param_1 & 2) << 1;
        }
        uStack_4 = 3;
      }
      else {
        uStack_4 = 2;
      }
    }
    else {
      uStack_4 = 1;
    }
  }
  else {
    uStack_4 = 5;
  }
  return uStack_4;
}

