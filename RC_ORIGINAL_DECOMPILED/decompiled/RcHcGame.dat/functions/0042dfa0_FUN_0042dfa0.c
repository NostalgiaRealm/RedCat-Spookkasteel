/*
 * FUN_0042dfa0 at 0042dfa0
 * undefined FUN_0042dfa0(void)
 * Address ranges: 0042dfa0-0042e1af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0042dfa0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  code *pcVar6;
  void *pvVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006235c9;
  pvStack_c = ExceptionList;
  bVar4 = false;
  bVar3 = false;
  ExceptionList = &pvStack_c;
  FUN_0049b240(param_2,param_3);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  param_1[0xa5] = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  *param_1 = &PTR_FUN_0064c338;
  FUN_00502350(0);
  if (param_1[0xa5] != 0) {
    uVar9 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    local_2c[0] = (undefined1)param_3;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4._0_1_ = 1;
    pcVar6 = (code *)FUN_005a07f0(s_m_Shadow__0_006900f8,s_D__Work_RCHorror_RCSource_RCActo_00690104
                                  ,0x26,local_2c);
    (*pcVar6)();
    local_4._0_1_ = 0;
    if (local_28 != 0) {
      cVar2 = *(char *)(local_28 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar2 + -1;
      }
    }
  }
  pvVar7 = operator_new(0x1b4);
  local_4._0_1_ = 2;
  uVar5 = (undefined1)local_4;
  local_4._0_1_ = 2;
  if (pvVar7 == (void *)0x0) {
    uVar8 = 0;
    local_4._0_1_ = uVar5;
  }
  else {
    param_3._0_1_ = SUB41(pvVar7,0);
    local_2c[0] = (undefined1)param_3;
    uVar9 = 0xffffffff;
    local_28 = 0;
    pcVar10 = s_RcActorShadow_006900e8;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    local_24 = 0;
    local_20 = 0;
    FUN_004040f0(s_RcActorShadow_006900e8,~uVar9 - 1);
    local_4 = CONCAT31(local_4._1_3_,3);
    uVar8 = FUN_005033a0(auStack_1c,local_2c);
    bVar4 = true;
    bVar3 = true;
    local_4._0_1_ = 4;
    local_4._1_3_ = 0;
    uVar8 = FUN_0046ce40(uVar8);
  }
  puVar1 = param_1 + 0xa5;
  *puVar1 = uVar8;
  if (bVar3) {
    if (iStack_18 != 0) {
      cVar2 = *(char *)(iStack_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar2 + -1;
      }
    }
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  local_4 = 0;
  if ((bVar4) && (local_28 != 0)) {
    cVar2 = *(char *)(local_28 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar2 + -1;
    }
  }
  FUN_00502350(0);
  FUN_00509a90(*puVar1,puVar1);
  ExceptionList = pvStack_c;
  return param_1;
}

