/*
 * FUN_005da4c0 at 005da4c0
 * undefined FUN_005da4c0(void)
 * Address ranges: 005da4c0-005dab5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005da4c0(int *param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,int param_6
            ,int param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_24 [9];
  
  DAT_0070f840 = param_2;
  DAT_0070f890 = param_5;
  DAT_0070f834 = param_3;
  DAT_0070f844 = param_6;
  DAT_0070f880 = param_1;
  DAT_0070f854 = param_4;
  DAT_0070f860 = param_7;
  DAT_0070f864 = param_8;
  if ((((*param_1 < param_7) || (*param_4 < param_7)) || (param_1[1] < param_8)) ||
     (param_4[1] < param_8)) {
    uVar4 = 0x79;
    goto LAB_005dab40;
  }
  DAT_0070f898 = param_1[3];
  DAT_0070f894 = param_4[3];
  DAT_0070f850 = FUN_005c6a40();
  DAT_0070f868 = FUN_005c6a40();
  if ((DAT_0070f850 == 0) || (DAT_0070f868 == 0)) {
    uVar4 = 0x85;
    goto LAB_005dab40;
  }
  DAT_0070f884 = *(int *)(DAT_0070f850 + 0x30);
  DAT_0070f83c = *(int *)(DAT_0070f868 + 0x30);
  _DAT_0070f85c = DAT_0070f884 * DAT_0070f880[2];
  _DAT_0070f84c = DAT_0070f83c * DAT_0070f854[2];
  DAT_0070f88c = DAT_0070f880[2] - DAT_0070f860;
  DAT_0070f86c = DAT_0070f854[2] - DAT_0070f860;
  DAT_0070f89c = DAT_0070f88c * DAT_0070f884;
  DAT_0070f8a0 = DAT_0070f86c * DAT_0070f83c;
  DAT_0070f838 = *(undefined4 *)(DAT_0070f868 + 0x3c);
  DAT_0070f87c = *(undefined4 *)(DAT_0070f868 + 0x48);
  DAT_0070f870 = *(undefined4 *)(DAT_0070f868 + 0x50);
  DAT_0070f874 = *(undefined4 *)(DAT_0070f850 + 0x40);
  DAT_0070f888 = *(undefined4 *)(DAT_0070f850 + 0x44);
  DAT_0070f878 = *(undefined4 *)(DAT_0070f850 + 0x4c);
  DAT_0070f848 = DAT_0070f880[8];
  if ((DAT_0070f848 == 0) && (DAT_0070f834 != 0)) {
    DAT_0070f848 = FUN_005c40f0();
  }
  DAT_0070f858 = DAT_0070f854[8];
  if ((DAT_0070f858 == 0) && (DAT_0070f844 != 0)) {
    DAT_0070f858 = FUN_005c40f0();
  }
  iVar1 = FUN_005c6a90();
  if (iVar1 == 0) {
    if (DAT_0070f848 != 0) goto LAB_005da691;
  }
  else {
    if (DAT_0070f848 == 0) {
      uVar4 = 0xa9;
      goto LAB_005dab40;
    }
LAB_005da691:
    iVar1 = FUN_005c6a90();
    if (iVar1 != 0) {
      if (DAT_0070f854[8] == 0) {
        uVar4 = *(undefined4 *)(DAT_0070f848 + 8);
        iVar1 = FUN_005c6ab0();
        if (((iVar1 == 0) && (DAT_0070f880[6] != 0)) && (DAT_0070f854[6] == 0)) {
          uVar4 = 0x11;
        }
        FUN_005c0410(DAT_0070f844,uVar4,*(undefined4 *)(DAT_0070f844 + 0xa8));
        if (DAT_0070f854[8] == 0) {
          iVar1 = FUN_005c40f0();
          DAT_0070f854[8] = iVar1;
        }
      }
      DAT_0070f858 = DAT_0070f854[8];
      if (DAT_0070f858 == 0) {
        uVar4 = 0xbf;
        goto LAB_005dab40;
      }
      iVar1 = FUN_005c5040();
      if (iVar1 == 0) {
        uVar4 = 0xc5;
        goto LAB_005dab40;
      }
      if ((DAT_0070f880[6] != 0) && (iVar1 = FUN_005c50f0(0,0,0,0), iVar1 == 0)) {
        uVar4 = 0xcd;
        goto LAB_005dab40;
      }
    }
  }
  if (DAT_0070f834 == 0) {
LAB_005da832:
    if ((((DAT_0070f844 != 0) && (*(int *)(DAT_0070f844 + 0x68) != 0)) &&
        (*(int *)(*(int *)(DAT_0070f844 + 0x68) + 0x70) != 0)) &&
       (iVar1 = FUN_005c6ab0(), iVar1 != 0)) {
      iVar1 = FUN_005db880();
      if (iVar1 != 0) {
        return 1;
      }
      uVar4 = 0x105;
      goto LAB_005dab40;
    }
  }
  else {
    iVar1 = *(int *)(DAT_0070f834 + 0x68);
    if (((iVar1 == 0) || (*(int *)(iVar1 + 0x70) == 0)) ||
       ((DAT_0070f844 == 0 ||
        ((*(int *)(DAT_0070f844 + 0x68) == 0 ||
         (*(int *)(*(int *)(DAT_0070f844 + 0x68) + 0x70) == 0)))))) {
      if ((iVar1 != 0) &&
         ((*(int *)(iVar1 + 0x70) != 0 &&
          ((iVar1 = FUN_005c6ab0(), iVar1 != 0 || (DAT_0070f854[6] != 0)))))) {
        iVar1 = FUN_005daff0();
        if (iVar1 != 0) {
          return 1;
        }
        uVar4 = 0xf6;
        goto LAB_005dab40;
      }
      goto LAB_005da832;
    }
    iVar1 = FUN_005c34b0();
    if (iVar1 == 0) {
      uVar4 = 0xe9;
      goto LAB_005dab40;
    }
  }
  if ((DAT_0070f898 == 0x14) || (DAT_0070f894 == 0x14)) {
    uVar4 = 0x111;
  }
  else if (DAT_0070f898 == DAT_0070f894) {
    iVar1 = FUN_005dbcb0();
    if (iVar1 != 0) {
      return 1;
    }
    uVar4 = 0x118;
  }
  else {
    iVar1 = FUN_005c6a90();
    if ((iVar1 == 0) && (iVar1 = FUN_005c6a90(), iVar1 == 0)) {
      iVar1 = FUN_005daba0();
      if (iVar1 != 0) {
        return 1;
      }
      uVar4 = 0x180;
    }
    else {
      iVar1 = FUN_005c6a90();
      if ((iVar1 == 0) || (iVar1 = FUN_005c6a90(), iVar1 == 0)) {
        iVar1 = FUN_005c6a90();
        if (iVar1 == 0) {
          if (DAT_0070f854[8] == 0) {
            if ((DAT_0070f844 == 0) || (*(int *)(DAT_0070f844 + 0xa8) == 0)) {
              iVar1 = FUN_005c4aa0();
              DAT_0070f854[8] = iVar1;
            }
            else {
              if (DAT_0070f880[8] == 0) {
                uVar4 = 0xd;
              }
              else {
                uVar4 = *(undefined4 *)(DAT_0070f880[8] + 8);
              }
              iVar1 = FUN_005c6ab0();
              if (((iVar1 == 0) && (DAT_0070f880[6] != 0)) && (DAT_0070f854[6] == 0)) {
                uVar4 = 0x11;
              }
              FUN_005c0410(DAT_0070f844,uVar4,*(undefined4 *)(DAT_0070f844 + 0xa8));
              if (DAT_0070f854[8] == 0) {
                iVar1 = FUN_005c40f0();
                DAT_0070f854[8] = iVar1;
              }
            }
            if (DAT_0070f854[8] == 0) {
              uVar4 = 0x14b;
              goto LAB_005dab40;
            }
            if (DAT_0070f848 == 0) {
              if (DAT_0070f858 == 0) {
                piVar2 = DAT_0070f880;
                piVar3 = local_24;
                for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
                  *piVar3 = *piVar2;
                  piVar2 = piVar2 + 1;
                  piVar3 = piVar3 + 1;
                }
                local_24[1] = DAT_0070f864;
                local_24[0] = DAT_0070f860;
                iVar1 = FUN_005d7a20(local_24,DAT_0070f840);
                if (iVar1 == 0) {
                  uVar4 = 0x161;
                  goto LAB_005dab40;
                }
                FUN_005c5040();
                if ((DAT_0070f834 != 0) &&
                   (iVar1 = DAT_0070f880[1] * *DAT_0070f880 >> 2,
                   DAT_0070f864 * DAT_0070f860 - iVar1 != 0 && iVar1 <= DAT_0070f864 * DAT_0070f860)
                   ) {
                  FUN_005c3fa0();
                }
                FUN_005c4d10();
              }
              else {
                FUN_005c5040();
              }
            }
            else {
              FUN_005c5040();
            }
            DAT_0070f858 = DAT_0070f854[8];
            DAT_0070f848 = DAT_0070f880[8];
            if ((DAT_0070f848 == 0) && (DAT_0070f834 != 0)) {
              DAT_0070f848 = FUN_005c40f0();
            }
          }
          iVar1 = FUN_005dc560();
          if (iVar1 != 0) {
            return 1;
          }
          uVar4 = 0x175;
        }
        else {
          iVar1 = FUN_005dc0f0();
          if (iVar1 != 0) {
            return 1;
          }
          uVar4 = 0x12d;
        }
      }
      else {
        uVar4 = 0x125;
      }
    }
  }
LAB_005dab40:
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006b0764,uVar4,
               &DAT_006b3f70,0);
  return 0;
}

