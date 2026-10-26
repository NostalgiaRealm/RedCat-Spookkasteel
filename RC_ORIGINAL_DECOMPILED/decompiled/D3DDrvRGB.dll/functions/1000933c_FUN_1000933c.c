/*
 * FUN_1000933c at 1000933c
 * undefined4 __stdcall FUN_1000933c(undefined4 param_1, int param_2)
 * Address ranges: 1000933c-10009414
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000933c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_100ec1cc = GetVersion();
    iVar1 = FUN_1000b184(1);
    if (iVar1 != 0) {
      _DAT_100ec1d8 = DAT_100ec1cc >> 8 & 0xff;
      _DAT_100ec1d4 = DAT_100ec1cc & 0xff;
      DAT_100ec1cc = DAT_100ec1cc >> 0x10;
      _DAT_100ec1d0 = _DAT_100ec1d4 * 0x100 + _DAT_100ec1d8;
      iVar1 = FUN_1000ca6c();
      if (iVar1 != 0) {
        DAT_100ed844 = GetCommandLineA();
        DAT_100ec140 = FUN_1000d1c5();
        FUN_1000ccaf();
        FUN_1000cf78();
        FUN_1000cebf();
        FUN_1000be7f();
        DAT_100ec13c = DAT_100ec13c + 1;
        goto LAB_1000940f;
      }
      FUN_1000b1c0();
    }
LAB_1000939c:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100ec13c < 1) goto LAB_1000939c;
      DAT_100ec13c = DAT_100ec13c + -1;
      if (DAT_100ec204 == 0) {
        FUN_1000bebd();
      }
      FUN_1000ce6b();
      FUN_1000cac0();
      FUN_1000b1c0();
    }
    else if (param_2 == 3) {
      FUN_1000cb58((LPVOID)0x0);
    }
LAB_1000940f:
    uVar2 = 1;
  }
  return uVar2;
}

