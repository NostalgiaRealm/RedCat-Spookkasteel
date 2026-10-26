/*
 * FUN_0046db00 at 0046db00
 * undefined FUN_0046db00(void)
 * Address ranges: 0046db00-0046de7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0046dce6) */
/* WARNING: Removing unreachable block (ram,0x0046dd9d) */

code * __thiscall FUN_0046db00(code *param_1,code **param_2)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  code *pcStack_60;
  int local_4c;
  code *local_48;
  undefined1 local_44 [4];
  code *local_40;
  undefined1 local_3c [8];
  int iStack_34;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062803c;
  pvStack_c = ExceptionList;
  pcStack_60 = (code *)param_2;
  ExceptionList = &pvStack_c;
  local_40 = param_1;
  FUN_00501cb0();
  local_4 = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  pcStack_60 = (code *)0x46db45;
  FUN_005844b0();
  local_4._0_1_ = 1;
  iVar5 = 0xf;
  do {
    pcStack_60 = (code *)0x46db5e;
    FUN_0047d9b0();
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  pcStack_60 = (code *)0xffffffff;
  *(undefined4 *)(param_1 + 0x13f8) = 0;
  FUN_004041b0();
  pcStack_60 = FUN_0057d310;
  FUN_0060b1db(param_1 + 0x14bc,4,5,&LAB_00468f40);
  local_4._0_1_ = 2;
  *(undefined ***)param_1 = &PTR_FUN_0064de10;
  iVar5 = 0xf;
  do {
    pcStack_60 = param_1;
    FUN_0047db50(param_2);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  pcStack_60 = (code *)0x46dbc7;
  FUN_005b3070();
  pcStack_60 = (code *)0x46dbce;
  FUN_0046e6c0();
  pcStack_60 = (code *)0x0;
  local_2c[0] = param_2._0_1_;
  FUN_004040a0();
  uVar4 = 0xffffffff;
  pcVar6 = s_strail_bmp_00692d60;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  pcStack_60 = (code *)(~uVar4 - 1);
  FUN_004040f0(s_strail_bmp_00692d60);
  pcStack_60 = (code *)0x0;
  local_3c[0] = param_2._0_1_;
  local_4._0_1_ = 3;
  FUN_004040a0();
  uVar4 = 0xffffffff;
  pcVar6 = s_strail_a_bmp_00692d50;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  pcStack_60 = (code *)(~uVar4 - 1);
  FUN_004040f0(s_strail_a_bmp_00692d50);
  local_4._0_1_ = 4;
  local_4c = 0;
  pcStack_60 = (code *)0x46dc45;
  FUN_005844b0();
  local_4._0_1_ = 5;
  local_48 = (code *)0x0;
  pcStack_60 = (code *)0x46dc57;
  FUN_005844b0();
  local_4._0_1_ = 6;
  iVar5 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    pcStack_60 = (code *)0x46dc6b;
    iVar5 = FUN_0055b280();
  }
  if (*(int *)(iVar5 + 0xd8) == 0) {
    pcStack_60 = (code *)&param_2;
    FUN_00409810(&DAT_006b3f70);
    pcStack_60 = (code *)local_1c;
    local_4._0_1_ = 7;
    pcVar2 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar2)();
    local_4._0_1_ = 6;
    pcStack_60 = (code *)0x1;
    FUN_004040a0();
  }
  pcStack_60 = (code *)local_2c;
  piVar3 = (int *)FUN_0050d980(local_44);
  if (*piVar3 != 0) {
    local_4._0_1_ = 8;
    local_4c = *piVar3;
    pcStack_60 = (code *)0x46dcfa;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  pcStack_60 = (code *)0x46dd07;
  FUN_0057d310();
  if (iStack_34 != 0) {
    iVar5 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      pcStack_60 = (code *)0x46dd22;
      iVar5 = FUN_0055b280();
    }
    if (*(int *)(iVar5 + 0xd8) == 0) {
      pcStack_60 = (code *)&param_2;
      FUN_00409810(&DAT_006b3f70);
      pcStack_60 = (code *)local_1c;
      local_4._0_1_ = 9;
      pcVar2 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,6);
      pcStack_60 = (code *)0x1;
      FUN_004040a0();
    }
    pcStack_60 = (code *)local_3c;
    piVar3 = (int *)FUN_0050d980(local_44);
    if (*piVar3 != 0) {
      local_4._0_1_ = 10;
      local_48 = (code *)*piVar3;
      pcStack_60 = (code *)0x46ddb1;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,6);
    pcStack_60 = (code *)0x46ddbe;
    FUN_0057d310();
  }
  if ((local_4c != 0) && (local_48 != (code *)0x0)) {
    param_2 = &pcStack_60;
    pcStack_60 = local_48;
    FUN_005844b0();
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_00412de0();
    FUN_0050aea0();
  }
  if (*(int *)(param_1 + 0xf8) != local_4c) {
    if (*(int *)(param_1 + 0xf8) != 0) {
      pcStack_60 = (code *)0x46de0d;
      FUN_004098d0();
    }
    *(int *)(param_1 + 0xf8) = local_4c;
    pcStack_60 = (code *)0x46de1a;
    FUN_005844b0();
  }
  pcStack_60 = (code *)0x46de21;
  FUN_0046ea80();
  local_4._0_1_ = 5;
  pcStack_60 = (code *)0x46de2f;
  FUN_0057d310();
  local_4._0_1_ = 4;
  if (local_4c != 0) {
    pcStack_60 = (code *)0x46de41;
    FUN_004098d0();
  }
  pcStack_60 = (code *)0x1;
  local_4._0_1_ = 3;
  FUN_004040a0();
  pcStack_60 = (code *)0x1;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004040a0();
  ExceptionList = pvStack_c;
  return param_1;
}

