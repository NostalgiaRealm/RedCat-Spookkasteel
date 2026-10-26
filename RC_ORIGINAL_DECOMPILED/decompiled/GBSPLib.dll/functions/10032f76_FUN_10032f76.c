/*
 * FUN_10032f76 at 10032f76
 * undefined FUN_10032f76(void)
 * Address ranges: 10032f76-10032fe4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10032f76(int param_1)

{
  bool bVar1;
  
  if (DAT_1052a5d8 == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 + -0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1052a75c);
    bVar1 = DAT_1052a758 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1052a75c);
      FUN_1002e819(0x13);
    }
    param_1 = FUN_10032fe5(param_1);
    if (bVar1) {
      FUN_1002e87a(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1052a75c);
    }
  }
  return param_1;
}

