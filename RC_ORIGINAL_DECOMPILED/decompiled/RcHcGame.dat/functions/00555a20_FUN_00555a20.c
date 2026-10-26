/*
 * FUN_00555a20 at 00555a20
 * undefined FUN_00555a20(void)
 * Address ranges: 00555a20-00555f5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00555a20(int *param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined1 local_12d;
  float fStack_12c;
  undefined1 local_128 [20];
  undefined4 auStack_114 [61];
  void *pvStack_20;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063e6e2;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a2194,0x33);
  local_c = 0;
  if ((char)param_1[0xb] != '\0') {
    local_128[0] = local_12d;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_c._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s___m_Initialized_00694cac,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a2194,0x36,local_128);
    (*pcVar2)();
    local_c = (uint)local_c._1_3_ << 8;
    FUN_004040a0();
  }
  param_1[0x2b] = param_2;
  param_1[0x2c] = param_3;
  FUN_00556150();
  if ((float)param_1[0x28] == 0.0) {
    fVar8 = (float10)FUN_005ad390(param_1 + 0x15,&local_12d);
    param_1[0x28] = (int)(float)fVar8;
    fStack_12c = (float)fVar8;
  }
  else {
    fStack_12c = (float)param_1[0x28];
  }
  iVar3 = FUN_005c8f10();
  param_1[0xc] = iVar3;
  if (iVar3 == 0) {
    local_128[0] = local_12d;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar6 = s_geCamera_Create___fails_006a22ac;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_geCamera_Create___fails_006a22ac,~uVar5 - 1);
    local_c._0_1_ = 2;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a2194,0x40,local_128);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_004040a0();
    local_c = 0xffffffff;
    FUN_005ae770();
    ExceptionList = pvStack_14;
    return 0;
  }
  if ((float)param_1[0x28] == 0.0) {
    fVar8 = (float10)FUN_005ad390(param_1 + 0x15,&local_12d);
    param_1[0x28] = (int)(float)fVar8;
  }
  else {
    fVar8 = (float10)(float)param_1[0x28];
  }
  if (fVar8 != (float10)1.36) {
    puVar7 = auStack_114;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    FUN_0060af1b(auStack_114,0xff,&DAT_0069081c,0x60000000,0x3ff5c28f);
    FUN_005acdb0();
    if ((float)param_1[0x28] == 0.0) {
      fVar8 = (float10)FUN_005ad390(param_1 + 0x15,&local_12d);
      param_1[0x28] = (int)(float)fVar8;
    }
    else {
      fVar8 = (float10)(float)param_1[0x28];
    }
    uVar4 = FUN_005ae390(local_128,s_NOTE__INI_setting_FieldOfView_is_006a2278,(double)fVar8);
    local_c._0_1_ = 3;
    FUN_005aff00(uVar4);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_004040a0();
  }
  if (param_4 == '\0') {
    if ((float)param_1[0x60] != 0.0) {
      fVar8 = (float10)(float)param_1[0x60];
    }
    else {
      fVar8 = (float10)FUN_005ad390(param_1 + 0x4d,&local_12d);
      param_1[0x60] = (int)(float)fVar8;
    }
    if (fVar8 == (float10)0.092) goto LAB_00555e55;
    puVar7 = auStack_114;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    FUN_0060af1b(auStack_114,0xff,&DAT_0069081c,0xe0000000,0x3fb78d4f);
    FUN_005acdb0();
    if ((float)param_1[0x60] == 0.0) {
      fVar8 = (float10)FUN_005ad390(param_1 + 0x4d,&local_12d);
      param_1[0x60] = (int)(float)fVar8;
    }
    else {
      fVar8 = (float10)(float)param_1[0x60];
    }
    uVar4 = FUN_005ae390(local_128,s_NOTE__INI_setting_ZScale_is_igno_006a21f4,(double)fVar8);
    local_c._0_1_ = 5;
    FUN_005aff00(uVar4);
  }
  else {
    if ((float)param_1[0x60] != 0.0) {
      fVar8 = (float10)(float)param_1[0x60];
    }
    else {
      fVar8 = (float10)FUN_005ad390(param_1 + 0x4d,&local_12d);
      param_1[0x60] = (int)(float)fVar8;
    }
    if (fVar8 == (float10)2.3) goto LAB_00555e55;
    puVar7 = auStack_114;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    FUN_0060af1b(auStack_114,0xff,&DAT_0069081c,0x4002666660000000);
    FUN_005acdb0();
    if ((float)param_1[0x60] == 0.0) {
      fVar8 = (float10)FUN_005ad390(param_1 + 0x4d,&local_12d);
      param_1[0x60] = (int)(float)fVar8;
    }
    else {
      fVar8 = (float10)(float)param_1[0x60];
    }
    uVar4 = FUN_005ae390(local_128,s_NOTE__INI_setting_ZScale_is_igno_006a2238,(double)fVar8);
    local_c._0_1_ = 4;
    FUN_005aff00(uVar4);
  }
  local_c = (uint)local_c._1_3_ << 8;
  FUN_004040a0();
LAB_00555e55:
  if ((char)param_1[0x59] == '\0') {
    fVar8 = (float10)FUN_005c8fb0();
    puVar7 = auStack_114;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    FUN_0060af1b(auStack_114,0xff,&DAT_0069081c,(double)fVar8);
    FUN_005acdb0();
  }
  else if ((float)param_1[0x60] == 0.0) {
    fVar8 = (float10)FUN_005ad390(param_1 + 0x4d,&local_12d);
    param_1[0x60] = (int)(float)fVar8;
    fStack_12c = (float)fVar8;
    FUN_005c8fa0();
  }
  else {
    fStack_12c = (float)param_1[0x60];
    FUN_005c8fa0();
  }
  FUN_005c8fc0();
  FUN_005b30c0();
  (**(code **)(*param_1 + 8))(0xc481a000,0xc39b0000,0x43450000);
  param_1[0xd] = 0;
  param_1[0xe] = 0x40900000;
  param_1[0xf] = 0;
  FUN_005569b0();
  *(undefined1 *)(param_1 + 0xb) = 1;
  uStack_18 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_20;
  return 1;
}

