/*
 * FUN_00431a00 at 00431a00
 * undefined FUN_00431a00(void)
 * Address ranges: 00431a00-00431db4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00431c3c) */
/* WARNING: Removing unreachable block (ram,0x00431c4d) */
/* WARNING: Removing unreachable block (ram,0x00431b3b) */
/* WARNING: Removing unreachable block (ram,0x00431b4c) */
/* WARNING: Removing unreachable block (ram,0x00431d1d) */

void __thiscall FUN_00431a00(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puStack_4c;
  undefined4 *local_38;
  int iStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00623998;
  pvStack_c = ExceptionList;
  local_2c = 0x43740000;
  local_28 = 0x434b0000;
  local_24 = 0x40a00000;
  local_20 = 0x437e0000;
  local_38 = (undefined4 *)0x0;
  local_4 = 0;
  puVar5 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  if (*(char *)(param_1 + 0x394) != '\0') {
    if (param_2 == 8) {
      local_2c = 0x437f0000;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0x437e0000;
      puStack_4c = (undefined4 *)0x431a96;
      ExceptionList = &pvStack_c;
      FUN_00431050();
      iVar2 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        puStack_4c = (undefined4 *)0x431aa5;
        iVar2 = FUN_0055b280();
      }
      if (*(int *)(iVar2 + 0xd8) == 0) {
        puStack_4c = (undefined4 *)0x0;
        auStack_1c[0] = (undefined1)param_2;
        FUN_004040a0();
        uVar6 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        puStack_4c = (undefined4 *)(~uVar6 - 1);
        FUN_004040f0(&DAT_006b3f70);
        puStack_4c = (undefined4 *)auStack_1c;
        local_4._0_1_ = 1;
        pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                      0x188);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        puStack_4c = (undefined4 *)0x1;
        FUN_004040a0();
      }
      puStack_4c = (undefined4 *)&DAT_006b8ca0;
      piVar4 = (int *)FUN_0050d730(&param_2);
      if (*piVar4 != 0) {
        local_4._0_1_ = 2;
        local_38 = (undefined4 *)*piVar4;
        puStack_4c = (undefined4 *)0x431b61;
        FUN_005844b0();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (param_2 != 0) {
        puStack_4c = (undefined4 *)0x431b7a;
        FUN_004098d0();
      }
    }
    else if (param_2 == 0xb) {
      local_2c = 0x42700000;
      local_28 = 0x43710000;
      local_24 = 0x437c0000;
      local_20 = 0x437e0000;
      puStack_4c = (undefined4 *)0x431bb4;
      ExceptionList = &pvStack_c;
      FUN_00431050();
      iVar2 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        puStack_4c = (undefined4 *)0x431bc3;
        iVar2 = FUN_0055b280();
      }
      if (*(int *)(iVar2 + 0xd8) == 0) {
        puStack_4c = &param_2;
        FUN_00409810(&DAT_006b3f70);
        puStack_4c = (undefined4 *)auStack_1c;
        local_4._0_1_ = 3;
        pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                      0x188);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        puStack_4c = (undefined4 *)0x1;
        FUN_004040a0();
      }
      puStack_4c = (undefined4 *)&DAT_006b8c68;
      piVar4 = (int *)FUN_0050d730(&iStack_34);
      if (*piVar4 != 0) {
        local_4._0_1_ = 4;
        local_38 = (undefined4 *)*piVar4;
        puStack_4c = (undefined4 *)0x431c62;
        FUN_005844b0();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (iStack_34 != 0) {
        puStack_4c = (undefined4 *)0x431c7b;
        FUN_004098d0();
      }
    }
    else {
      local_2c = 0x43740000;
      local_28 = 0x434b0000;
      local_24 = 0x40a00000;
      local_20 = 0x437e0000;
      puStack_4c = (undefined4 *)0x431c95;
      ExceptionList = &pvStack_c;
      FUN_00431050();
      iVar2 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        puStack_4c = (undefined4 *)0x431ca4;
        iVar2 = FUN_0055b280();
      }
      if (*(int *)(iVar2 + 0xd8) == 0) {
        puStack_4c = &param_2;
        FUN_00409810(&DAT_006b3f70);
        puStack_4c = (undefined4 *)auStack_1c;
        local_4._0_1_ = 5;
        pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                      0x188);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        puStack_4c = (undefined4 *)0x1;
        FUN_004040a0();
      }
      puStack_4c = (undefined4 *)&DAT_006b8ce0;
      piVar4 = (int *)FUN_0050d730(&iStack_34);
      if (*piVar4 != 0) {
        local_4._0_1_ = 6;
        local_38 = (undefined4 *)*piVar4;
        puStack_4c = (undefined4 *)0x431d33;
        FUN_005844b0();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (iStack_34 != 0) {
        puStack_4c = (undefined4 *)0x431d48;
        FUN_004098d0();
        iStack_34 = 0;
      }
    }
    if (*(int *)(param_1 + 0x390) != 0) {
      puStack_4c = &local_2c;
      FUN_004e3090();
    }
    puVar5 = local_38;
    if (*(int *)(param_1 + 0x330) != 0) {
      puStack_30 = (undefined1 *)&puStack_4c;
      puStack_4c = local_38;
      FUN_005844b0();
      FUN_00437280();
    }
  }
  local_4 = 0xffffffff;
  if (puVar5 != (undefined4 *)0x0) {
    puStack_4c = (undefined4 *)0x431da0;
    FUN_004098d0();
  }
  ExceptionList = pvStack_c;
  return;
}

