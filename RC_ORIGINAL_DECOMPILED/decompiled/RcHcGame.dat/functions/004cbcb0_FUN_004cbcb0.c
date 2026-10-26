/*
 * FUN_004cbcb0 at 004cbcb0
 * undefined FUN_004cbcb0(void)
 * Address ranges: 004cbcb0-004cc057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004cbcb0(int param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  uint uStack_24;
  undefined1 local_1c [4];
  char *pcStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630d38;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_1c[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = param_2;
    pcVar3 = (code *)FUN_005a07f0(s_a_DoorModel____0_00698dc8,
                                  s_D__Work_RCHorror_AdamSource_Adam_00698ddc,0x38,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  uVar1 = FUN_004cfc00(*(undefined4 *)(param_2 + 0x14),param_2);
  *(int *)(param_1 + 0x184) = param_2;
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18);
  *(bool *)(param_1 + 0x17c) = *(int *)(param_2 + 0x20) != 0;
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x28);
  *(bool *)(param_1 + 0x173) = *(int *)(param_2 + 0x1c) != 0;
  pcVar9 = *(char **)(param_2 + 0x2c);
  local_1c[0] = uVar1;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar11 = pcVar9;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(pcVar9,~uVar6 - 1);
  local_4 = 1;
  cVar2 = FUN_005add40(local_1c,0);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  if (cVar2 == '\0') {
    pcVar9 = *(char **)(param_2 + 0x2c);
    uVar6 = 0xffffffff;
    pcVar11 = pcVar9;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 == '\0') goto LAB_004cbeaf;
    pcVar11 = *(char **)(param_1 + 0x1a4);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  else {
    uVar4 = FUN_005ae390(local_1c,s_DoorModel___s__needs_keyname___s_00698d8c,
                         *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x2c));
    local_4 = 2;
    FUN_004c43b0(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 == '\0') goto LAB_004cbeaf;
    puVar8 = (undefined4 *)&DAT_006b3f70;
    puVar10 = *(undefined4 **)(param_1 + 0x1a4);
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
  }
  FUN_00404190(uVar6);
LAB_004cbeaf:
  if ((*(int *)(param_1 + 0x1a8) != 0) && (*(int *)(param_1 + 0x18c) == 0)) {
    local_1c[0] = uVar1;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = s_DoorType_0_shouldn_t_need_key_be_00698d50;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      pcVar9 = s_DoorType_0_shouldn_t_need_key_be_00698d50;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcStack_18 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcStack_18 = pcStack_18 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcStack_18 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcStack_18 = pcStack_18 + 1;
      }
      FUN_00404190(uVar6);
    }
    local_4 = 3;
    FUN_005035a0(local_1c);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  *(bool *)(param_1 + 0x172) = *(int *)(param_2 + 0x38) != 0;
  if (0.0 <= *(float *)(param_2 + 0x24)) {
    uVar4 = __ftol();
    *(undefined4 *)(param_1 + 0x174) = uVar4;
  }
  else {
    *(undefined4 *)(param_1 + 0x174) = 0xffffffff;
  }
  if (*(int *)(param_2 + 0x30) != 0) {
    *(undefined1 *)(param_1 + 0xaa) = 1;
  }
  pcVar9 = *(char **)(param_2 + 0x10);
  auStack_2c[0] = uVar1;
  FUN_004040a0(0);
  local_4 = 4;
  if (pcVar9 != (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar11 = pcVar9;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      pcVar11 = pcStack_28;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      pcStack_28[uVar6] = '\0';
      uStack_24 = uVar6;
    }
  }
  FUN_0040cc00(auStack_2c,0,0xffffffff);
  uVar5 = extraout_var;
  if (pcStack_28 != (char *)0x0) {
    cVar2 = pcStack_28[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(pcStack_28 + -1);
      uVar5 = extraout_var_00;
    }
    else {
      pcStack_28[-1] = cVar2 + -1;
    }
  }
  *(undefined1 *)(param_1 + 0x198) = 1;
  ExceptionList = pvStack_c;
  return CONCAT31(uVar5,uVar1);
}

