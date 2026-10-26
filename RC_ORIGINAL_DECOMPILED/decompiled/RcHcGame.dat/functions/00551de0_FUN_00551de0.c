/*
 * FUN_00551de0 at 00551de0
 * undefined FUN_00551de0(void)
 * Address ranges: 00551de0-00552309
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_00551de0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_72;
  undefined1 local_71;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  undefined1 local_64 [16];
  undefined1 local_54 [16];
  undefined1 local_44 [56];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e0f2;
  pvStack_c = ExceptionList;
  local_6c = 0;
  local_70 = 0;
  ExceptionList = &pvStack_c;
  FUN_005844b0();
  local_4 = 1;
  FUN_005a3320();
  local_4._0_1_ = 2;
  FUN_00515ff0();
  iVar3 = FUN_004337e0();
  iVar1 = param_3;
  if (iVar3 != 0) {
    puVar4 = *(undefined1 **)(param_3 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_44,s_CAdamSoundDefMgr__CreateSoundDef_006a1d9c,puVar4);
    local_4._0_1_ = 3;
    FUN_005aff00(uVar5);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
  }
  local_68 = operator_new(0x3c);
  local_4._0_1_ = 4;
  if (local_68 == (void *)0x0) {
    param_3 = 0;
  }
  else {
    iVar3 = iVar1;
    uVar5 = FUN_005525c0(iVar1);
    param_3 = FUN_00552b10(uVar5,iVar3);
  }
  if (param_3 != 0) {
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  }
  local_4._0_1_ = 5;
  if (local_70 != param_3) {
    if ((local_70 != 0) &&
       (iVar3 = *(int *)(local_70 + 0x14) + -1, *(int *)(local_70 + 0x14) = iVar3, iVar3 == 0)) {
      FUN_005abfc0(0);
    }
    local_70 = param_3;
    FUN_005844b0();
  }
  local_4._0_1_ = 2;
  FUN_0057d310();
  if (local_70 == 0) goto LAB_005522b5;
  cVar2 = FUN_005536e0();
  pcVar9 = *(char **)(iVar1 + 4);
  if (cVar2 == '\0') {
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "";
    }
    local_64[0] = (undefined1)param_3;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar10 = pcVar9;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(pcVar9,~uVar8 - 1);
    local_4._0_1_ = 0xb;
    uVar5 = FUN_005a3150(local_44,local_64);
    local_4._0_1_ = 0xc;
    cVar2 = FUN_005a3400(uVar5);
    local_4._0_1_ = 0xb;
    FUN_004040a0(1);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    if (cVar2 == '\0') goto joined_r0x005522a8;
    iVar1 = *(int *)(param_1 + 0x38);
    if (*(char *)(iVar1 + 0x8c) == '\0') {
      FUN_00409810(&DAT_006b3f70,&param_3);
      local_4._0_1_ = 0xd;
      pcVar6 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamSound_h_00692cdc,
                                    0x12e,local_44);
      (*pcVar6)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    if (*(int *)(iVar1 + 0x50) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_71);
      local_4._0_1_ = 0xe;
      pcVar6 = (code *)FUN_005a07f0(s_m_System_006a1a80,s___AdamSource_AdamSound_h_00692cdc,0x12f,
                                    local_54);
      (*pcVar6)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    uVar5 = *(undefined4 *)(iVar1 + 0x50);
    if (local_70 == 0) {
      FUN_00409810(&DAT_006b3f70,&local_72);
      local_4._0_1_ = 0xf;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_64);
      (*pcVar6)();
      goto LAB_005520cc;
    }
  }
  else {
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "";
    }
    local_64[0] = (undefined1)param_3;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar10 = pcVar9;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(pcVar9,~uVar8 - 1);
    local_4._0_1_ = 6;
    uVar5 = FUN_005a3150(local_44,local_64);
    local_4._0_1_ = 7;
    cVar2 = FUN_005a3400(uVar5);
    local_4._0_1_ = 6;
    FUN_004040a0(1);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    if (cVar2 == '\0') {
joined_r0x005522a8:
      if (local_70 != 0) {
        FUN_004098d0();
        local_70 = 0;
      }
      goto LAB_005522b5;
    }
    iVar1 = *(int *)(param_1 + 0x38);
    if (*(char *)(iVar1 + 0x8c) == '\0') {
      FUN_00409810(&DAT_006b3f70,&param_3);
      local_4._0_1_ = 8;
      pcVar6 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamSound_h_00692cdc,
                                    0x12e,local_64);
      (*pcVar6)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    if (*(int *)(iVar1 + 0x50) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_72);
      local_4._0_1_ = 9;
      pcVar6 = (code *)FUN_005a07f0(s_m_System_006a1a80,s___AdamSource_AdamSound_h_00692cdc,0x12f,
                                    local_54);
      (*pcVar6)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    uVar5 = *(undefined4 *)(iVar1 + 0x50);
    if (local_70 == 0) {
      FUN_00409810(&DAT_006b3f70,&local_71);
      local_4._0_1_ = 10;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_44);
      (*pcVar6)();
LAB_005520cc:
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
  }
  iVar1 = local_70;
  uVar7 = FUN_005a36c0();
  uVar5 = FUN_005c7f00(uVar5,uVar7);
  *(undefined4 *)(iVar1 + 0x1c) = uVar5;
LAB_005522b5:
  *param_2 = local_70;
  if (local_70 != 0) {
    *(int *)(local_70 + 0x14) = *(int *)(local_70 + 0x14) + 1;
  }
  local_6c = 1;
  local_4._0_1_ = 1;
  FUN_005a3370();
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_70 != 0) {
    FUN_004098d0();
  }
  ExceptionList = pvStack_c;
  return param_2;
}

