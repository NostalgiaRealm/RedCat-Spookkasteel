/*
 * FUN_10019425 at 10019425
 * undefined FUN_10019425(void)
 * Address ranges: 10019425-10019481
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10019425(int param_1)

{
  int iVar1;
  
  DAT_1020fd70 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1020fd70 != (HANDLE)0x0) {
    DAT_1020fd74 = FUN_100192dd();
    if (DAT_1020fd74 == 3) {
      iVar1 = FUN_1001952a(0x3f8);
    }
    else {
      if (DAT_1020fd74 != 2) {
        return 1;
      }
      iVar1 = FUN_10019d7b();
    }
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_1020fd70);
  }
  return 0;
}

