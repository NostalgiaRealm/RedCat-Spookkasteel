/*
 * FUN_10002a50 at 10002a50
 * undefined FUN_10002a50(void)
 * Address ranges: 10002a50-10002c06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10002a50(int param_1,int *param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_10025c74 != 0) {
    DAT_10025918 = *(int *)(param_1 + 4);
    _DAT_10025920 = *(undefined4 *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 8);
    DAT_10025928 = *(int *)(param_1 + 0x18);
    if (param_2 != (int *)0x0) {
      DAT_10025928 = DAT_10025928 + (param_2[1] * iVar4 + *param_2) * 2;
      iVar2 = param_2[3] - param_2[1];
      iVar4 = param_2[2] - *param_2;
    }
    DAT_1002592c = iVar4;
    if (param_3 < 0) {
      DAT_1002592c = iVar4 + param_3;
      if (DAT_1002592c < 1) {
        DAT_1002591c = iVar2;
        DAT_1002592c = iVar4;
        return 1;
      }
      DAT_10025928 = DAT_10025928 + param_3 * -2;
      param_3 = 0;
    }
    DAT_1002591c = iVar2;
    if (param_4 < 0) {
      DAT_1002591c = iVar2 + param_4;
      if (DAT_1002591c < 1) {
        DAT_1002591c = iVar2;
        return 1;
      }
      iVar4 = DAT_10025918 * param_4;
      param_4 = 0;
      DAT_10025928 = DAT_10025928 + iVar4 * -2;
    }
    if ((param_3 < DAT_10025c38) && (param_4 < DAT_10025c3c)) {
      if (DAT_10025c38 + -1 <= DAT_1002592c + param_3) {
        DAT_1002592c = (DAT_10025c38 - param_3) + -1;
      }
      if (DAT_10025c3c + -1 <= DAT_1002591c + param_4) {
        DAT_1002591c = (DAT_10025c3c - param_4) + -1;
      }
      if ((0 < DAT_1002592c) && (0 < DAT_1002591c)) {
        iVar4 = DAT_10025c34 + ((DAT_10025c40 >> 1) * param_4 + param_3) * 2;
        _DAT_10025934 = DAT_10025c40 + DAT_1002592c * -2;
        _DAT_10025924 = DAT_10025918 * 2 + DAT_1002592c * -2;
        iVar2 = DAT_1002591c;
        iVar5 = DAT_10025928;
        DAT_10025930 = iVar4;
        do {
          iVar4 = iVar4 + DAT_1002592c * 2;
          iVar5 = iVar5 + DAT_1002592c * 2;
          iVar3 = DAT_1002592c * -2;
          do {
            sVar1 = *(short *)(iVar5 + iVar3);
            if (sVar1 != 1) {
              *(short *)(iVar4 + iVar3) = sVar1;
            }
            iVar3 = iVar3 + 2;
          } while (iVar3 != 0);
          iVar4 = iVar4 + _DAT_10025934;
          iVar5 = iVar5 + _DAT_10025924;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return 1;
}

