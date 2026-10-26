/*
 * FUN_1001d020 at 1001d020
 * undefined FUN_1001d020(void)
 * Address ranges: 1001d020-1001d08e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001d020(int param_1)

{
  bool bVar1;
  
  if (DAT_10025e90 == 0) {
    if ((0x40 < param_1) && (param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1020e9e4);
    bVar1 = DAT_1020e9e0 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1020e9e4);
      FUN_1001a434(0x13);
    }
    param_1 = FUN_1001d08f(param_1);
    if (bVar1) {
      FUN_1001a495(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1020e9e4);
    }
  }
  return param_1;
}

