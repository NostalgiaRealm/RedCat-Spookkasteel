/*
 * FUN_004598e0 at 004598e0
 * undefined FUN_004598e0(void)
 * Address ranges: 004598e0-00459cf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004598e0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 unaff_EBP;
  float10 fVar9;
  float10 extraout_ST0;
  int unaff_retaddr;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  undefined8 uStack_20;
  float fStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [4];
  undefined1 local_c [4];
  undefined4 uStack_8;
  float *pfStack_4;
  
  iVar7 = *(int *)(param_1 + 0x360);
  puVar5 = (undefined4 *)(**(code **)(**(int **)(iVar7 + 0x254) + 0x48))(local_c);
  uStack_20._4_4_ = *puVar5;
  fStack_18 = (float)puVar5[1];
  uStack_14 = puVar5[2];
  FUN_005b2ec0(0x3c23d70a);
  _DAT_006b7188 = uStack_20._4_4_;
  _DAT_006b718c = fStack_18;
  _DAT_006b7190 = uStack_14;
  puVar6 = (undefined8 *)(**(code **)(**(int **)(iVar7 + 0xf8) + 0x24))(auStack_10);
  uStack_20 = (double)*puVar6;
  fStack_18 = *(float *)(puVar6 + 1);
  cVar4 = (**(code **)(**(int **)(iVar7 + 0xf8) + 0x34))();
  pfVar1 = (float *)(unaff_retaddr + 4);
  fVar9 = (float10)FUN_004d6960();
  *pfVar1 = (float)fVar9;
  if (cVar4 == '\0') {
    fStack_28 = *(float *)(param_1 + 0x39c);
  }
  else {
    fStack_28 = *(float *)(param_1 + 0x3a0) * *(float *)(param_1 + 0x39c);
  }
  if (*(char *)(param_1 + 0x454) == '\0') {
    FUN_00458900(0,0x3f800000,0,*(undefined4 *)(param_1 + 0x378),pfVar1,fStack_28,pfStack_4);
  }
  pfVar2 = (float *)(param_1 + 0x3b8);
  *pfVar2 = *(float *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x3d8);
  if (*(int *)(param_1 + 0x450) == 6) {
    fStack_24 = *(float *)(param_1 + 0x458);
    fVar3 = *(float *)(param_1 + 0x45c);
    fStack_30 = *(float *)(param_1 + 0x460);
  }
  else if ((((cVar4 == '\0') && ((char)((uint)unaff_EBP >> 0x18) == '\0')) ||
           (iVar7 = *(int *)(param_1 + 0x360), *(char *)(iVar7 + 0x104) == '\0')) ||
          ((*(char *)(iVar7 + 0x371) != '\0' || (*(int *)(iVar7 + 0x340) == 0xf)))) {
    if (*(char *)(param_1 + 0x431) == '\0') {
      *(undefined1 *)(param_1 + 0x520) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x520) = 1;
    }
    *(undefined1 *)(param_1 + 0x431) = 0;
    iVar7 = *(int *)(param_1 + 0x528) * 0x24;
    fStack_24 = *(float *)(&DAT_006b7120 + iVar7);
    fVar3 = *(float *)(&DAT_006b712c + iVar7);
    fStack_30 = *(float *)(&DAT_006b7138 + iVar7);
  }
  else {
    *(undefined1 *)(param_1 + 0x431) = 1;
    *(undefined1 *)(param_1 + 0x520) = 0;
    *(undefined1 *)(param_1 + 0x521) = 0;
    if (fStack_18 == 1.0) {
      iVar7 = *(int *)(param_1 + 0x528) * 0x24;
      fStack_24 = *(float *)(&DAT_006b711c + iVar7);
      fVar3 = *(float *)(&DAT_006b7128 + iVar7);
      fStack_30 = *(float *)(&DAT_006b7134 + iVar7);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x528) * 0x24;
      fStack_24 = *(float *)(&DAT_006b7118 + iVar7);
      fStack_30 = *(float *)(&DAT_006b7130 + iVar7);
      fVar3 = *(float *)(&DAT_006b7124 + iVar7);
    }
  }
  fVar3 = fVar3 * *(float *)(param_1 + 0x3e0);
  fStack_24 = fStack_24 * *(float *)(param_1 + 0x3e0);
  *(float *)(param_1 + 0x438) = fStack_24 + *(float *)(param_1 + 0x438);
  fVar9 = (float10)FUN_004d6960();
  fVar9 = (float10)fcos(fVar9 + (float10)3.1415927);
  *(float *)(param_1 + 0x434) =
       (float)(fVar9 * (float10)fVar3 + (float10)*(float *)(param_1 + 0x434));
  uStack_20 = (double)*(float *)(param_1 + 0x43c);
  fVar9 = (float10)FUN_004d6960();
  fVar9 = (float10)fsin(fVar9 + (float10)3.1415927);
  *(float *)(param_1 + 0x43c) = (float)((float10)uStack_20 - fVar9 * (float10)fVar3);
  *(float *)(param_1 + 0x3bc) = fStack_24 + *(float *)(param_1 + 0x3bc);
  fVar9 = (float10)fcos((float10)*pfVar1 + (float10)3.1415927);
  *pfVar2 = (float)(fVar9 * (float10)fVar3 + (float10)*pfVar2);
  fVar9 = (float10)fsin((float10)*pfVar1 + (float10)3.1415927);
  *(float *)(param_1 + 0x3c0) =
       (float)((float10)*(float *)(param_1 + 0x3c0) - fVar9 * (float10)fVar3);
  FUN_0045aa40();
  if (*(char *)(param_1 + 0x454) == '\0') {
    FUN_0045a470(pfStack_4,0);
  }
  uVar8 = (**(code **)(**(int **)(param_1 + 0x360) + 0x48))(&uStack_14);
  fVar9 = (float10)FUN_005b1600(pfVar2,uVar8);
  fStack_30 = (float)fVar9;
  pfVar2 = (float *)(param_1 + 0x3c4);
  *pfVar2 = fVar3 * 0.017453292;
  if (*(char *)(param_1 + 0x432) == '\0') {
    fVar9 = (float10)FUN_005b1630(*pfVar1 - 1.5707964);
    *(float *)(param_1 + 0x3c8) = (float)fVar9;
  }
  else {
    FUN_00458900(0,0x3f800000,0,*(undefined4 *)(param_1 + 0x378),&fStack_30,0x40800000,uStack_8);
    fVar9 = (float10)FUN_005b1630(fStack_30 - 1.5707964);
    *(float *)(param_1 + 0x3c8) = (float)fVar9;
    *pfVar1 = fStack_30;
  }
  if (*(char *)(param_1 + 0x454) == '\0') {
    FUN_00458900(0x3f800000,0,0,*(undefined4 *)(param_1 + 0x374),pfVar2,uStack_2c,uStack_8);
  }
  else {
    FUN_005b1630(*pfVar2);
    *pfVar2 = (float)extraout_ST0;
  }
  *pfStack_4 = *pfVar2;
  *(undefined1 *)(param_1 + 0x454) = 0;
  return 1;
}

