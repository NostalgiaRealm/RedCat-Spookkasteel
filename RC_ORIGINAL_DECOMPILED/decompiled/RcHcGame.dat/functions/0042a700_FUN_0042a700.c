/*
 * FUN_0042a700 at 0042a700
 * undefined FUN_0042a700(void)
 * Address ranges: 0042a700-0042a997
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_0042a700(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_1c [4];
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623027;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00422420(param_2,param_3,param_5);
  local_4 = 0;
  param_1[0x60] = param_4;
  FUN_00425d30(param_5);
  local_4._0_1_ = 1;
  FUN_004261f0(param_5);
  *param_1 = &PTR_FUN_0064c008;
  pcVar7 = *(char **)(param_4 + 0xc);
  local_4._0_1_ = 2;
  local_1c[0] = (undefined1)param_3;
  FUN_004040a0(0);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (pcVar7 == (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
  }
  else {
    uVar5 = 0xffffffff;
    pcVar8 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      pcVar8 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_00404190(uVar5);
    }
  }
  FUN_00503ae0(local_1c);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  pcVar7 = *(char **)(param_4 + 0x10);
  local_1c[0] = (undefined1)param_3;
  FUN_004040a0(0);
  local_4._0_1_ = 4;
  if (pcVar7 != (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar8 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar7,~uVar5 - 1);
  }
  FUN_0040cc00(local_1c,0,0xffffffff);
  local_4._0_1_ = 2;
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  pvVar2 = operator_new(0x29c);
  local_4._0_1_ = 5;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0042a4a0(param_2,param_3,param_1);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0x5f] = iVar3;
  if (iVar3 == 0) {
    local_1c[0] = (undefined1)param_3;
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      pcVar7 = &DAT_006b3f70;
      pcVar8 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_00404190(uVar5);
    }
    local_4._0_1_ = 6;
    pcVar4 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,
                                  s_D__Work_RCHorror_RCSource_RcStan_0068ff88,0x82,local_1c);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,2);
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
  }
  FUN_00509a80(param_1[0x5f]);
  ExceptionList = pvStack_c;
  return param_1;
}

