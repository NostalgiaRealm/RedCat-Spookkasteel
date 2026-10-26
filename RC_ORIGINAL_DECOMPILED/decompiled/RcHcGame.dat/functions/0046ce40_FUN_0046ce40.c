/*
 * FUN_0046ce40 at 0046ce40
 * undefined FUN_0046ce40(void)
 * Address ranges: 0046ce40-0046d1e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0046d013) */
/* WARNING: Removing unreachable block (ram,0x0046d022) */
/* WARNING: Removing unreachable block (ram,0x0046d0d8) */
/* WARNING: Removing unreachable block (ram,0x0046d0e7) */

undefined4 * __thiscall FUN_0046ce40(undefined4 *param_1,undefined4 **param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puStack_60;
  int local_4c;
  undefined4 *local_48;
  undefined1 local_44 [4];
  undefined4 *local_40;
  undefined1 local_3c [8];
  int iStack_34;
  undefined1 local_2c [4];
  int iStack_28;
  undefined4 local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627f1e;
  pvStack_c = ExceptionList;
  puStack_60 = param_2;
  ExceptionList = &pvStack_c;
  local_40 = param_1;
  FUN_00501cb0();
  piVar1 = param_1 + 0x3e;
  *piVar1 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  param_1[99] = 0x41c80000;
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  param_1[0x6c] = 0;
  *param_1 = &PTR_FUN_0064dd08;
  puStack_60 = (undefined4 *)0x46ceaf;
  FUN_005b3070();
  puStack_60 = (undefined4 *)0x46ceba;
  FUN_005b3070();
  puVar3 = param_1 + 0x40;
  iVar8 = 4;
  do {
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[4] = 0x437f0000;
    puVar3[5] = 0x437f0000;
    puVar3[6] = 0x437f0000;
    puVar3[7] = 0x437f0000;
    puVar3 = puVar3 + 9;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  puStack_60 = (undefined4 *)0x0;
  param_1[0x42] = 0;
  param_1[0x43] = 0x3f800000;
  param_1[0x4b] = 0x3f800000;
  param_1[0x4c] = 0x3f800000;
  param_1[0x54] = 0x3f800000;
  param_1[0x55] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  local_2c[0] = param_2._0_1_;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = &DAT_00692d24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  puStack_60 = (undefined4 *)(~uVar7 - 1);
  FUN_004040f0(&DAT_00692d24);
  puStack_60 = (undefined4 *)0x0;
  local_4._0_1_ = 2;
  local_3c[0] = param_2._0_1_;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar9 = &DAT_00692d18;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  puStack_60 = (undefined4 *)(~uVar7 - 1);
  FUN_004040f0(&DAT_00692d18);
  local_4c = 0;
  local_48 = (undefined4 *)0x0;
  local_4._0_1_ = 5;
  iVar8 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    puStack_60 = (undefined4 *)0x46cf99;
    iVar8 = FUN_0055b280();
  }
  if (*(int *)(iVar8 + 0xd8) == 0) {
    puStack_60 = &param_2;
    FUN_00409810(&DAT_006b3f70);
    puStack_60 = local_1c;
    local_4._0_1_ = 6;
    pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar4)();
    local_4._0_1_ = 5;
    puStack_60 = (undefined4 *)0x1;
    FUN_004040a0();
  }
  puStack_60 = (undefined4 *)local_2c;
  piVar5 = (int *)FUN_0050d980(local_44);
  if (*piVar5 != 0) {
    local_4._0_1_ = 7;
    local_4c = *piVar5;
    puStack_60 = (undefined4 *)0x46d037;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  puStack_60 = (undefined4 *)0x46d045;
  FUN_0057d310();
  if (iStack_34 != 0) {
    iVar8 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_60 = (undefined4 *)0x46d05e;
      iVar8 = FUN_0055b280();
    }
    if (*(int *)(iVar8 + 0xd8) == 0) {
      puStack_60 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_60 = local_1c;
      local_4._0_1_ = 8;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,5);
      puStack_60 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_60 = (undefined4 *)local_3c;
    piVar5 = (int *)FUN_0050d980(local_44);
    if (*piVar5 != 0) {
      local_4._0_1_ = 9;
      local_48 = (undefined4 *)*piVar5;
      puStack_60 = (undefined4 *)0x46d0fc;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,5);
    puStack_60 = (undefined4 *)0x46d10a;
    FUN_0057d310();
  }
  if ((local_4c != 0) && (local_48 != (undefined4 *)0x0)) {
    param_2 = &puStack_60;
    puStack_60 = local_48;
    if (local_48 != (undefined4 *)0x0) {
      local_48[5] = local_48[5] + 1;
    }
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_00412de0();
    FUN_0050aea0();
  }
  iVar8 = *piVar1;
  if (iVar8 != local_4c) {
    if ((iVar8 != 0) &&
       (iVar6 = *(int *)(iVar8 + 0x14) + -1, *(int *)(iVar8 + 0x14) = iVar6, iVar6 == 0)) {
      puStack_60 = (undefined4 *)0x0;
      FUN_005abfc0();
    }
    *piVar1 = local_4c;
    puStack_60 = (undefined4 *)0x46d16d;
    FUN_005844b0();
  }
  local_4._0_1_ = 4;
  if (local_48 != (undefined4 *)0x0) {
    puStack_60 = (undefined4 *)0x46d17f;
    FUN_004098d0();
  }
  local_4._0_1_ = 3;
  if (local_4c != 0) {
    puStack_60 = (undefined4 *)0x46d195;
    FUN_004098d0();
  }
  puStack_60 = (undefined4 *)0x1;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004040a0();
  if (iStack_28 != 0) {
    cVar2 = *(char *)(iStack_28 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      puStack_60 = (undefined4 *)(iStack_28 + -1);
      FUN_005fe5f0();
    }
    else {
      *(char *)(iStack_28 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

