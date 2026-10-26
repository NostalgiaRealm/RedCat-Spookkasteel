/*
 * FUN_005862c0 at 005862c0
 * undefined FUN_005862c0(void)
 * Address ranges: 005862c0-005865e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005862c0(int param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar2 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642b8a;
  local_c = ExceptionList;
  iVar6 = *(int *)(param_1 + 0xfc);
  ExceptionList = &local_c;
  if (iVar6 != -1) {
    bVar14 = true;
    ExceptionList = &local_c;
    if (iVar6 != -1) {
      iVar1 = *(int *)(param_1 + 0x100);
      if (iVar1 == -1) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
        *(int *)(param_1 + 0x100) = iVar6 + (int)param_2;
      }
      else if (iVar1 < (int)param_2) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x104) = 0;
        bVar14 = false;
      }
      else if (iVar6 < 1) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x104) = 0;
      }
      else {
        param_2 = (void *)(iVar1 - (int)param_2);
        ExceptionList = &local_c;
        *(float *)(param_1 + 0x104) = (float)(int)param_2 / (float)iVar6;
      }
    }
    *(bool *)(param_1 + 0x108) = bVar14;
    if (bVar14) {
      ExceptionList = pvVar2;
      return;
    }
  }
  param_2 = operator_new(0x1ac);
  bVar14 = param_2 == (void *)0x0;
  local_4 = 0;
  if (bVar14) {
    piVar5 = (int *)0x0;
  }
  else {
    uVar4 = FUN_005033f0(local_1c,**(undefined4 **)(param_1 + 0xf8),s_EffectSpark_00696fd4);
    local_4 = CONCAT31(local_4._1_3_,1);
    piVar5 = (int *)FUN_0058ef90(uVar4);
  }
  local_4 = 0xffffffff;
  if (!bVar14) {
    FUN_004040a0(1);
  }
  FUN_00502350(1);
  (**(code **)(*piVar5 + 0x4c))(*(int *)(param_1 + 0xf8) + 8);
  FUN_005914b0(1);
  iVar6 = FUN_0060a4a0();
  param_2 = (void *)(iVar6 % 10000);
  uVar4 = __ftol();
  FUN_00591480(uVar4);
  piVar7 = (int *)FUN_004042e0(&param_2);
  local_4 = 3;
  if (*piVar7 == 0) {
    auStack_2c[0] = param_2._0_1_;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4._0_1_ = 4;
    pcVar8 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_2c);
    (*pcVar8)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  FUN_004f41c0(piVar5);
  local_4 = 0xffffffff;
  if ((param_2 != (void *)0x0) &&
     (iVar6 = *(int *)((int)param_2 + 0x14) + -1, *(int *)((int)param_2 + 0x14) = iVar6, iVar6 == 0)
     ) {
    FUN_005abfc0(0);
  }
  iVar6 = FUN_0060a4a0();
  param_2 = (void *)(iVar6 % 10000);
  iVar6 = __ftol();
  if ((iVar6 != -1) && (iVar6 < 0)) {
    param_2._0_1_ = (undefined1)iVar6;
    auStack_2c[0] = param_2._0_1_;
    param_2 = (void *)iVar6;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar3 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar3 = FUN_00401940(uVar9,1);
    if (cVar3 != '\0') {
      puVar11 = (undefined4 *)&DAT_006b3f70;
      puVar13 = puStack_28;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      *(undefined1 *)(uVar9 + (int)puStack_28) = 0;
      iVar6 = (int)param_2;
      uStack_24 = uVar9;
    }
    local_4 = 5;
    pcVar8 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                  s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,auStack_2c);
    (*pcVar8)();
    if (puStack_28 != (undefined4 *)0x0) {
      cVar3 = *(char *)((int)puStack_28 + -1);
      if ((cVar3 == '\0') || (cVar3 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_28 + -1));
      }
      else {
        *(char *)((int)puStack_28 + -1) = cVar3 + -1;
      }
    }
  }
  *(int *)(param_1 + 0xfc) = iVar6;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x108) = 1;
  ExceptionList = local_c;
  return;
}

