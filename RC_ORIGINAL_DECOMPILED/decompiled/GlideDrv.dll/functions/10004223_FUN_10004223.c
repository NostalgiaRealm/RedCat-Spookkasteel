/*
 * FUN_10004223 at 10004223
 * undefined4 __stdcall FUN_10004223(undefined4 param_1, int param_2)
 * Address ranges: 10004223-100042fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10004223(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_100e3afc = GetVersion();
    iVar1 = FUN_10005162(1);
    if (iVar1 != 0) {
      _DAT_100e3b08 = DAT_100e3afc >> 8 & 0xff;
      _DAT_100e3b04 = DAT_100e3afc & 0xff;
      DAT_100e3afc = DAT_100e3afc >> 0x10;
      _DAT_100e3b00 = _DAT_100e3b04 * 0x100 + _DAT_100e3b08;
      iVar1 = FUN_10007251();
      if (iVar1 != 0) {
        DAT_101f6ac4 = GetCommandLineA();
        DAT_100e3a6c = FUN_100078f3();
        FUN_100073dd();
        FUN_100076a6();
        FUN_100075ed();
        FUN_10007133();
        DAT_100e3a68 = DAT_100e3a68 + 1;
        goto LAB_100042f6;
      }
      FUN_100051bf();
    }
LAB_10004283:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100e3a68 < 1) goto LAB_10004283;
      DAT_100e3a68 = DAT_100e3a68 + -1;
      if (DAT_100e3b34 == 0) {
        FUN_10007171();
      }
      FUN_10007599();
      FUN_100072a5();
      FUN_100051bf();
    }
    else if (param_2 == 3) {
      FUN_1000733d((undefined *)0x0);
    }
LAB_100042f6:
    uVar2 = 1;
  }
  return uVar2;
}

