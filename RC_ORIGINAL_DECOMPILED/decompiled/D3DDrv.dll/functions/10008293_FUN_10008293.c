/*
 * FUN_10008293 at 10008293
 * undefined4 __stdcall FUN_10008293(undefined4 param_1, int param_2)
 * Address ranges: 10008293-1000836b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10008293(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_101c378c = GetVersion();
    iVar1 = FUN_1000a014(1);
    if (iVar1 != 0) {
      _DAT_101c3798 = DAT_101c378c >> 8 & 0xff;
      _DAT_101c3794 = DAT_101c378c & 0xff;
      DAT_101c378c = DAT_101c378c >> 0x10;
      _DAT_101c3790 = _DAT_101c3794 * 0x100 + _DAT_101c3798;
      iVar1 = FUN_1000ab37();
      if (iVar1 != 0) {
        DAT_101c4e04 = GetCommandLineA();
        DAT_101c3704 = FUN_1000b1d9();
        FUN_1000acc3();
        FUN_1000af8c();
        FUN_1000aed3();
        FUN_1000aa19();
        DAT_101c3700 = DAT_101c3700 + 1;
        goto LAB_10008366;
      }
      FUN_1000a050();
    }
LAB_100082f3:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_101c3700 < 1) goto LAB_100082f3;
      DAT_101c3700 = DAT_101c3700 + -1;
      if (DAT_101c37c4 == 0) {
        FUN_1000aa57();
      }
      FUN_1000ae7f();
      FUN_1000ab8b();
      FUN_1000a050();
    }
    else if (param_2 == 3) {
      FUN_1000ac23((LPVOID)0x0);
    }
LAB_10008366:
    uVar2 = 1;
  }
  return uVar2;
}

