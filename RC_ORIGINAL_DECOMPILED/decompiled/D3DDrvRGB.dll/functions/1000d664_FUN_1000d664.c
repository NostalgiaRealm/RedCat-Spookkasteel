/*
 * FUN_1000d664 at 1000d664
 * uint __cdecl FUN_1000d664(uint param_1)
 * Address ranges: 1000d664-1000d6d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_1000d664(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100ec35c == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_100ec4bc);
    bVar1 = DAT_100ec4b8 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_100ec4bc);
      this = (void *)0x13;
      FUN_1000b2ca(0x13);
    }
    param_1 = FUN_1000d6d3(this,param_1);
    if (bVar1) {
      FUN_1000b32b(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_100ec4bc);
    }
  }
  return param_1;
}

