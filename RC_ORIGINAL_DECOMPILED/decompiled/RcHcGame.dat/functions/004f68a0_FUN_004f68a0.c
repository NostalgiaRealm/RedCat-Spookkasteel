/*
 * FUN_004f68a0 at 004f68a0
 * undefined FUN_004f68a0(void)
 * Address ranges: 004f68a0-004f6bd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_004f68a0(uint *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  char *pcVar10;
  uint *local_6c;
  uint local_5c [2];
  uint *local_54 [2];
  uint uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00634c42;
  pvStack_c = ExceptionList;
  local_5c[0] = 0;
  local_54[0] = (uint *)&local_6c;
  local_4 = 0;
  local_6c = param_1;
  ExceptionList = &pvStack_c;
  if (param_1 != (uint *)0x0) {
    ExceptionList = &pvStack_c;
    param_1[5] = param_1[5] + 1;
  }
  cVar2 = FUN_004f6bf0();
  if (cVar2 == '\0') {
    local_6c = (uint *)0x4f68f5;
    iVar3 = FUN_00515ff0();
    iVar4 = *(int *)(iVar3 + 100);
    if (iVar4 == -0x80000000) {
      local_6c = *(uint **)(iVar3 + 0x18);
      if (local_6c == (uint *)0x0) {
        local_6c = (uint *)&DAT_0064a3b4;
      }
      iVar4 = FUN_0060af10();
      *(int *)(iVar3 + 100) = iVar4;
    }
    if (iVar4 != 0) {
      if (param_1 == (uint *)0x0) {
        local_6c = param_1;
        local_3c[0] = param_1._0_1_;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        local_6c = (uint *)(~uVar9 - 1);
        FUN_004040f0(&DAT_006b3f70);
        local_6c = (uint *)local_3c;
        local_4._0_1_ = 1;
        pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar5)();
        local_4 = (uint)local_4._1_3_ << 8;
        local_6c = (uint *)0x1;
        FUN_004040a0();
      }
      local_6c = (uint *)0x4f698f;
      iVar4 = FUN_0059bd20();
      local_6c = *(uint **)(iVar4 + 4);
      if (local_6c == (uint *)0x0) {
        local_6c = (uint *)&DAT_0064a3b4;
      }
      uVar6 = FUN_005ae390(auStack_2c,s_Preload_Actor__s_0069c998);
      local_4._0_1_ = 2;
      FUN_005aff00(uVar6);
      local_4 = (uint)local_4._1_3_ << 8;
      local_6c = (uint *)0x1;
      FUN_004040a0();
    }
    if (param_1 == (uint *)0x0) {
      local_6c = param_1;
      local_3c[0] = param_1._0_1_;
      FUN_004040a0();
      uVar9 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      local_6c = (uint *)(~uVar9 - 1);
      FUN_004040f0(&DAT_006b3f70);
      local_6c = (uint *)local_3c;
      local_4._0_1_ = 3;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      local_6c = (uint *)0x1;
      FUN_004040a0();
    }
    local_6c = (uint *)0x4f6a37;
    iVar4 = FUN_0059bd20();
    local_6c = *(uint **)(iVar4 + 4);
    if (local_6c == (uint *)0x0) {
      local_6c = (uint *)&DAT_0064a3b4;
    }
    FUN_005ae390(&uStack_4c,&DAT_0069c984,s_preloaded__0069c98c);
    local_4._0_1_ = 4;
    puVar7 = operator_new(0x294);
    local_4._0_1_ = 5;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 5;
    local_54[0] = puVar7;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      if (param_1 == (uint *)0x0) {
        local_6c = (uint *)0x0;
        auStack_2c[0] = param_1._0_1_;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        local_6c = (uint *)(~uVar9 - 1);
        FUN_004040f0(&DAT_006b3f70);
        local_6c = (uint *)auStack_2c;
        local_4._0_1_ = 6;
        pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar5)();
        local_4._0_1_ = 5;
        local_6c = (uint *)0x1;
        FUN_004040a0();
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      local_6c = (uint *)0x4f6aed;
      puVar8 = (uint *)FUN_0059bd20();
      local_6c = &uStack_4c;
      uVar6 = FUN_005033a0(auStack_1c);
      local_5c[0] = 1;
      local_4 = CONCAT31(local_4._1_3_,7);
      local_6c = puVar8;
      FUN_0049b240(uVar6);
      *puVar7 = (uint)&PTR_FUN_0064f440;
    }
    local_4 = 4;
    if ((local_5c[0] & 1) != 0) {
      local_6c = (uint *)0x1;
      FUN_004040a0();
    }
    local_6c = local_5c;
    local_5c[0] = 0x461c3c00;
    local_5c[1] = 0x461c3c00;
    local_54[0] = (uint *)0x461c3c00;
    (**(code **)(*puVar7 + 0x74))(local_54,local_5c + 1);
    local_6c = puVar7;
    FUN_004f41c0();
    if (iStack_48 != 0) {
      local_6c = (uint *)(iStack_48 + -1);
      cVar2 = *(char *)(iStack_48 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)local_6c = cVar2 + -1;
      }
    }
    iStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
  }
  local_4 = 0xffffffff;
  if ((param_1 != (uint *)0x0) && (uVar9 = param_1[5], param_1[5] = uVar9 - 1, uVar9 - 1 == 0)) {
    local_6c = (uint *)0x0;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

