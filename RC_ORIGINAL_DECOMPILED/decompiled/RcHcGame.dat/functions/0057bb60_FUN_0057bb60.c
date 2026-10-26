/*
 * FUN_0057bb60 at 0057bb60
 * undefined FUN_0057bb60(void)
 * Address ranges: 0057bb60-0057bf84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0057bb60(int *param_1,void *param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  char *pcStack_6c;
  char *pcStack_68;
  uint local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined1 local_2c [16];
  undefined1 uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 *local_4;
  
  pvVar4 = ExceptionList;
  local_4 = (undefined1 *)0xffffffff;
  puStack_8 = &LAB_00641e79;
  local_c = ExceptionList;
  uVar2 = param_1[0x3f];
  uVar10 = 0;
  local_50 = 0;
  ExceptionList = &local_c;
  if (uVar2 != 0xffffffff) {
    bVar3 = true;
    ExceptionList = &local_c;
    if (uVar2 != 0xffffffff) {
      iVar8 = param_1[0x40];
      if (iVar8 == -1) {
        ExceptionList = &local_c;
        param_1[0x41] = 0x3f800000;
        param_1[0x40] = uVar2 + (int)param_2;
      }
      else if (iVar8 < (int)param_2) {
        ExceptionList = &local_c;
        param_1[0x41] = 0;
        bVar3 = false;
      }
      else if ((int)uVar2 < 1) {
        ExceptionList = &local_c;
        param_1[0x41] = 0;
      }
      else {
        param_2 = (void *)(iVar8 - (int)param_2);
        ExceptionList = &local_c;
        param_1[0x41] = (int)((float)(int)param_2 / (float)(int)uVar2);
      }
    }
    *(bool *)(param_1 + 0x42) = bVar3;
    local_50 = uVar2;
    if (bVar3) {
      ExceptionList = pvVar4;
      return;
    }
  }
  pcStack_68 = (char *)0x57bc0b;
  param_2 = operator_new(0x150);
  local_4 = (undefined1 *)0x0;
  if (param_2 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    local_3c = param_2._0_1_;
    pcStack_68 = (char *)0x57bc2e;
    FUN_004040a0();
    iVar8 = -1;
    pcVar11 = s_OozeDrop_006a510c;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    pcStack_68 = s_OozeDrop_006a510c;
    pcStack_6c = (char *)0x57bc4c;
    FUN_004040f0();
    pcStack_68 = local_2c;
    local_4 = (undefined1 *)CONCAT31(local_4._1_3_,1);
    pcStack_6c = (char *)0x57bc68;
    pcStack_68 = (char *)FUN_005033a0();
    uVar10 = 3;
    local_50 = 3;
    local_4 = (undefined1 *)0x2;
    pcStack_6c = (char *)0x57bc86;
    piVar5 = (int *)FUN_0057b390();
  }
  local_4 = (undefined1 *)0x3;
  if ((uVar10 & 2) != 0) {
    uVar10 = uVar10 & 0xfffffffd;
    pcStack_68 = (char *)0x57bcad;
    FUN_004040a0();
    local_50 = uVar10;
  }
  local_4 = (undefined1 *)0xffffffff;
  if ((uVar10 & 1) != 0) {
    pcStack_68 = (char *)0x57bcc5;
    FUN_004040a0();
  }
  iVar8 = *piVar5;
  pcStack_68 = (char *)0x57bcd4;
  pcStack_68 = (char *)(**(code **)(*param_1 + 0x48))();
  pcStack_6c = (char *)0x57bcda;
  (**(code **)(iVar8 + 0x4c))();
  pcStack_6c = (char *)param_1[0x43];
  local_4 = (undefined1 *)&pcStack_6c;
  if (pcStack_6c != (char *)0x0) {
    *(int *)(pcStack_6c + 0x14) = *(int *)(pcStack_6c + 0x14) + 1;
  }
  FUN_00437280();
  pcStack_6c = (char *)0x57bcfc;
  iVar8 = FUN_0060a4a0();
  local_4 = (undefined1 *)(iVar8 % 10000);
  pcStack_6c = (char *)0x57bd1d;
  pcStack_6c = (char *)__ftol();
  FUN_004041b0();
  pcStack_6c = (char *)0x1;
  FUN_00502350();
  pcStack_6c = (char *)&uStack_44;
  piVar5[0x4c] = (int)(*(float *)(param_1[0x3e] + 0x14) * 0.05);
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x48))();
  local_48 = *puVar6;
  uStack_44 = puVar6[1];
  uStack_40 = puVar6[2];
  iVar8 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar8 = FUN_0055b280();
  }
  if (*(int *)(iVar8 + 0xfc) == 0) {
    local_2c[0] = param_2._0_1_;
    pcStack_68 = (char *)0x57bd94;
    FUN_004040a0();
    iVar8 = -1;
    pcVar11 = &DAT_006b3f70;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    pcStack_68 = &DAT_006b3f70;
    pcStack_6c = (char *)0x57bdb2;
    FUN_004040f0();
    local_4 = (undefined1 *)0x5;
    pcStack_68 = (char *)0x18f;
    pcStack_6c = s___AdamSource_AdamEngine_h_0068eb58;
    pcVar7 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec);
    (*pcVar7)();
    local_4 = (undefined1 *)0xffffffff;
    pcStack_68 = (char *)0x57bdeb;
    FUN_004040a0();
  }
  pcStack_68 = (char *)0x0;
  pcStack_6c = (char *)0x3f800000;
  FUN_0054ea00(&param_2,&DAT_006ba150,&local_48,0,1);
  if (param_2 != (void *)0x0) {
    FUN_004098d0();
  }
  pcStack_68 = (char *)0x57be2b;
  piVar5 = (int *)FUN_004042e0();
  local_4 = (undefined1 *)0x6;
  if (*piVar5 == 0) {
    pcStack_68 = &DAT_006b3f70;
    pcStack_6c = (char *)0x57be4f;
    FUN_00409810();
    local_4._0_1_ = 7;
    pcStack_68 = (char *)0xb6;
    pcStack_6c = s___AdamSource_DaviRC_h_0068d638;
    pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c);
    (*pcVar7)();
    local_4 = (undefined1 *)CONCAT31(local_4._1_3_,6);
    pcStack_68 = (char *)0x57be81;
    FUN_004040a0();
  }
  pcStack_68 = (char *)0x57be89;
  FUN_004f41c0();
  local_4 = (undefined1 *)0xffffffff;
  if (local_50 != 0) {
    FUN_004098d0();
  }
  param_2 = *(void **)(param_1[0x3e] + 0x18);
  FUN_0060a4a0();
  iVar8 = __ftol();
  if ((iVar8 != -1) && (iVar8 < 0)) {
    uStack_1c = param_2._0_1_;
    pcStack_68 = (char *)0x57bf04;
    FUN_004040a0();
    iVar9 = -1;
    pcVar11 = &DAT_006b3f70;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    pcStack_68 = &DAT_006b3f70;
    pcStack_6c = (char *)0x57bf21;
    FUN_004040f0();
    local_4 = (undefined1 *)0x8;
    pcStack_68 = (char *)0x56;
    pcStack_6c = s___AdamSource_AdamLifeTime_h_0068d4c8;
    pcVar7 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490);
    (*pcVar7)();
    local_4 = (undefined1 *)0xffffffff;
    pcStack_68 = (char *)0x57bf53;
    FUN_004040a0();
  }
  param_1[0x3f] = iVar8;
  param_1[0x40] = -1;
  param_1[0x41] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x42) = 1;
  ExceptionList = local_c;
  return;
}

