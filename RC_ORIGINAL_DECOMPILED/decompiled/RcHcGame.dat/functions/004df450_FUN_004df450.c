/*
 * FUN_004df450 at 004df450
 * undefined FUN_004df450(void)
 * Address ranges: 004df450-004df78a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004df450(int param_1)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063241a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069a0b8,0xa1);
  local_4 = 0;
  if (param_1 == 0) {
    local_1c[0] = 0;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      pcVar8 = &DAT_006b3f70;
      pcVar9 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      local_18[uVar6] = '\0';
      local_14 = uVar6;
    }
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_a_Timer____0_0069a168,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069a0b8,0xa3,local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  pvVar4 = operator_new(0x170);
  local_4._0_1_ = 2;
  if (pvVar4 == (void *)0x0) {
    param_1 = 0;
  }
  else {
    uVar5 = FUN_005033f0(local_1c,*(undefined4 *)(param_1 + 0xc),s_CommandTimer_0069a158);
    local_4 = CONCAT31(local_4._1_3_,3);
    param_1 = FUN_004df090(uVar5,param_1);
  }
  local_4 = 0;
  if ((pvVar4 != (void *)0x0) && (local_18 != (char *)0x0)) {
    cVar2 = local_18[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      local_18[-1] = cVar2 + -1;
    }
  }
  if (param_1 == 0) {
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    uVar5 = __ftol();
    uVar5 = __ftol(uVar5);
    uVar5 = __ftol(uVar5);
    uVar5 = FUN_005ae390(local_1c,s_Could_not_create_CAdamCommandTim_0069a11c,uVar5);
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_004c43e0(uVar5);
    if (local_18 != (char *)0x0) {
      cVar2 = local_18[-1];
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0(local_18 + -1);
      }
      else {
        local_18[-1] = cVar2 + -1;
      }
    }
    local_4 = 0xffffffff;
    FUN_005ae770();
    ExceptionList = pvStack_c;
    return 0;
  }
  pcVar8 = *(char **)(iVar1 + 0xc);
  local_1c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (pcVar8 == (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  }
  else {
    uVar6 = 0xffffffff;
    pcVar9 = pcVar8;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      pcVar9 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_00404190(uVar6);
    }
  }
  FUN_00503ae0(local_1c);
  local_4 = local_4 & 0xffffff00;
  FUN_004040a0(1);
  pcVar8 = *(char **)(iVar1 + 0x10);
  local_1c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  local_4._0_1_ = 7;
  if (pcVar8 != (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar9 = pcVar8;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(pcVar8,~uVar6 - 1);
  }
  FUN_0040cc00(local_1c,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_18 != (char *)0x0) {
    cVar2 = local_18[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      local_18[-1] = cVar2 + -1;
    }
  }
  local_18 = (char *)0x0;
  local_14 = 0;
  uStack_10 = 0;
  FUN_00502350(0);
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return param_1;
}

