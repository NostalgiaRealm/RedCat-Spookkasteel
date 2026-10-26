/*
 * FUN_10018e00 at 10018e00
 * undefined FUN_10018e00(void)
 * Address ranges: 10018e00-10019080
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10018e00(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  
  bVar3 = false;
  bVar2 = false;
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar4 = FUN_100165d0(param_2,param_2);
    if (iVar4 == 0) {
      FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0xac3,&DAT_10265ce0,0);
      return 0;
    }
    bVar2 = true;
  }
  else if (param_2 != 0) {
    FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0xab9,&DAT_10265ce0,0);
    return 0;
  }
  if (*(int *)(param_5 + 0x70) == 0) {
    iVar4 = FUN_10016430(param_6,param_6);
    if (iVar4 != 0) {
      bVar3 = true;
      goto LAB_10018edd;
    }
    uVar10 = 0xad6;
  }
  else {
    if (param_6 != 0) goto LAB_10019055;
    param_2 = param_5;
LAB_10018edd:
    piVar9 = (int *)(param_1 + 0x80);
    if (*(int *)(param_1 + 0xac) == 0) {
      piVar9 = (int *)(param_1 + 4);
    }
    if (*(int *)(param_2 + 0xac) == 0) {
      piVar8 = (int *)(param_2 + 4);
    }
    else {
      piVar8 = (int *)(param_2 + 0x80);
    }
    iVar4 = FUN_10016ac0();
    if ((iVar4 == 0) || (iVar5 = FUN_10016ac0(), iVar5 == 0)) {
      uVar10 = 0xaeb;
    }
    else {
      if (param_9 < 0) {
        param_9 = *piVar8;
        if (*piVar9 < *piVar8) {
          param_9 = *piVar9;
        }
      }
      if (param_10 < 0) {
        param_10 = piVar8[1];
        if (piVar9[1] < piVar8[1]) {
          param_10 = piVar9[1];
        }
      }
      if ((((param_3 + param_9 <= *piVar9) && (param_4 + param_10 <= piVar9[1])) &&
          (param_7 + param_9 <= *piVar8)) && (param_8 + param_10 <= piVar8[1])) {
        iVar6 = FUN_100203d0();
        iVar1 = piVar9[2];
        iVar7 = FUN_100203d0();
        iVar4 = FUN_10022010(piVar9,iVar4 + iVar6 * (iVar1 * param_4 + param_3),param_1,piVar8,
                             iVar5 + iVar7 * (piVar8[2] * param_8 + param_7),param_2,param_9,
                             param_10);
        if (iVar4 != 0) {
          if (bVar2) {
            FUN_10016aa0();
          }
          if (bVar3) {
            FUN_10016aa0();
          }
          return 1;
        }
        goto LAB_10019055;
      }
      uVar10 = 0xaf9;
    }
  }
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,uVar10,&DAT_10265ce0,0);
LAB_10019055:
  if (bVar2) {
    FUN_10016aa0();
  }
  if (bVar3) {
    FUN_10016aa0();
  }
  return 0;
}

