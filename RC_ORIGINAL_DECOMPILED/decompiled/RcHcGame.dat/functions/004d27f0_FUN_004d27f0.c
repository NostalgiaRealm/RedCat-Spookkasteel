/*
 * FUN_004d27f0 at 004d27f0
 * undefined FUN_004d27f0(void)
 * Address ranges: 004d27f0-004d2ae3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004d27f0(int param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined4 uStack_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063158a;
  pvStack_c = ExceptionList;
  iVar7 = 0;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006993bc,0x10c);
  local_4 = 0;
  pvVar2 = operator_new(0x178);
  local_4._0_1_ = 1;
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_005033f0(local_1c,*(undefined4 *)(param_1 + 0xc),s_ModelController_0069931c);
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar7 = FUN_004d2190(uVar3);
  }
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_004040a0(1);
  }
  if (iVar7 == 0) {
    local_2c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_28;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_28 + uVar5) = 0;
      local_24 = uVar5;
    }
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s_result____0_0068f6c8,s_D__Work_RCHorror_AdamSource_Adam_006993bc
                                  ,0x111,local_2c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  pcVar11 = *(char **)(param_1 + 0xc);
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  local_4._0_1_ = 5;
  if (pcVar11 == (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    pcVar11 = &DAT_006b3f70;
  }
  else {
    uVar5 = 0xffffffff;
    pcVar10 = pcVar11;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
  }
  FUN_004040f0(pcVar11,~uVar5 - 1);
  FUN_00503ae0(local_2c);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  pcVar11 = *(char **)(param_1 + 0x10);
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  local_4._0_1_ = 6;
  if (pcVar11 != (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar10 = pcVar11;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar11,~uVar5 - 1);
  }
  FUN_0040cc00(local_2c,0,0xffffffff);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  cVar1 = FUN_004d21f0(param_1);
  if (cVar1 == '\0') {
    FUN_00502350(0);
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
    uStack_20 = 0;
    uVar5 = 0xffffffff;
    pcVar11 = s_Init___failed_0068f6b8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    local_2c[0] = (undefined1)param_1;
    FUN_004040f0(s_Init___failed_0068f6b8,~uVar5 - 1);
    local_4._0_1_ = 7;
    FUN_005035a0(local_2c);
    local_4._0_1_ = 0;
    if (local_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_28 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)((int)local_28 + -1) = cVar1 + -1;
        local_28 = (undefined4 *)0x0;
        local_24 = 0;
        uStack_20 = 0;
        goto LAB_004d2aa5;
      }
      FUN_005fe5f0((char *)((int)local_28 + -1));
    }
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
    uStack_20 = 0;
  }
  else {
    FUN_00502350(*(int *)(param_1 + 0x18) != 0);
  }
LAB_004d2aa5:
  FUN_004d1730(*(undefined4 *)(param_1 + 0x24));
  *(bool *)(iVar7 + 0xa9) = *(int *)(param_1 + 0x28) != 0;
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return iVar7;
}

