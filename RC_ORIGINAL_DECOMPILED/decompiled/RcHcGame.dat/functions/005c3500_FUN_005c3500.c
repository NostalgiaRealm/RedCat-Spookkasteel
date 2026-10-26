/*
 * FUN_005c3500 at 005c3500
 * undefined FUN_005c3500(void)
 * Address ranges: 005c3500-005c3780
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_005c3500(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
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
    iVar4 = FUN_005c08d0(param_2,param_2);
    if (iVar4 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0xb99,
                   &DAT_006b3f70,0);
      return 0;
    }
    bVar2 = true;
  }
  else if (param_2 != 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0xb8f,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (*(int *)(param_5 + 0x70) == 0) {
    iVar4 = FUN_005c0530(param_6,param_6);
    if (iVar4 != 0) {
      bVar3 = true;
      goto LAB_005c35dd;
    }
    uVar10 = 0xbac;
  }
  else {
    if (param_6 != 0) goto LAB_005c3755;
    param_2 = param_5;
LAB_005c35dd:
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
    iVar4 = FUN_005c0d90();
    if ((iVar4 == 0) || (iVar5 = FUN_005c0d90(), iVar5 == 0)) {
      uVar10 = 0xbc1;
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
        iVar6 = FUN_005c6a70();
        iVar1 = piVar9[2];
        iVar7 = FUN_005c6a70();
        iVar4 = FUN_005dab60(piVar9,iVar4 + iVar6 * (iVar1 * param_4 + param_3),param_1,piVar8,
                             iVar5 + iVar7 * (piVar8[2] * param_8 + param_7),param_2,param_9,
                             param_10);
        if (iVar4 != 0) {
          if (bVar2) {
            FUN_005c0d70();
          }
          if (bVar3) {
            FUN_005c0d70();
          }
          return 1;
        }
        goto LAB_005c3755;
      }
      uVar10 = 0xbcf;
    }
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,uVar10,
               &DAT_006b3f70,0);
LAB_005c3755:
  if (bVar2) {
    FUN_005c0d70();
  }
  if (bVar3) {
    FUN_005c0d70();
  }
  return 0;
}

