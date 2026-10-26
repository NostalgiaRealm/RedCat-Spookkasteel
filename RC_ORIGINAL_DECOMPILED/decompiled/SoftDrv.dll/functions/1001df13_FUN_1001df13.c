/*
 * FUN_1001df13 at 1001df13
 * undefined FUN_1001df13(void)
 * Address ranges: 1001df13-1001df81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001df13(int param_1)

{
  bool bVar1;
  
  if (DAT_10025e90 == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 + -0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1020e9e4);
    bVar1 = DAT_1020e9e0 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1020e9e4);
      FUN_1001a434(0x13);
    }
    param_1 = FUN_1001df82(param_1);
    if (bVar1) {
      FUN_1001a495(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1020e9e4);
    }
  }
  return param_1;
}

