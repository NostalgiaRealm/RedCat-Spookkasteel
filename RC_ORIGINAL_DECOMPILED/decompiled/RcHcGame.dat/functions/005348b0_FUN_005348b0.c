/*
 * FUN_005348b0 at 005348b0
 * undefined FUN_005348b0(void)
 * Address ranges: 005348b0-00534c3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_005348b0(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined1 local_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 local_60;
  undefined1 local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063b6af;
  pvStack_c = ExceptionList;
  local_60 = 0;
  local_5c = param_1._0_1_;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4 = 1;
  iVar2 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_77);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_3c);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  iVar2 = *(int *)(iVar2 + 0x3a4);
  local_4c[0] = param_1._0_1_;
  local_70 = iVar2;
  FUN_004040a0(0);
  local_4._0_1_ = 3;
  iStack_74 = 0;
  while( true ) {
    if (*(int *)(iVar2 + 0x28) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x2c) - *(int *)(iVar2 + 0x28) >> 2;
    }
    if (iVar2 <= iStack_74) break;
    iVar2 = 0;
    while( true ) {
      piVar4 = (int *)FUN_005293c0(&iStack_6c,iStack_74);
      local_4._0_1_ = 4;
      if (*piVar4 == 0) {
        FUN_00409810(&DAT_006b3f70,&local_77);
        local_4._0_1_ = 5;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_3c);
        (*pcVar3)();
        local_4._0_1_ = 4;
        FUN_004040a0(1);
      }
      iVar5 = FUN_004f21d0();
      local_4._0_1_ = 3;
      if (iStack_6c != 0) {
        FUN_004098d0();
        iStack_6c = 0;
      }
      if (iVar5 <= iVar2) break;
      piVar4 = (int *)FUN_005293c0(&iStack_64,iStack_74);
      local_4._0_1_ = 6;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 6;
      if (*piVar4 == 0) {
        FUN_00409810(&DAT_006b3f70,&uStack_76);
        local_4._0_1_ = 7;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_2c);
        (*pcVar3)();
        local_4._0_1_ = 6;
        FUN_004040a0(1);
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      piVar4 = (int *)FUN_004f1f00(&iStack_68,iVar2);
      local_4._0_1_ = 8;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 8;
      if (*piVar4 == 0) {
        FUN_00409810(&DAT_006b3f70,&uStack_75);
        local_4._0_1_ = 9;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_1c);
        (*pcVar3)();
        local_4._0_1_ = 8;
        FUN_004040a0(1);
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      FUN_0040cc00(*piVar4 + 0x1c,0,0xffffffff);
      local_4._0_1_ = 6;
      if (iStack_68 != 0) {
        FUN_004098d0();
        iStack_68 = 0;
      }
      local_4._0_1_ = 3;
      if (iStack_64 != 0) {
        FUN_004098d0();
        iStack_64 = 0;
      }
      FUN_00444d70(local_54,1,local_4c);
      iVar2 = iVar2 + 1;
    }
    iStack_74 = iStack_74 + 1;
    iVar2 = local_70;
  }
  *param_1 = local_5c;
  if (local_58 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = local_54 - local_58 >> 4;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  pvVar6 = operator_new(iVar2 << 4);
  *(void **)(param_1 + 4) = pvVar6;
  uVar7 = FUN_00442df0(local_58,local_54,pvVar6);
  *(undefined4 *)(param_1 + 8) = uVar7;
  *(undefined4 *)(param_1 + 0xc) = uVar7;
  local_60 = 1;
  local_4._0_1_ = 1;
  FUN_004040a0(1);
  iVar5 = local_54;
  local_4 = (uint)local_4._1_3_ << 8;
  for (iVar2 = local_58; iVar2 != iVar5; iVar2 = iVar2 + 0x10) {
    FUN_004fe5c0(0);
  }
  FUN_005fe5f0(local_58);
  ExceptionList = pvStack_c;
  return param_1;
}

