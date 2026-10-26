/*
 * FUN_0045dca0 at 0045dca0
 * undefined FUN_0045dca0(void)
 * Address ranges: 0045dca0-0045e072
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0045debc) */
/* WARNING: Removing unreachable block (ram,0x0045df71) */
/* WARNING: Removing unreachable block (ram,0x0045df82) */

undefined4 * __thiscall FUN_0045dca0(undefined4 *param_1,undefined4 **param_2)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puStack_60;
  int local_4c;
  undefined4 *local_48;
  undefined1 local_44 [4];
  undefined4 *local_40;
  undefined1 local_3c [8];
  int iStack_34;
  undefined1 local_2c [16];
  undefined4 local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006272ee;
  pvStack_c = ExceptionList;
  puStack_60 = param_2;
  ExceptionList = &pvStack_c;
  local_40 = param_1;
  FUN_00501cb0();
  local_4 = 0;
  param_1[0x3e] = 0;
  puStack_60 = (undefined4 *)0x45dce5;
  FUN_005844b0();
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar6 = 0xf;
  do {
    puStack_60 = (undefined4 *)0x45dcff;
    FUN_0047d9b0();
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puStack_60 = (undefined4 *)0xffffffff;
  *(undefined1 *)(param_1 + 0x56d) = 1;
  param_1[0x56e] = 0;
  FUN_004041b0();
  puStack_60 = (undefined4 *)0xffffffff;
  param_1[0x573] = 0;
  FUN_004041b0();
  *param_1 = &PTR_FUN_0064d70c;
  iVar6 = 0xf;
  do {
    puStack_60 = param_1;
    FUN_0047db50(param_2);
    puStack_60 = (undefined4 *)0x45dd57;
    FUN_005b3070();
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puStack_60 = (undefined4 *)0x45dd6b;
  FUN_005b3070();
  puStack_60 = (undefined4 *)0x45dd76;
  FUN_005b3070();
  puStack_60 = (undefined4 *)0x45dd81;
  FUN_005b3070();
  puStack_60 = (undefined4 *)0x45dd8c;
  FUN_005b3070();
  puStack_60 = (undefined4 *)0x45dd97;
  FUN_005b3070();
  puStack_60 = (undefined4 *)0x45dda2;
  FUN_005b3070();
  puStack_60 = (undefined4 *)0x45ddad;
  FUN_005b3070();
  puStack_60 = (undefined4 *)0x45ddb4;
  FUN_0045ecf0();
  puStack_60 = (undefined4 *)0x0;
  local_2c[0] = param_2._0_1_;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  pcVar7 = s_kaboom_bmp_006922e0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  puStack_60 = (undefined4 *)(~uVar5 - 1);
  FUN_004040f0(s_kaboom_bmp_006922e0);
  puStack_60 = (undefined4 *)0x0;
  local_4._0_1_ = 2;
  local_3c[0] = param_2._0_1_;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  pcVar7 = s_kaboom_a_bmp_006922d0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  puStack_60 = (undefined4 *)(~uVar5 - 1);
  FUN_004040f0(s_kaboom_a_bmp_006922d0);
  local_4c = 0;
  local_4._0_1_ = 4;
  local_48 = (undefined4 *)0x0;
  puStack_60 = (undefined4 *)0x45de2f;
  FUN_005844b0();
  local_4._0_1_ = 5;
  iVar6 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    puStack_60 = (undefined4 *)0x45de42;
    iVar6 = FUN_0055b280();
  }
  if (*(int *)(iVar6 + 0xd8) == 0) {
    puStack_60 = &param_2;
    FUN_00409810(&DAT_006b3f70);
    puStack_60 = local_1c;
    local_4._0_1_ = 6;
    pcVar2 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar2)();
    local_4._0_1_ = 5;
    puStack_60 = (undefined4 *)0x1;
    FUN_004040a0();
  }
  puStack_60 = (undefined4 *)local_2c;
  piVar3 = (int *)FUN_0050d980(local_44);
  if (*piVar3 != 0) {
    local_4._0_1_ = 7;
    local_4c = *piVar3;
    puStack_60 = (undefined4 *)0x45ded0;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  puStack_60 = (undefined4 *)0x45dede;
  FUN_0057d310();
  if (iStack_34 != 0) {
    iVar6 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_60 = (undefined4 *)0x45def7;
      iVar6 = FUN_0055b280();
    }
    if (*(int *)(iVar6 + 0xd8) == 0) {
      puStack_60 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_60 = local_1c;
      local_4._0_1_ = 8;
      pcVar2 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,5);
      puStack_60 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_60 = (undefined4 *)local_3c;
    piVar3 = (int *)FUN_0050d980(local_44);
    if (*piVar3 != 0) {
      local_4._0_1_ = 9;
      local_48 = (undefined4 *)*piVar3;
      puStack_60 = (undefined4 *)0x45df97;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,5);
    puStack_60 = (undefined4 *)0x45dfa5;
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
  iVar6 = param_1[0x3e];
  if (iVar6 != local_4c) {
    if ((iVar6 != 0) &&
       (iVar4 = *(int *)(iVar6 + 0x14) + -1, *(int *)(iVar6 + 0x14) = iVar4, iVar4 == 0)) {
      puStack_60 = (undefined4 *)0x0;
      FUN_005abfc0();
    }
    param_1[0x3e] = local_4c;
    puStack_60 = (undefined4 *)0x45e010;
    FUN_005844b0();
  }
  local_4._0_1_ = 4;
  if (local_48 != (undefined4 *)0x0) {
    puStack_60 = (undefined4 *)0x45e022;
    FUN_004098d0();
  }
  local_4._0_1_ = 3;
  if (local_4c != 0) {
    puStack_60 = (undefined4 *)0x45e038;
    FUN_004098d0();
  }
  puStack_60 = (undefined4 *)0x1;
  local_4._0_1_ = 2;
  FUN_004040a0();
  puStack_60 = (undefined4 *)0x1;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004040a0();
  ExceptionList = pvStack_c;
  return param_1;
}

