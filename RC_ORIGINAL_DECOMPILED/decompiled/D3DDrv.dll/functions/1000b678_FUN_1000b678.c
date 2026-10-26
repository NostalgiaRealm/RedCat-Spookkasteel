/*
 * FUN_1000b678 at 1000b678
 * uint __cdecl FUN_1000b678(uint param_1)
 * Address ranges: 1000b678-1000b6e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_1000b678(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_101c3918 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_101c3a7c);
    bVar1 = DAT_101c3a78 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_101c3a7c);
      this = (void *)0x13;
      FUN_1000a15a(0x13);
    }
    param_1 = FUN_1000b6e7(this,param_1);
    if (bVar1) {
      FUN_1000a1bb(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_101c3a7c);
    }
  }
  return param_1;
}

