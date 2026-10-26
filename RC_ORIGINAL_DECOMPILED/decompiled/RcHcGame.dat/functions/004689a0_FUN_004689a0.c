/*
 * FUN_004689a0 at 004689a0
 * undefined FUN_004689a0(void)
 * Address ranges: 004689a0-00468e67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00468c34) */
/* WARNING: Removing unreachable block (ram,0x00468c45) */
/* WARNING: Removing unreachable block (ram,0x00468d24) */
/* WARNING: Removing unreachable block (ram,0x00468d35) */

code * __thiscall FUN_004689a0(code *param_1,code **param_2)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  char *pcVar8;
  code *pcStack_68;
  int local_54;
  code *local_50;
  int local_4c;
  int local_44;
  undefined1 local_3c [8];
  int iStack_34;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627a2c;
  pvStack_c = ExceptionList;
  pcStack_68 = (code *)param_2;
  ExceptionList = &pvStack_c;
  FUN_00501cb0();
  *(undefined4 *)(param_1 + 0xf8) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  param_1[0x108] = (code)0x1;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  iVar7 = 5;
  do {
    pcStack_68 = (code *)0x4689fc;
    FUN_0047d9b0();
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  pcStack_68 = (code *)0xffffffff;
  FUN_004041b0();
  pcStack_68 = FUN_0057d310;
  FUN_0060b1db(param_1 + 0xafc,4,5,&LAB_00468f40);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined ***)param_1 = &PTR_FUN_0064daf4;
  pcVar2 = param_1 + 0x19c;
  local_44 = 5;
  do {
    pcVar6 = pcVar2 + -0x74;
    local_4c = 4;
    do {
      pcStack_68 = (code *)0x468a66;
      FUN_005b3070();
      *(undefined4 *)(pcVar6 + -4) = 0;
      *(undefined4 *)pcVar6 = 0;
      *(undefined4 *)(pcVar6 + 4) = 0;
      *(undefined4 *)(pcVar6 + 0x10) = 0x437f0000;
      *(undefined4 *)(pcVar6 + 0x14) = 0x437f0000;
      *(undefined4 *)(pcVar6 + 0x18) = 0x437f0000;
      *(undefined4 *)(pcVar6 + 0x1c) = 0x43160000;
      pcVar6 = pcVar6 + 0x24;
      local_4c = local_4c + -1;
      *(undefined4 *)(param_1 + 0x120) = 0x41200000;
      *(undefined4 *)(param_1 + 0x11c) = 0x41f00000;
    } while (local_4c != 0);
    *(undefined4 *)pcVar2 = 0;
    *(undefined4 *)(pcVar2 + 4) = 0;
    *(undefined4 *)(pcVar2 + -0x6c) = 0;
    *(undefined4 *)(pcVar2 + -0x68) = 0x3f800000;
    *(undefined4 *)(pcVar2 + -0x48) = 0x3f800000;
    *(undefined4 *)(pcVar2 + -0x44) = 0x3f800000;
    *(undefined4 *)(pcVar2 + -0x24) = 0x3f800000;
    *(undefined4 *)(pcVar2 + -0x20) = 0;
    pcStack_68 = param_1;
    FUN_0047db50(param_2);
    pcVar2 = pcVar2 + 0x90;
    local_44 = local_44 + -1;
  } while (local_44 != 0);
  pcStack_68 = (code *)0x468af8;
  FUN_00469770();
  pcStack_68 = (code *)0x0;
  *(undefined4 *)(param_1 + 0xfc) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x100) = 0x437f0000;
  local_1c[0] = param_2._0_1_;
  *(undefined4 *)(param_1 + 0x104) = 0x41a00000;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  pcVar8 = s_kaboom2_bmp_00692900;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcStack_68 = (code *)(~uVar5 - 1);
  FUN_004040f0(s_kaboom2_bmp_00692900);
  pcStack_68 = (code *)0x0;
  local_4._0_1_ = 3;
  local_3c[0] = param_2._0_1_;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  pcVar8 = s_kaboom2_a_bmp_006928f0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  pcStack_68 = (code *)(~uVar5 - 1);
  FUN_004040f0(s_kaboom2_a_bmp_006928f0);
  local_54 = 0;
  local_50 = (code *)0x0;
  local_4._0_1_ = 6;
  iVar7 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    pcStack_68 = (code *)0x468b9b;
    iVar7 = FUN_0055b280();
  }
  if (*(int *)(iVar7 + 0xd8) == 0) {
    pcStack_68 = (code *)0x0;
    local_2c[0] = param_2._0_1_;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcStack_68 = (code *)(~uVar5 - 1);
    FUN_004040f0(&DAT_006b3f70);
    pcStack_68 = (code *)local_2c;
    local_4._0_1_ = 7;
    pcVar2 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar2)();
    local_4._0_1_ = 6;
    pcStack_68 = (code *)0x1;
    FUN_004040a0();
  }
  pcStack_68 = (code *)local_1c;
  piVar3 = (int *)FUN_0050d980(&param_2);
  if (*piVar3 != 0) {
    local_4._0_1_ = 8;
    local_54 = *piVar3;
    pcStack_68 = (code *)0x468c5a;
    FUN_005844b0();
  }
  local_4._0_1_ = 6;
  if (param_2 != (code **)0x0) {
    pcStack_68 = (code *)0x468c70;
    FUN_004098d0();
  }
  if (iStack_34 != 0) {
    iVar7 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      pcStack_68 = (code *)0x468c8d;
      iVar7 = FUN_0055b280();
    }
    if (*(int *)(iVar7 + 0xd8) == 0) {
      pcStack_68 = (code *)0x0;
      local_2c[0] = param_2._0_1_;
      FUN_004040a0();
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      pcStack_68 = (code *)(~uVar5 - 1);
      FUN_004040f0(&DAT_006b3f70);
      pcStack_68 = (code *)local_2c;
      local_4._0_1_ = 9;
      pcVar2 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar2)();
      local_4._0_1_ = 6;
      pcStack_68 = (code *)0x1;
      FUN_004040a0();
    }
    pcStack_68 = (code *)local_3c;
    piVar3 = (int *)FUN_0050d980(&param_2);
    if (*piVar3 != 0) {
      local_4._0_1_ = 10;
      local_50 = (code *)*piVar3;
      pcStack_68 = (code *)0x468d4a;
      FUN_005844b0();
    }
    local_4._0_1_ = 6;
    if (param_2 != (code **)0x0) {
      pcStack_68 = (code *)0x468d64;
      FUN_004098d0();
    }
  }
  if ((local_54 != 0) && (local_50 != (code *)0x0)) {
    param_2 = &pcStack_68;
    if (local_50 != (code *)0x0) {
      *(int *)(local_50 + 0x14) = *(int *)(local_50 + 0x14) + 1;
    }
    local_4._0_1_ = 6;
    pcStack_68 = local_50;
    FUN_00412de0();
    FUN_0050aea0();
  }
  iVar7 = *(int *)(param_1 + 0xf8);
  if (iVar7 != local_54) {
    if ((iVar7 != 0) &&
       (iVar4 = *(int *)(iVar7 + 0x14) + -1, *(int *)(iVar7 + 0x14) = iVar4, iVar4 == 0)) {
      pcStack_68 = (code *)0x0;
      FUN_005abfc0();
    }
    *(int *)(param_1 + 0xf8) = local_54;
    if (local_54 != 0) {
      *(int *)(local_54 + 0x14) = *(int *)(local_54 + 0x14) + 1;
    }
  }
  pcStack_68 = (code *)0x468dd6;
  FUN_00469a90();
  local_4._0_1_ = 5;
  if (local_50 != (code *)0x0) {
    pcStack_68 = (code *)0x468de8;
    FUN_004098d0();
  }
  local_4._0_1_ = 4;
  if ((local_54 != 0) &&
     (iVar7 = *(int *)(local_54 + 0x14) + -1, *(int *)(local_54 + 0x14) = iVar7, iVar7 == 0)) {
    pcStack_68 = (code *)0x0;
    FUN_005abfc0();
  }
  pcStack_68 = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004040a0();
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      pcStack_68 = (code *)(iStack_18 + -1);
      FUN_005fe5f0();
    }
    else {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

