/*
 * FUN_10011580 at 10011580
 * undefined FUN_10011580(void)
 * Address ranges: 10011580-100116a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10011580(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  (*DAT_1014e35c)(s_____Save_Receiver_File_____10039b84);
  iVar1 = FUN_1002770a(param_1,&DAT_10036404);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_SaveReceiverFile__Could_not_open_10039b44);
    return 0;
  }
  DAT_10313040 = DAT_1014e268;
  _DAT_10313044 = _DAT_1014e26c;
  _DAT_10313048 = DAT_1014e270;
  _DAT_1031304c = DAT_1014e274;
  _DAT_10313050 = DAT_1014e278;
  DAT_10313054 = DAT_10313034;
  iVar2 = FUN_10027a7a(&DAT_10313040,0x18,1,iVar1);
  if (iVar2 == 1) {
    iVar2 = 0;
    if (DAT_10313034 < 1) {
      return 1;
    }
    while( true ) {
      param_1 = (uint)*(ushort *)(*(int *)(DAT_10313038 + iVar2 * 4) + 0x30);
      iVar3 = FUN_10027a7a(&param_1,4,1,iVar1);
      if (iVar3 != 1) {
        pcVar5 = s__WARNING__SaveReceiverFile__Coul_10039ac8;
        goto LAB_10011691;
      }
      uVar4 = FUN_10027a7a(*(undefined4 *)(*(int *)(DAT_10313038 + iVar2 * 4) + 0x34),4,param_1,
                           iVar1);
      if (uVar4 != param_1) break;
      iVar2 = iVar2 + 1;
      if (DAT_10313034 <= iVar2) {
        return 1;
      }
    }
    pcVar5 = s__WARNING__SaveReceiverFile__Coul_10039a8c;
  }
  else {
    pcVar5 = s__WARNING__SaveReceiverFile__Coul_10039b08;
  }
LAB_10011691:
  (*DAT_1014e35c)(pcVar5);
  FUN_10027620(iVar1);
  return 1;
}

