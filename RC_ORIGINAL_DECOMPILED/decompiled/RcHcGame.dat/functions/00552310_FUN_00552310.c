/*
 * FUN_00552310 at 00552310
 * undefined FUN_00552310(void)
 * Address ranges: 00552310-005525bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_00552310(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  code *pcVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 local_54 [16];
  undefined1 local_44 [56];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e15a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005a3320();
  local_4 = 1;
  iVar2 = FUN_00515ff0();
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    iVar4 = FUN_005a3150(local_54,param_4);
    puVar3 = *(undefined1 **)(iVar4 + 4);
    local_4._0_1_ = 2;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_44,s_CAdamSoundDefMgr__CreateSoundDef_006a1d9c,puVar3);
    local_4._0_1_ = 3;
    FUN_005aff00(uVar5);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  pvVar6 = operator_new(0x3c);
  local_4._0_1_ = 4;
  if (pvVar6 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    uVar5 = param_4;
    uVar7 = FUN_005525c0(param_4);
    iVar4 = FUN_00552b10(uVar7,uVar5);
  }
  if (iVar4 != 0) {
    *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
  }
  local_4._0_1_ = 5;
  if (iVar4 != 0) {
    uVar5 = FUN_005a3150(local_44,param_4);
    local_4._0_1_ = 6;
    cVar1 = FUN_005a3400(uVar5);
    local_4._0_1_ = 5;
    FUN_004040a0(1);
    if (cVar1 == '\0') {
      iVar2 = *(int *)(iVar4 + 0x14) + -1;
      *(int *)(iVar4 + 0x14) = iVar2;
      if (iVar2 == 0) {
        FUN_005abfc0(0);
      }
      iVar4 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x38);
      param_4._0_1_ = (undefined1)iVar4;
      if (*(char *)(iVar2 + 0x8c) == '\0') {
        local_54[0] = (undefined1)param_4;
        FUN_004040a0(0);
        uVar9 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4._0_1_ = 7;
        pcVar8 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamSound_h_00692cdc,
                                      0x12e,local_54);
        (*pcVar8)();
        local_4._0_1_ = 5;
        FUN_004040a0(1);
      }
      if (*(int *)(iVar2 + 0x50) == 0) {
        local_44[0] = (undefined1)param_4;
        FUN_004040a0(0);
        uVar9 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4._0_1_ = 8;
        pcVar8 = (code *)FUN_005a07f0(s_m_System_006a1a80,s___AdamSource_AdamSound_h_00692cdc,0x12f,
                                      local_44);
        (*pcVar8)();
        local_4._0_1_ = 5;
        FUN_004040a0(1);
      }
      uVar5 = *(undefined4 *)(iVar2 + 0x50);
      uVar7 = FUN_005a36c0();
      uVar5 = FUN_005c7f00(uVar5,uVar7);
      *(undefined4 *)(iVar4 + 0x1c) = uVar5;
    }
  }
  *param_2 = iVar4;
  if (iVar4 != 0) {
    *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
  }
  local_4._0_1_ = 1;
  if ((iVar4 != 0) &&
     (iVar2 = *(int *)(iVar4 + 0x14) + -1, *(int *)(iVar4 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005a3370();
  ExceptionList = pvStack_c;
  return param_2;
}

