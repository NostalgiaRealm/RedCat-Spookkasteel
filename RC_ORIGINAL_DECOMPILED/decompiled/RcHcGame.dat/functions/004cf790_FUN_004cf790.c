/*
 * FUN_004cf790 at 004cf790
 * undefined FUN_004cf790(void)
 * Address ranges: 004cf790-004cfa2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004cf790(int param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063118a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006990b8,0x19c);
  local_4 = 0;
  pvVar2 = operator_new(0x18c);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_005033f0(local_1c,*(undefined4 *)(param_1 + 0xc),s_ElevatorModel_00699000);
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar4 = FUN_004cea00(uVar3);
  }
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_004040a0(1);
  }
  if (iVar4 == 0) {
    local_1c[0] = (undefined1)param_1;
    uVar6 = 0xffffffff;
    local_18 = 0;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 4;
    pcVar5 = (code *)FUN_005a07f0(s_result____0_0068f6c8,s_D__Work_RCHorror_AdamSource_Adam_006990b8
                                  ,0x1a1,local_1c);
    (*pcVar5)();
    local_4._0_1_ = 0;
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
  pcVar8 = *(char **)(param_1 + 0xc);
  local_1c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  local_4._0_1_ = 5;
  if (pcVar8 == (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcVar8 = &DAT_006b3f70;
  }
  else {
    uVar6 = 0xffffffff;
    pcVar7 = pcVar8;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
  }
  FUN_004040f0(pcVar8,~uVar6 - 1);
  FUN_00503ae0(local_1c);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  pcVar8 = *(char **)(param_1 + 0x10);
  local_1c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  local_4._0_1_ = 6;
  if (pcVar8 != (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar7 = pcVar8;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar8,~uVar6 - 1);
  }
  FUN_0040cc00(local_1c,0,0xffffffff);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  cVar1 = FUN_004cea90(param_1);
  if (cVar1 == '\0') {
    FUN_00502350(0);
    local_1c[0] = (undefined1)param_1;
    uVar6 = 0xffffffff;
    local_18 = 0;
    pcVar8 = s_Init___failed_0068f6b8;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(s_Init___failed_0068f6b8,~uVar6 - 1);
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_005035a0(local_1c);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return iVar4;
}

