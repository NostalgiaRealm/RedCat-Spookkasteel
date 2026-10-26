/*
 * FUN_00466a90 at 00466a90
 * undefined FUN_00466a90(void)
 * Address ranges: 00466a90-00467157
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00466a90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  int iVar20;
  float fVar21;
  int iVar22;
  float *pfVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  int local_5c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627846;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00501cb0(param_2);
  param_1[0x3e] = param_3;
  param_1[0x3f] = 0;
  local_4 = 1;
  iVar22 = 0xf;
  do {
    FUN_0047d9b0();
    iVar22 = iVar22 + -1;
  } while (iVar22 != 0);
  param_1[0x58f] = 0xffffffff;
  param_1[0x590] = 0xffffffff;
  param_1[0x591] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x592) = 1;
  param_1[0x5a0] = 0xffffffff;
  param_1[0x5a1] = 0xffffffff;
  param_1[0x5a2] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5a3) = 1;
  param_1[0x5a4] = 0xffffffff;
  param_1[0x5a5] = 0xffffffff;
  param_1[0x5a6] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5a7) = 1;
  *(undefined1 *)(param_1 + 0x5a8) = 1;
  param_1[0x5a9] = 0;
  param_1[0x5aa] = 0;
  param_1[0x5ab] = 0;
  param_1[0x5ac] = 0;
  param_1[0x5ad] = 0;
  iVar22 = param_1[0x3e];
  param_1[0x5ae] = 0;
  *param_1 = &PTR_FUN_0064d9e4;
  param_1[0x40] = *(undefined4 *)(iVar22 + 0x18);
  param_1[0x41] = *(undefined4 *)(iVar22 + 0x1c);
  param_1[0x42] = *(undefined4 *)(iVar22 + 0x20);
  puVar18 = param_1 + 0x5b2;
  iVar22 = 3;
  do {
    puVar18[-3] = 0;
    *puVar18 = 0;
    puVar18 = puVar18 + 1;
    iVar22 = iVar22 + -1;
  } while (iVar22 != 0);
  iVar22 = 0xf;
  do {
    FUN_0047db50(param_2,param_1);
    iVar22 = iVar22 + -1;
  } while (iVar22 != 0);
  FUN_00468730();
  param_1[0x46] = 0x3f800000;
  param_1[0x47] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0x3f800000;
  param_1[0x61] = 0x3f800000;
  iVar22 = param_1[0x3e];
  param_1[0x62] = 0x3f800000;
  if (*(int *)(iVar22 + 0x30) == 0) {
    iVar22 = 4;
    puVar18 = param_1 + 0x49;
    do {
      iVar22 = iVar22 + -1;
      puVar18[-1] = *(undefined4 *)(param_1[0x3e] + 0x18);
      *puVar18 = *(undefined4 *)(param_1[0x3e] + 0x1c);
      puVar18[1] = *(undefined4 *)(param_1[0x3e] + 0x20);
      puVar18[2] = 0x437f0000;
      puVar18 = puVar18 + 9;
    } while (iVar22 != 0);
  }
  else {
    fVar5 = *(float *)(iVar22 + 0x24) - *(float *)(iVar22 + 0x18);
    fVar21 = *(float *)(iVar22 + 0x28);
    fVar2 = *(float *)(iVar22 + 0x1c);
    fVar3 = *(float *)(iVar22 + 0x2c);
    fVar4 = *(float *)(iVar22 + 0x20);
    if (1.0 <= fVar5) {
      param_1[0x5b2] = *(undefined4 *)(iVar22 + 0x24);
      param_1[0x5af] = *(undefined4 *)(iVar22 + 0x18);
      param_1[0x5b3] = *(undefined4 *)(iVar22 + 0x28);
      param_1[0x5b0] = *(undefined4 *)(iVar22 + 0x1c);
      param_1[0x5b4] = *(undefined4 *)(iVar22 + 0x2c);
      param_1[0x5b1] = *(undefined4 *)(iVar22 + 0x20);
    }
    else {
      param_1[0x5af] = *(undefined4 *)(iVar22 + 0x24);
      param_1[0x5b2] = *(undefined4 *)(iVar22 + 0x18);
      param_1[0x5b0] = *(undefined4 *)(iVar22 + 0x28);
      param_1[0x5b3] = *(undefined4 *)(iVar22 + 0x1c);
      param_1[0x5b1] = *(undefined4 *)(iVar22 + 0x2c);
      param_1[0x5b4] = *(undefined4 *)(iVar22 + 0x20);
    }
    param_1[0x5ac] = fVar5 / 0.5;
    param_1[0x5ae] = (fVar21 - fVar2) / 0.5;
    param_1[0x5ad] = (fVar3 - fVar4) / 0.5;
  }
  iVar22 = param_1[0x3e];
  param_1[0x59d] = *(float *)(iVar22 + 0x4c) * 0.01;
  fVar21 = *(float *)(iVar22 + 0x50) * 0.01;
  param_1[0x59e] = fVar21;
  if (fVar21 == (float)param_1[0x59d]) {
    *(undefined1 *)(param_1 + 0x59f) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x59f) = 1;
  }
  param_1[0x5aa] = *(float *)(iVar22 + 0x48) * 10.0;
  if (*(float *)(param_1[0x3e] + 0x14) <= 0.0) {
    param_1[0x5ab] = 0xffffffff;
  }
  else {
    uVar19 = __ftol();
    param_1[0x5ab] = uVar19;
  }
  iVar22 = param_1[0x3e];
  pfVar1 = (float *)(param_1 + 0x593);
  if (*(float **)(iVar22 + 0x7c) == (float *)0x0) {
    *pfVar1 = 0.0;
    param_1[0x594] = 0x3f800000;
    param_1[0x595] = 0;
  }
  else {
    *pfVar1 = **(float **)(iVar22 + 0x7c) - *(float *)(iVar22 + 8);
    param_1[0x594] = *(float *)(*(int *)(iVar22 + 0x7c) + 4) - *(float *)(iVar22 + 0xc);
    param_1[0x595] = *(float *)(*(int *)(iVar22 + 0x7c) + 8) - *(float *)(iVar22 + 0x10);
  }
  FUN_005b2f20();
  FUN_005b2ec0(0x3dcccccd);
  FUN_005b2e60(param_1 + 0x596);
  FUN_005b2e60(param_1 + 0x599);
  pfVar23 = (float *)(param_1 + 0x529);
  local_5c = 0xf;
  do {
    fVar2 = *(float *)(param_1[0x3e] + 0x74);
    fVar3 = *(float *)(param_1[0x3e] + 0x70);
    iVar22 = FUN_0060a4a0();
    fVar21 = *(float *)(param_1[0x3e] + 100);
    fVar4 = *(float *)(param_1[0x3e] + 0x60) * 3.0;
    fVar2 = ((fVar2 - fVar3) * (float)(iVar22 % 10000) * 0.0001 + fVar3) * 0.017453292;
    iVar22 = FUN_0060a4a0();
    fVar24 = (float10)fcos((float10)fVar2);
    fVar21 = (float)(fVar24 * (((float10)(fVar21 * 3.0) - (float10)fVar4) *
                               (float10)(iVar22 % 10000) * (float10)0.0001 + (float10)fVar4));
    fVar24 = (float10)fptan((float10)fVar2);
    iVar22 = FUN_0060a4a0();
    fVar25 = (float10)(iVar22 % 10000) * (float10)0.036 * (float10)0.017453292;
    fVar26 = (float10)fcos(fVar25);
    fVar25 = (float10)fsin(fVar25);
    fVar26 = (float10)(float)(fVar24 * (float10)fVar21) * fVar26;
    fVar24 = (float10)(float)(fVar24 * (float10)fVar21) * (float10)(double)fVar25;
    fVar2 = (float)param_1[0x596];
    fVar3 = (float)param_1[0x599];
    fVar4 = *pfVar1;
    fVar5 = (float)param_1[0x597];
    fVar6 = (float)param_1[0x59a];
    fVar7 = (float)param_1[0x594];
    iVar22 = param_1[0x3e];
    fVar12 = *(float *)(iVar22 + 8);
    fVar8 = (float)param_1[0x598];
    fVar9 = (float)param_1[0x59b];
    fVar13 = *(float *)(iVar22 + 0xc);
    fVar14 = *(float *)(iVar22 + 0x5c);
    fVar10 = (float)param_1[0x595];
    fVar15 = *(float *)(iVar22 + 0x10);
    fVar11 = *(float *)(iVar22 + 0x5c);
    iVar22 = FUN_0060a4a0();
    fVar16 = *(float *)(param_1[0x3e] + 0x5c);
    fVar17 = -*(float *)(param_1[0x3e] + 0x5c);
    iVar20 = FUN_0060a4a0();
    pfVar23[-3] = (fVar14 - -fVar11) * (float)(iVar22 % 10000) * 0.0001 + -fVar11 + fVar12;
    pfVar23[-2] = fVar13;
    pfVar23[-1] = (fVar16 - fVar17) * (float)(iVar20 % 10000) * 0.0001 + fVar17 + fVar15;
    *pfVar23 = (float)((float10)fVar21 * (float10)fVar4 +
                      fVar26 * (float10)fVar3 + fVar24 * (float10)fVar2);
    pfVar23[1] = (float)((float10)fVar21 * (float10)fVar7 +
                        fVar26 * (float10)fVar6 + fVar24 * (float10)fVar5);
    pfVar23[2] = (float)((float10)fVar21 * (float10)fVar10 +
                        fVar26 * (float10)fVar9 + fVar24 * (float10)fVar8);
    FUN_0060a4a0();
    fVar21 = (float)__ftol();
    pfVar23[3] = fVar21;
    pfVar23 = pfVar23 + 7;
    local_5c = local_5c + -1;
  } while (local_5c != 0);
  ExceptionList = local_c;
  return param_1;
}

