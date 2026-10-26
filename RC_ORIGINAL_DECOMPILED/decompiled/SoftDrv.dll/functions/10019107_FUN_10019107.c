/*
 * FUN_10019107 at 10019107
 * undefined FUN_10019107(void)
 * Address ranges: 10019107-100191df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10019107(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10025d1c = GetVersion();
    iVar1 = FUN_10019425(1);
    if (iVar1 != 0) {
      _DAT_10025d28 = DAT_10025d1c >> 8 & 0xff;
      _DAT_10025d24 = DAT_10025d1c & 0xff;
      DAT_10025d1c = DAT_10025d1c >> 0x10;
      _DAT_10025d20 = _DAT_10025d24 * 0x100 + _DAT_10025d28;
      iVar1 = FUN_1001b6e2();
      if (iVar1 != 0) {
        DAT_1020fd78 = GetCommandLineA();
        DAT_10025c98 = FUN_1001bd84();
        FUN_1001b86e();
        FUN_1001bb37();
        FUN_1001ba7e();
        FUN_1001b5c4();
        DAT_10025c94 = DAT_10025c94 + 1;
        goto LAB_100191da;
      }
      FUN_10019482();
    }
LAB_10019167:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10025c94 < 1) goto LAB_10019167;
      DAT_10025c94 = DAT_10025c94 + -1;
      if (DAT_10025d54 == 0) {
        FUN_1001b602();
      }
      FUN_1001ba2a();
      FUN_1001b736();
      FUN_10019482();
    }
    else if (param_2 == 3) {
      FUN_1001b7ce(0);
    }
LAB_100191da:
    uVar2 = 1;
  }
  return uVar2;
}

