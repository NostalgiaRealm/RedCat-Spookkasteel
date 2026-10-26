/*
 * FUN_0046fe10 at 0046fe10
 * undefined FUN_0046fe10(void)
 * Address ranges: 0046fe10-004701d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0046fff5) */
/* WARNING: Removing unreachable block (ram,0x00470004) */
/* WARNING: Removing unreachable block (ram,0x004700be) */
/* WARNING: Removing unreachable block (ram,0x004700cd) */

undefined4 * __thiscall FUN_0046fe10(undefined4 *param_1,undefined4 **param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puStack_60;
  undefined4 *local_4c;
  int local_48;
  int local_44;
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
  puStack_8 = &LAB_0062824e;
  pvStack_c = ExceptionList;
  puStack_60 = param_2;
  ExceptionList = &pvStack_c;
  local_40 = param_1;
  FUN_00501cb0();
  piVar1 = param_1 + 0x3e;
  *piVar1 = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0x41c80000;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined1 *)(param_1 + 0xd7) = 1;
  *(undefined1 *)((int)param_1 + 0x35d) = 1;
  param_1[0xd8] = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  *param_1 = &PTR_FUN_0064df18;
  puVar3 = param_1 + 0x40;
  iVar7 = 4;
  do {
    puVar3[-1] = 0x41a00000;
    *puVar3 = 0x437f0000;
    puVar3[1] = 0x41a00000;
    puVar3 = puVar3 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puStack_60 = (undefined4 *)0x46fec4;
  FUN_005b3070();
  puStack_60 = (undefined4 *)0x46fecf;
  FUN_005b3070();
  puVar3 = param_1 + 0x46;
  iVar7 = 4;
  do {
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3 = puVar3 + 9;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puStack_60 = (undefined4 *)0x0;
  local_2c[0] = param_2._0_1_;
  FUN_004040a0();
  uVar8 = 0xffffffff;
  pcVar9 = s_crosshair_bmp_00692dd0;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  puStack_60 = (undefined4 *)(~uVar8 - 1);
  FUN_004040f0(s_crosshair_bmp_00692dd0);
  puStack_60 = (undefined4 *)0x0;
  local_3c[0] = param_2._0_1_;
  local_4._0_1_ = 2;
  FUN_004040a0();
  uVar8 = 0xffffffff;
  pcVar9 = s_crosshair_a_bmp_00692dc0;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  puStack_60 = (undefined4 *)(~uVar8 - 1);
  FUN_004040f0(s_crosshair_a_bmp_00692dc0);
  local_48 = 0;
  local_4c = (undefined4 *)0x0;
  local_4._0_1_ = 5;
  iVar7 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    puStack_60 = (undefined4 *)0x46ff7b;
    iVar7 = FUN_0055b280();
  }
  if (*(int *)(iVar7 + 0xd8) == 0) {
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
  piVar5 = (int *)FUN_0050d980(&local_44);
  if (*piVar5 != 0) {
    local_4._0_1_ = 7;
    local_48 = *piVar5;
    puStack_60 = (undefined4 *)0x470019;
    FUN_005844b0();
  }
  local_4._0_1_ = 5;
  if (local_44 != 0) {
    puStack_60 = (undefined4 *)0x47002b;
    FUN_004098d0();
  }
  if (iStack_34 != 0) {
    iVar7 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_60 = (undefined4 *)0x470044;
      iVar7 = FUN_0055b280();
    }
    if (*(int *)(iVar7 + 0xd8) == 0) {
      puStack_60 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_60 = local_1c;
      local_4._0_1_ = 8;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4._0_1_ = 5;
      puStack_60 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_60 = (undefined4 *)local_3c;
    piVar5 = (int *)FUN_0050d980(&local_44);
    if (*piVar5 != 0) {
      local_4._0_1_ = 9;
      local_4c = (undefined4 *)*piVar5;
      puStack_60 = (undefined4 *)0x4700e2;
      FUN_005844b0();
    }
    local_4._0_1_ = 5;
    if (local_44 != 0) {
      puStack_60 = (undefined4 *)0x4700f8;
      FUN_004098d0();
    }
  }
  if ((local_48 != 0) && (local_4c != (undefined4 *)0x0)) {
    param_2 = &puStack_60;
    if (local_4c != (undefined4 *)0x0) {
      local_4c[5] = local_4c[5] + 1;
    }
    local_4._0_1_ = 5;
    puStack_60 = local_4c;
    FUN_00412de0();
    FUN_0050aea0();
  }
  iVar7 = *piVar1;
  if (iVar7 != local_48) {
    if ((iVar7 != 0) &&
       (iVar6 = *(int *)(iVar7 + 0x14) + -1, *(int *)(iVar7 + 0x14) = iVar6, iVar6 == 0)) {
      puStack_60 = (undefined4 *)0x0;
      FUN_005abfc0();
    }
    *piVar1 = local_48;
    puStack_60 = (undefined4 *)0x47015b;
    FUN_005844b0();
  }
  puStack_60 = (undefined4 *)0x0;
  FUN_00502350();
  local_4._0_1_ = 4;
  if (local_4c != (undefined4 *)0x0) {
    puStack_60 = (undefined4 *)0x470175;
    FUN_004098d0();
  }
  local_4._0_1_ = 3;
  if (local_48 != 0) {
    puStack_60 = (undefined4 *)0x47018b;
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

