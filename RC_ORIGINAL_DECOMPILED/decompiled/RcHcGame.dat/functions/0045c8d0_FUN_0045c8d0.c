/*
 * FUN_0045c8d0 at 0045c8d0
 * undefined FUN_0045c8d0(void)
 * Address ranges: 0045c8d0-0045ca77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045c8d0(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
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
  int local_4;
  
  puStack_8 = &LAB_00627150;
  pvStack_c = ExceptionList;
  local_2c[0] = (undefined1)param_1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 0;
  if (param_1 == 0) {
    uVar3 = 0xffffffff;
    pcVar5 = s_CommandOnEnter_00691fd4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = s_CommandOnEnter_00691fd4;
      pcVar6 = local_28;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      local_28[uVar3] = '\0';
      local_24 = uVar3;
    }
  }
  else if (param_1 == 1) {
    uVar3 = 0xffffffff;
    pcVar5 = s_CommandOnLeave_00691fe4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = s_CommandOnLeave_00691fe4;
      pcVar6 = local_28;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      local_28[uVar3] = '\0';
      local_24 = uVar3;
    }
  }
  else {
    local_1c[0] = (undefined1)param_1;
    uVar3 = 0xffffffff;
    local_18 = 0;
    pcVar5 = s_CRcCameraTriggerModel__SendTrigg_00691ff4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(s_CRcCameraTriggerModel__SendTrigg_00691ff4,~uVar3 - 1);
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcCame_00691e88,0x250
                                  ,local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  FUN_00505400(local_2c);
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_28 + -1);
    }
    else {
      local_28[-1] = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

