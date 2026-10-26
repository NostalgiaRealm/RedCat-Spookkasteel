/*
 * FUN_1003070f at 1003070f
 * undefined FUN_1003070f(void)
 * Address ranges: 1003070f-1003077d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1003070f(int param_1)

{
  bool bVar1;
  
  if (DAT_1052a5d8 == 0) {
    if ((0x40 < param_1) && (param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1052a75c);
    bVar1 = DAT_1052a758 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1052a75c);
      FUN_1002e819(0x13);
    }
    param_1 = FUN_1003077e(param_1);
    if (bVar1) {
      FUN_1002e87a(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1052a75c);
    }
  }
  return param_1;
}

