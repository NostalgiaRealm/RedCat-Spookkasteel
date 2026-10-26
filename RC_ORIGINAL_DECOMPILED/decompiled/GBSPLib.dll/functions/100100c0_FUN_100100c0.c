/*
 * FUN_100100c0 at 100100c0
 * undefined FUN_100100c0(void)
 * Address ranges: 100100c0-1001021a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100100c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  DAT_10313028 = 0;
  iVar1 = FUN_100116b0();
  if (iVar1 == 0) {
    (*DAT_1014e35c)();
    DAT_1031302c = FUN_10014310(DAT_10313034 * 4);
    if (DAT_1031302c == 0) {
      (*DAT_1014e358)();
      return 0;
    }
    iVar1 = DAT_10313034 / 0x14;
    iVar3 = 0;
    if (0 < DAT_10313034) {
      do {
        if (((iVar1 != 0) && (iVar3 % iVar1 == 0)) && (iVar3 / iVar1 < 0x15)) {
          (*DAT_1014e35c)(&DAT_10037ed8,iVar3 / iVar1);
        }
        iVar2 = FUN_1000fe40();
        if (iVar2 == 0) {
          (*DAT_1014e358)();
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_10313034);
    }
    (*DAT_1014e35c)();
    FUN_10014360(DAT_1031302c);
    _DAT_1003fde8 = 0;
    DAT_1031302c = 0;
    (*DAT_1014e35c)(s_Num_Receivers____5i__Megs__2_2f_100396cc,DAT_10313028,
                    (double)((float)DAT_10313028 * 3.8146973e-06));
    iVar1 = FUN_10011580(param_1);
    if (iVar1 == 0) {
      (*DAT_1014e358)();
      return 0;
    }
  }
  else {
    (*DAT_1014e35c)();
  }
  return 1;
}

