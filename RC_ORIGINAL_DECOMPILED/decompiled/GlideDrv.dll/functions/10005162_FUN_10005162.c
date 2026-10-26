/*
 * FUN_10005162 at 10005162
 * undefined4 __cdecl FUN_10005162(int param_1)
 * Address ranges: 10005162-100051be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10005162(int param_1)

{
  undefined **ppuVar1;
  
  DAT_101f5ab0 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_101f5ab0 != (HANDLE)0x0) {
    DAT_101f5ab4 = FUN_1000501a();
    if (DAT_101f5ab4 == 3) {
      ppuVar1 = (undefined **)FUN_10005267(0x3f8);
    }
    else {
      if (DAT_101f5ab4 != 2) {
        return 1;
      }
      ppuVar1 = FUN_10005ab8();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_101f5ab0);
  }
  return 0;
}

