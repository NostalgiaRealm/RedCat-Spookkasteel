/*
 * FUN_005a0a70 at 005a0a70
 * undefined FUN_005a0a70(void)
 * Address ranges: 005a0a70-005a0cab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005a0a70(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644e24;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ab4a0();
  param_1[5] = param_2;
  *(undefined1 *)(param_1 + 6) = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 7) = *param_3;
  FUN_004040a0(0);
  FUN_0040cc00(param_3,0,0xffffffff);
  local_4._0_1_ = 1;
  local_1c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_Allowed_006a1248;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar6 = s_Allowed_006a1248;
    pcVar7 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    local_18[uVar4] = '\0';
    local_14 = uVar4;
  }
  uVar8 = 0;
  local_4._0_1_ = 2;
  uVar2 = FUN_005a1d60(0);
  FUN_005ac9d0(local_1c,param_3,1,uVar2,uVar8);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_2;
  uVar4 = 0xffffffff;
  local_28 = 0;
  pcVar6 = s_ResultLastRun_006a7858;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  local_24 = 0;
  local_20 = 0;
  FUN_004040f0(s_ResultLastRun_006a7858,~uVar4 - 1);
  uVar8 = 0;
  local_4._0_1_ = 5;
  uVar2 = FUN_005a1d60(0);
  FUN_005ac9d0(local_2c,param_3,3,uVar2,uVar8);
  local_4._0_1_ = 7;
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  *param_1 = &PTR_FUN_006500b0;
  if (param_1[5] == 0) {
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_1c[0] = (undefined1)param_2;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 8;
    pcVar3 = (code *)FUN_005a07f0(s_m_Manager____0_006a7814,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a7824,0x10,local_1c);
    (*pcVar3)();
    local_4._0_1_ = 7;
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
  FUN_005ad400(1);
  FUN_005ad400(1);
  ExceptionList = pvStack_c;
  return param_1;
}

