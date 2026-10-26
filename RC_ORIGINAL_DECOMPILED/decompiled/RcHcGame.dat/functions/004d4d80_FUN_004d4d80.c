/*
 * FUN_004d4d80 at 004d4d80
 * undefined FUN_004d4d80(void)
 * Address ranges: 004d4d80-004d5078
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004d4d80(int param_1)

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
  undefined1 auStack_3c [4];
  char *pcStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006318e2;
  pvStack_c = ExceptionList;
  iVar7 = 0;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x198);
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_005033f0(local_1c,*(undefined4 *)(param_1 + 0xc),s_Trigger_006995a8);
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar7 = FUN_004d32c0(uVar3);
  }
  local_4 = 0xffffffff;
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
    local_4 = 3;
    pcVar4 = (code *)FUN_005a07f0(s_trigger____0_0069226c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006995e4,0x1ca,local_2c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  pcVar11 = *(char **)(param_1 + 0x10);
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  local_4 = 4;
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
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  pcVar11 = *(char **)(param_1 + 0xc);
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  local_4 = 5;
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
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  *(bool *)(iVar7 + 0xa9) = *(int *)(param_1 + 0x44) != 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(undefined1 **)(param_1 + 0x2c) = &DAT_006b3f70;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    *(undefined1 **)(param_1 + 0x30) = &DAT_006b3f70;
  }
  cVar1 = FUN_004d3460(param_1);
  if (cVar1 == '\0') {
    FUN_00502350(0);
    pcStack_38 = (char *)0x0;
    uStack_34 = 0;
    uStack_30 = 0;
    uVar5 = 0xffffffff;
    pcVar11 = s_Init___failed_0068f6b8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    auStack_3c[0] = (undefined1)param_1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      pcVar11 = s_Init___failed_0068f6b8;
      pcVar10 = pcStack_38;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar10 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_00404190(uVar5);
    }
    local_4 = 6;
    FUN_005035a0(auStack_3c);
    if (pcStack_38 != (char *)0x0) {
      cVar1 = pcStack_38[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(pcStack_38 + -1);
      }
      else {
        pcStack_38[-1] = cVar1 + -1;
      }
    }
  }
  else {
    FUN_00502350(*(int *)(param_1 + 0x3c) != 0);
  }
  ExceptionList = pvStack_c;
  return iVar7;
}

