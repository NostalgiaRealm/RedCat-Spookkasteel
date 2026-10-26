/*
 * FUN_100057b0 at 100057b0
 * undefined4 __stdcall FUN_100057b0(void)
 * Address ranges: 100057b0-10005825
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100057b0(void)

{
  int iVar1;
  
  if (DAT_101271c0 == 0) {
    return 1;
  }
  iVar1 = FUN_10007a50();
  if (iVar1 != 0) {
    iVar1 = FUN_100054c0();
    if ((iVar1 == 0) && (iVar1 = FUN_100054d0(), iVar1 != 0)) {
      if (DAT_10038e74 == 0) {
        iVar1 = FUN_10006230(1);
        if (iVar1 != 0) {
          FUN_10006230(2);
          FUN_10006840();
          return 1;
        }
        return 0;
      }
      FUN_10006230(3);
    }
    else {
      iVar1 = FUN_10006230(1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    FUN_10006840();
    return 1;
  }
  return 0;
}

