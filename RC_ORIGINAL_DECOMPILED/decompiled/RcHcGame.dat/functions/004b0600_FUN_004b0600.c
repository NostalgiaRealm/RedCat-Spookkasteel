/*
 * FUN_004b0600 at 004b0600
 * undefined FUN_004b0600(void)
 * Address ranges: 004b0600-004b09ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004b0600(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  undefined1 local_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar9 = param_5;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e6a2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00519ef0();
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s____bool__GET_GLOBAL_SETTING_Debu_0069698c,
                                  s_D__Work_RCHorror_AdamSource_Adam_00696748,0x65,local_2c);
    (*pcVar3)();
    local_4 = local_4 & 0xffffff00;
    FUN_004040a0(1);
  }
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_00696748,0x6a);
  local_4 = 2;
  FUN_005181b0();
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    pcVar8 = s_antialiased_00696980;
    if (param_5 == 0) {
      pcVar8 = s_aliased_00696978;
    }
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(auStack_1c,s_CAdamFont__Create___s___i___i____00696954,puVar4,param_3,
                         param_4,pcVar8);
    local_4._0_1_ = 3;
    FUN_005aff00(uVar5);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  cVar1 = FUN_004b23e0(param_2);
  if (cVar1 == '\0') {
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(auStack_1c,s_Font___s__does_not_exist_00696938,puVar4);
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_CAdamFont__FontExists__a_FontNam_00696914,
                                  s_D__Work_RCHorror_AdamSource_Adam_00696748,0x73,uVar5);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  param_5 = 0;
  local_4._0_1_ = 5;
  if (iVar9 != 0) {
    FUN_00519830();
    iVar2 = FUN_004337e0();
    if (iVar2 != 0) {
      iVar9 = 0;
      FUN_005181b0();
      iVar2 = FUN_004337e0();
      if (iVar2 != 0) {
        uVar5 = FUN_005ae390(auStack_1c,s_Font_not_using_antialiasing_due_t_006968cc);
        local_4._0_1_ = 6;
        FUN_005aff00(uVar5);
        local_4._0_1_ = 5;
        FUN_004040a0(1);
      }
    }
  }
  iVar2 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar2 = FUN_0055b280();
  }
  if (*(int *)(iVar2 + 0x100) == 0) {
    auStack_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 7;
    pcVar3 = (code *)FUN_005a07f0(s_m_Engine_006934e0,s___AdamSource_AdamEngine_h_0068eb58,0x1ad,
                                  auStack_1c);
    (*pcVar3)();
    local_4._0_1_ = 5;
    FUN_004040a0(1);
  }
  iVar9 = FUN_005be960(param_3,param_4,iVar9);
  if (iVar9 == 0) {
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(auStack_1c,s_geFont_Create___fails_for_font___006968a8,puVar4);
    local_4._0_1_ = 8;
    pcVar3 = (code *)FUN_005a07f0(s_font__NULL_0069689c,s_D__Work_RCHorror_AdamSource_Adam_00696748,
                                  0x85,uVar5);
    (*pcVar3)();
    local_4._0_1_ = 5;
    FUN_004040a0(1);
  }
  pvVar6 = operator_new(0x30);
  local_4._0_1_ = 9;
  if (pvVar6 == (void *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_004b0070(param_2,iVar9);
    if (iVar9 != 0) {
      *(int *)(iVar9 + 0x14) = *(int *)(iVar9 + 0x14) + 1;
    }
  }
  if (iVar9 != 0) {
    *(int *)(iVar9 + 0x14) = *(int *)(iVar9 + 0x14) + 1;
    param_5 = iVar9;
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  if ((iVar9 != 0) &&
     (iVar2 = *(int *)(iVar9 + 0x14) + -1, *(int *)(iVar9 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0(0);
  }
  iVar2 = FUN_005181b0();
  iVar9 = *(int *)(iVar2 + 100);
  if (iVar9 == -0x80000000) {
    puVar4 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar9 = FUN_0060af10(puVar4);
    *(int *)(iVar2 + 100) = iVar9;
  }
  if (iVar9 != 0) {
    uVar5 = FUN_005ae390(auStack_1c,s_CAdamFont__Create____leaving____0069687c);
    local_4 = CONCAT31(local_4._1_3_,0xb);
    FUN_005aff00(uVar5);
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  *param_1 = param_5;
  if (param_5 != 0) {
    *(int *)(param_5 + 0x14) = *(int *)(param_5 + 0x14) + 1;
  }
  local_4._0_1_ = 2;
  if ((param_5 != 0) &&
     (iVar9 = *(int *)(param_5 + 0x14) + -1, *(int *)(param_5 + 0x14) = iVar9, iVar9 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return param_1;
}

