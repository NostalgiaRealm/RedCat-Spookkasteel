/*
 * FUN_10003130 at 10003130
 * bool __stdcall FUN_10003130(void)
 * Address ranges: 10003130-10003194
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10003130(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_1002a9f0 = 0;
  DAT_10030624 = 0;
  DAT_10038e5c = 0;
  DAT_10038e60 = 0;
  GetDesktopWindow();
  iVar1 = FUN_100037f0();
  if (iVar1 == 0) {
    return false;
  }
  puVar2 = &DAT_1002a9f4;
  for (iVar1 = 0x170c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_10002290();
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_100022e0();
  if (iVar1 == 0) {
    return false;
  }
  return DAT_10038e5c != 0;
}

