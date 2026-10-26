/*
 * FUN_100168a0 at 100168a0
 * undefined FUN_100168a0(void)
 * Address ranges: 100168a0-100168cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100168a0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_2 < 1) {
    return 1;
  }
  do {
    iVar1 = FUN_10016aa0();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return uVar2;
}

