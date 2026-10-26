/*
 * FUN_1000a12c at 1000a12c
 * uint __cdecl FUN_1000a12c(uint param_1)
 * Address ranges: 1000a12c-1000a19a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_1000a12c(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100e3c74 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_101f572c);
    bVar1 = DAT_101f5728 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_101f572c);
      this = (void *)0x13;
      FUN_10006171(0x13);
    }
    param_1 = FUN_1000a19b(this,param_1);
    if (bVar1) {
      FUN_100061d2(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_101f572c);
    }
  }
  return param_1;
}

