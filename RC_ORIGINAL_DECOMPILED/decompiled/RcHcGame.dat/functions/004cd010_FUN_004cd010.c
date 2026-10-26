/*
 * FUN_004cd010 at 004cd010
 * undefined FUN_004cd010(void)
 * Address ranges: 004cd010-004cd2e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004cd010(int param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
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
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630e82;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_00698ddc,0x29b);
  local_4 = 0;
  pvVar2 = operator_new(0x1c0);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_005033f0(local_1c,*(undefined4 *)(param_1 + 0xc),&DAT_00698e58);
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar4 = FUN_004cbb50(uVar3);
  }
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_004040a0(1);
  }
  if (iVar4 == 0) {
    local_1c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
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
    local_4._0_1_ = 4;
    pcVar5 = (code *)FUN_005a07f0(s_result____0_0068f6c8,s_D__Work_RCHorror_AdamSource_Adam_00698ddc
                                  ,0x2a0,local_1c);
    (*pcVar5)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(undefined1 *)(iVar4 + 0xa9) = 1;
  }
  FUN_00502350(*(int *)(param_1 + 0x34) != 0);
  pcVar8 = *(char **)(param_1 + 0xc);
  local_1c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (pcVar8 == (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  }
  else {
    uVar6 = 0xffffffff;
    pcVar9 = pcVar8;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
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
  cVar1 = FUN_004cbcb0(param_1);
  if (cVar1 == '\0') {
    FUN_00502350(0);
    uVar6 = 0xffffffff;
    pcVar8 = s_Init___failed_0068f6b8;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    uStack_10 = 0;
    local_1c[0] = (undefined1)param_1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      pcVar8 = s_Init___failed_0068f6b8;
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
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_005035a0(local_1c);
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
    local_18 = (char *)0x0;
    local_14 = 0;
    uStack_10 = 0;
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return iVar4;
}

