/*
 * FUN_100287a6 at 100287a6
 * undefined FUN_100287a6(void)
 * Address ranges: 100287a6-1002887e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100287a6(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1052a464 = GetVersion();
    iVar1 = FUN_1002d46b(1);
    if (iVar1 != 0) {
      _DAT_1052a470 = DAT_1052a464 >> 8 & 0xff;
      _DAT_1052a46c = DAT_1052a464 & 0xff;
      DAT_1052a464 = DAT_1052a464 >> 0x10;
      _DAT_1052a468 = _DAT_1052a46c * 0x100 + _DAT_1052a470;
      iVar1 = FUN_1002e9ad();
      if (iVar1 != 0) {
        DAT_1052bae4 = GetCommandLineA();
        DAT_1052a3dc = FUN_1002ee3f();
        FUN_1002b4c6();
        FUN_1002ebf2();
        FUN_1002eb39();
        FUN_1002e88f();
        DAT_1052a3d8 = DAT_1052a3d8 + 1;
        goto LAB_10028879;
      }
      FUN_1002d4c8();
    }
LAB_10028806:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1052a3d8 < 1) goto LAB_10028806;
      DAT_1052a3d8 = DAT_1052a3d8 + -1;
      if (DAT_1052a49c == 0) {
        FUN_1002e8cd();
      }
      FUN_1002b682();
      FUN_1002ea01();
      FUN_1002d4c8();
    }
    else if (param_2 == 3) {
      FUN_1002ea99(0);
    }
LAB_10028879:
    uVar2 = 1;
  }
  return uVar2;
}

