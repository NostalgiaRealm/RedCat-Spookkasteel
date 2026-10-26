/*
 * FUN_10022010 at 10022010
 * undefined FUN_10022010(void)
 * Address ranges: 10022010-1002259a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_10022010(int *param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,int param_6
            ,int param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_24 [9];
  
  DAT_1052a16c = param_2;
  DAT_1052a1b4 = param_5;
  DAT_1052a160 = param_3;
  DAT_1052a170 = param_6;
  DAT_1052a1a4 = param_1;
  DAT_1052a17c = param_4;
  DAT_1052a184 = param_7;
  DAT_1052a188 = param_8;
  if ((((*param_1 < param_7) || (*param_4 < param_7)) || (param_1[1] < param_8)) ||
     (param_4[1] < param_8)) {
    uVar4 = 0x72;
    goto LAB_1002257f;
  }
  DAT_1052a1bc = param_1[3];
  DAT_1052a1b8 = param_4[3];
  DAT_1052a178 = FUN_100203a0();
  DAT_1052a18c = FUN_100203a0();
  if (DAT_1052a178 == 0) {
    return 0;
  }
  if (DAT_1052a18c == 0) {
    return 0;
  }
  DAT_1052a1a8 = *(int *)(DAT_1052a178 + 0x30);
  DAT_1052a168 = *(int *)(DAT_1052a18c + 0x30);
  _DAT_1052a180 = DAT_1052a1a8 * DAT_1052a1a4[2];
  _DAT_1052a174 = DAT_1052a168 * DAT_1052a17c[2];
  DAT_1052a1b0 = DAT_1052a1a4[2] - DAT_1052a184;
  DAT_1052a190 = DAT_1052a17c[2] - DAT_1052a184;
  DAT_1052a1c0 = DAT_1052a1b0 * DAT_1052a1a8;
  DAT_1052a1c4 = DAT_1052a190 * DAT_1052a168;
  DAT_1052a164 = *(undefined4 *)(DAT_1052a18c + 0x3c);
  DAT_1052a1a0 = *(undefined4 *)(DAT_1052a18c + 0x48);
  DAT_1052a194 = *(undefined4 *)(DAT_1052a18c + 0x50);
  DAT_1052a198 = *(undefined4 *)(DAT_1052a178 + 0x40);
  DAT_1052a1ac = *(undefined4 *)(DAT_1052a178 + 0x44);
  DAT_1052a19c = *(undefined4 *)(DAT_1052a178 + 0x4c);
  iVar1 = FUN_100203f0();
  if (iVar1 == 0) {
    if (DAT_1052a1a4[8] != 0) goto LAB_1002219c;
  }
  else {
    if (DAT_1052a1a4[8] == 0) {
      uVar4 = 0x98;
      goto LAB_1002257f;
    }
LAB_1002219c:
    iVar1 = FUN_100203f0();
    if (iVar1 != 0) {
      if (DAT_1052a17c[8] == 0) {
        uVar4 = *(undefined4 *)(DAT_1052a1a4[8] + 8);
        iVar1 = FUN_10020410();
        if (((iVar1 == 0) && (DAT_1052a1a4[6] != 0)) && (DAT_1052a17c[6] == 0)) {
          uVar4 = 0x11;
        }
        FUN_10016350(DAT_1052a170,uVar4,*(undefined4 *)(DAT_1052a170 + 0xa8));
        if (DAT_1052a17c[8] == 0) {
          iVar1 = FUN_100191e0();
          DAT_1052a17c[8] = iVar1;
        }
      }
      iVar1 = FUN_1001a050();
      if (iVar1 == 0) {
        uVar4 = 0xae;
        goto LAB_1002257f;
      }
      if ((DAT_1052a1a4[6] != 0) && (iVar1 = FUN_1001a100(0,0,0,0), iVar1 == 0)) {
        return 0;
      }
    }
  }
  if (DAT_1052a160 == 0) {
LAB_10022301:
    if ((((DAT_1052a170 != 0) && (*(int *)(DAT_1052a170 + 0x68) != 0)) &&
        (*(int *)(*(int *)(DAT_1052a170 + 0x68) + 0x70) != 0)) &&
       (iVar1 = FUN_10020410(), iVar1 != 0)) {
      uVar4 = FUN_10023280();
      return uVar4;
    }
  }
  else {
    iVar1 = *(int *)(DAT_1052a160 + 0x68);
    if ((((iVar1 == 0) || (*(int *)(iVar1 + 0x70) == 0)) || (DAT_1052a170 == 0)) ||
       ((*(int *)(DAT_1052a170 + 0x68) == 0 || (*(int *)(*(int *)(DAT_1052a170 + 0x68) + 0x70) == 0)
        ))) {
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x70) != 0)) &&
         ((iVar1 = FUN_10020410(), iVar1 != 0 || (DAT_1052a17c[6] != 0)))) {
        uVar4 = FUN_100229f0();
        return uVar4;
      }
      goto LAB_10022301;
    }
    iVar1 = FUN_10018db0();
    if (iVar1 == 0) {
      return 0;
    }
  }
  if (DAT_1052a1bc == 0x14) {
    if (DAT_1052a1b8 == 0x14) {
      uVar4 = 0xed;
      goto LAB_1002257f;
    }
  }
  else if (DAT_1052a1b8 != 0x14) {
    if (DAT_1052a1bc == DAT_1052a1b8) {
      uVar4 = FUN_100236b0();
      return uVar4;
    }
    iVar1 = FUN_100203f0();
    if ((iVar1 == 0) && (iVar1 = FUN_100203f0(), iVar1 == 0)) {
      uVar4 = FUN_100225a0();
      return uVar4;
    }
    iVar1 = FUN_100203f0();
    if ((iVar1 != 0) && (iVar1 = FUN_100203f0(), iVar1 != 0)) {
      return 0;
    }
    iVar1 = FUN_100203f0();
    if (iVar1 != 0) {
      uVar4 = FUN_10023af0();
      return uVar4;
    }
    if (DAT_1052a17c[8] != 0) {
LAB_10022509:
      uVar4 = FUN_10023f50();
      return uVar4;
    }
    if ((DAT_1052a170 == 0) || (*(int *)(DAT_1052a170 + 0xa8) == 0)) {
      iVar1 = FUN_10019ae0();
      DAT_1052a17c[8] = iVar1;
    }
    else {
      if (DAT_1052a1a4[8] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(DAT_1052a1a4[8] + 8);
      }
      FUN_10016350(DAT_1052a170,uVar4,*(int *)(DAT_1052a170 + 0xa8));
      if (DAT_1052a17c[8] == 0) {
        iVar1 = FUN_100191e0();
        DAT_1052a17c[8] = iVar1;
      }
    }
    if (DAT_1052a17c[8] == 0) {
      uVar4 = 0x125;
    }
    else {
      if (DAT_1052a1a4[8] != 0) {
        FUN_1001a050();
        uVar4 = FUN_10023f50();
        return uVar4;
      }
      piVar2 = DAT_1052a1a4;
      piVar3 = local_24;
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      local_24[0] = DAT_1052a184;
      local_24[1] = DAT_1052a188;
      iVar1 = FUN_1001e760(local_24,DAT_1052a16c);
      if (iVar1 != 0) {
        FUN_1001a050();
        if ((DAT_1052a160 != 0) &&
           (iVar1 = DAT_1052a1a4[1] * *DAT_1052a1a4 >> 2,
           DAT_1052a188 * DAT_1052a184 - iVar1 != 0 && iVar1 <= DAT_1052a188 * DAT_1052a184)) {
          FUN_10019090();
        }
        FUN_10019d20();
        goto LAB_10022509;
      }
      uVar4 = 0x137;
    }
    goto LAB_1002257f;
  }
  if (((DAT_1052a184 == *DAT_1052a1a4) && (DAT_1052a184 == *DAT_1052a17c)) &&
     ((DAT_1052a188 == DAT_1052a1a4[1] && (DAT_1052a188 == DAT_1052a17c[1])))) {
    if (DAT_1052a1bc == 0x14) {
      uVar4 = FUN_10023fc0();
      return uVar4;
    }
    uVar4 = FUN_10023f90();
    return uVar4;
  }
  uVar4 = 0xf5;
LAB_1002257f:
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_blitdata_c_1003c904,uVar4,&DAT_10265ce0,0)
  ;
  return 0;
}

