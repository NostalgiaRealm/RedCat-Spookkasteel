/*
 * FUN_004cea90 at 004cea90
 * undefined FUN_004cea90(void)
 * Address ranges: 004cea90-004cee57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_004cea90(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631068;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_1c[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00404190(uVar6);
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_ElevatorModel____0_006990a0,
                                  s_D__Work_RCHorror_AdamSource_Adam_006990b8,0x28,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  uVar2 = FUN_004cfc00(*(undefined4 *)(param_2 + 0x1c),param_2);
  *(int *)(param_1 + 0x178) = param_2;
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x20);
  *(bool *)(param_1 + 0x16e) = *(int *)(param_2 + 0x24) != 0;
  uVar4 = __ftol();
  *(undefined4 *)(param_1 + 0x170) = uVar4;
  if (*(int *)(param_2 + 0x14) == 0) {
    local_1c[0] = uVar2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00404190(uVar6);
    }
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_a_ElevatorModel_>DoorAtBegin____0_0069907c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006990b8,0x37,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar5 = FUN_004cd4d0(*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x14));
  *(int *)(param_1 + 0x17c) = iVar5;
  if (iVar5 == 0) {
    local_1c[0] = uVar2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00404190(uVar6);
    }
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_DoorAtBegin____0_00699068,
                                  s_D__Work_RCHorror_AdamSource_Adam_006990b8,0x39,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (*(int *)(param_2 + 0x18) == 0) {
    local_1c[0] = uVar2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar6) = 0;
      uStack_14 = uVar6;
    }
    local_4 = 3;
    pcVar3 = (code *)FUN_005a07f0(s_a_ElevatorModel_>DoorAtEnd____0_00699048,
                                  s_D__Work_RCHorror_AdamSource_Adam_006990b8,0x3b,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar5 = FUN_004cd4d0(*(undefined4 *)(*(int *)(param_2 + 0x18) + 0x14));
  *(int *)(param_1 + 0x180) = iVar5;
  if (iVar5 == 0) {
    uVar6 = 0xffffffff;
    iStack_28 = 0;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uStack_24 = 0;
    uStack_20 = 0;
    auStack_2c[0] = uVar2;
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_DoorAtEnd____0_00699034,
                                  s_D__Work_RCHorror_AdamSource_Adam_006990b8,0x3d,auStack_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (iStack_28 != 0) {
      cVar1 = *(char *)(iStack_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_28 + -1));
      }
      else {
        *(char *)(iStack_28 + -1) = cVar1 + -1;
      }
    }
    iStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
  }
  FUN_004cc130(param_1);
  FUN_004cc130(param_1);
  ExceptionList = pvStack_c;
  return uVar2;
}

