/*
 * FUN_004d4100 at 004d4100
 * undefined FUN_004d4100(void)
 * Address ranges: 004d4100-004d42f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d4100(int param_1)

{
  undefined3 uVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006317b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006995e4,0xe7);
  local_2c[0] = (undefined1)param_1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_4._1_3_ = 0;
  uVar1 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (param_1 == 0) {
    uVar4 = 0xffffffff;
    pcVar6 = s_CommandOnEnter_00691fd4;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    local_4._1_3_ = uVar1;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      pcVar6 = s_CommandOnEnter_00691fd4;
      pcVar7 = local_28;
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
      local_28[uVar4] = '\0';
      local_24 = uVar4;
    }
  }
  else if (param_1 == 1) {
    uVar4 = 0xffffffff;
    pcVar6 = s_CommandOnLeave_00691fe4;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    local_4._1_3_ = uVar1;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      pcVar6 = s_CommandOnLeave_00691fe4;
      pcVar7 = local_28;
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
      local_28[uVar4] = '\0';
      local_24 = uVar4;
    }
  }
  else {
    local_1c[0] = (undefined1)param_1;
    uVar4 = 0xffffffff;
    local_18 = 0;
    pcVar6 = s_CAdamTriggerModel__SendTriggerCo_00699674;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(s_CAdamTriggerModel__SendTriggerCo_00699674,~uVar4 - 1);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006995e4,0xf8,
                                  local_1c);
    (*pcVar3)();
    local_4._0_1_ = 1;
    if (local_18 != 0) {
      cVar2 = *(char *)(local_18 + -1);
      if ((cVar2 != '\0') && (cVar2 != -1)) {
        *(char *)(local_18 + -1) = cVar2 + -1;
        local_18 = 0;
        local_14 = 0;
        local_10 = 0;
        goto LAB_004d4290;
      }
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
LAB_004d4290:
  FUN_00505400(local_2c);
  if (local_28 != (char *)0x0) {
    cVar2 = local_28[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(local_28 + -1);
    }
    else {
      local_28[-1] = cVar2 + -1;
    }
  }
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

