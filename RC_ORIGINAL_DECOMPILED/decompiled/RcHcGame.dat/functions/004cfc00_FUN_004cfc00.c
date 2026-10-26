/*
 * FUN_004cfc00 at 004cfc00
 * undefined FUN_004cfc00(void)
 * Address ranges: 004cfc00-004cffcd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004cfc00(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  char *local_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puVar1 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006311f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006991d4,0x46);
  local_4 = 0;
  if (param_3 == (undefined4 *)0x0) {
    local_1c[0] = 0;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = s_can_not_init_a_model_at_NULL_pos_006991ac;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    param_3 = (undefined4 *)(~uVar6 - 1);
    cVar2 = FUN_00401940(param_3,1);
    if (cVar2 != '\0') {
      pcVar8 = s_can_not_init_a_model_at_NULL_pos_006991ac;
      pcVar9 = local_18;
      for (uVar6 = (uint)param_3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = (uint)param_3 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_00404190(param_3);
    }
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_a_Position____NULL_00699198,
                                  s_D__Work_RCHorror_AdamSource_Adam_006991d4,0x48,local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  *(int *)(param_1 + 0x138) = param_2;
  if (param_2 == 0) {
    uVar4 = __ftol();
    uVar4 = __ftol(uVar4);
    uVar4 = __ftol(uVar4);
    uVar4 = FUN_005ae390(local_1c,s_Model_at___i__i__i__has_no_Genes_0069916c,uVar4);
    local_4._0_1_ = 2;
    FUN_005035a0(uVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_005ae770();
    ExceptionList = pvStack_c;
    return 0;
  }
  iVar5 = FUN_005b9940(param_2);
  *(int *)(param_1 + 0xf8) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  }
  else {
    iVar5 = FUN_005bda80();
    *(int *)(param_1 + 0xfc) = iVar5;
    if (iVar5 == 0) {
      auStack_2c[0] = param_3._0_1_;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar8 = s_motion_does_not_have_a_path_00699150;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar2 = FUN_00401940(uVar6,1);
      if (cVar2 != '\0') {
        pcVar8 = s_motion_does_not_have_a_path_00699150;
        pcVar9 = pcStack_28;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        pcStack_28[uVar6] = '\0';
        uStack_24 = uVar6;
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_005035a0(auStack_2c);
      if (pcStack_28 != (char *)0x0) {
        cVar2 = pcStack_28[-1];
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0(pcStack_28 + -1);
        }
        else {
          pcStack_28[-1] = cVar2 + -1;
        }
      }
      local_4 = 0xffffffff;
      FUN_005ae770();
      ExceptionList = pvStack_c;
      return 0;
    }
    iVar5 = FUN_005c58f0((float *)(param_1 + 0x13c));
    if (iVar5 == 0) {
      local_1c[0] = param_3._0_1_;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar8 = s_gePath_GetTimeExtents___fails_00699130;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar2 = FUN_00401940(uVar6,1);
      if (cVar2 != '\0') {
        pcVar8 = s_gePath_GetTimeExtents___fails_00699130;
        pcVar9 = local_18;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        local_18[uVar6] = '\0';
        uStack_14 = uVar6;
      }
      local_4._0_1_ = 4;
      FUN_005035a0(local_1c);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
      local_4 = 0xffffffff;
      FUN_005ae770();
      ExceptionList = pvStack_c;
      return 0;
    }
    if (*(float *)(param_1 + 0x13c) - *(float *)(param_1 + 0x140) <= 0.0) {
      auStack_2c[0] = param_3._0_1_;
      uVar6 = 0xffffffff;
      pcVar8 = s_Model_has_invalid_start___endtim_0069910c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      pcStack_28 = (char *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
      FUN_004040f0(s_Model_has_invalid_start___endtim_0069910c,~uVar6 - 1);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_005035a0(auStack_2c);
      if (pcStack_28 != (char *)0x0) {
        cVar2 = *(char *)((int)pcStack_28 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0((char *)((int)pcStack_28 + -1));
        }
        else {
          *(char *)((int)pcStack_28 + -1) = cVar2 + -1;
        }
      }
      pcStack_28 = (char *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
      local_4 = 0xffffffff;
      FUN_005ae770();
      ExceptionList = pvStack_c;
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x148) = *puVar1;
  *(undefined4 *)(param_1 + 0x14c) = puVar1[1];
  *(undefined4 *)(param_1 + 0x150) = puVar1[2];
  FUN_005b9960(*(undefined4 *)(param_1 + 0x138),param_1);
  *(undefined1 *)(param_1 + 0x154) = 1;
  FUN_00502350(1);
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return 1;
}

