/*
 * FUN_005b1140 at 005b1140
 * undefined FUN_005b1140(void)
 * Address ranges: 005b1140-005b1409
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b1140(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char acStack_424 [4];
  undefined1 local_420 [4];
  undefined4 *local_41c;
  uint local_418;
  char acStack_410 [256];
  char acStack_310 [256];
  char local_210 [256];
  char local_110 [260];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006461ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (0x103 < *(uint *)(param_1 + 8)) {
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_41c;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)(uVar4 + (int)local_41c) = 0;
      local_418 = uVar4;
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_Path_length___<_sizeof(_path_b_006a919c,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a9170,0x301,local_420);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  pcVar8 = *(char **)(param_1 + 4);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "";
  }
  uVar4 = 0xffffffff;
  do {
    pcVar9 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar8 = pcVar9 + -uVar4;
  pcVar9 = local_110;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_0060d5da(local_110,acStack_424,acStack_410,local_210,acStack_310);
  if (param_2 != 0) {
    uVar4 = 0xffffffff;
    pcVar8 = acStack_424;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      pcVar8 = acStack_424;
      pcVar9 = *(char **)(param_2 + 4);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      *(uint *)(param_2 + 8) = uVar4;
      *(undefined1 *)(*(int *)(param_2 + 4) + uVar4) = 0;
    }
  }
  if (param_3 != 0) {
    uVar4 = 0xffffffff;
    pcVar8 = acStack_410;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      pcVar8 = acStack_410;
      pcVar9 = *(char **)(param_3 + 4);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      *(uint *)(param_3 + 8) = uVar4;
      *(undefined1 *)(*(int *)(param_3 + 4) + uVar4) = 0;
    }
  }
  if (param_4 != 0) {
    uVar4 = 0xffffffff;
    pcVar8 = local_210;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      pcVar8 = local_210;
      pcVar9 = *(char **)(param_4 + 4);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      *(uint *)(param_4 + 8) = uVar4;
      *(undefined1 *)(uVar4 + *(int *)(param_4 + 4)) = 0;
    }
  }
  if (param_5 == 0) {
    ExceptionList = pvStack_c;
    return;
  }
  uVar4 = 0xffffffff;
  pcVar8 = acStack_310;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar4 - 1;
  uVar4 = FUN_0040ce00();
  if (uVar4 < uVar5) {
    FUN_005fe5fb();
  }
  iVar1 = *(int *)(param_5 + 4);
  if (((iVar1 == 0) || (cVar2 = *(char *)(iVar1 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
    if (uVar5 == 0) {
      FUN_004040a0(1);
      ExceptionList = pvStack_c;
      return;
    }
    if ((*(uint *)(param_5 + 0xc) < 0x20) && (uVar5 <= *(uint *)(param_5 + 0xc))) goto LAB_005b13cd;
    FUN_004040a0(1);
  }
  else if (uVar5 == 0) {
    *(char *)(iVar1 + -1) = cVar2 + -1;
    FUN_004040a0(0);
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00401a60(uVar5);
LAB_005b13cd:
  pcVar8 = acStack_310;
  pcVar9 = *(char **)(param_5 + 4);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  *(uint *)(param_5 + 8) = uVar5;
  *(undefined1 *)(*(int *)(param_5 + 4) + uVar5) = 0;
  ExceptionList = pvStack_c;
  return;
}

