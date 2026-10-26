/*
 * FUN_005ac5c0 at 005ac5c0
 * undefined FUN_005ac5c0(void)
 * Address ranges: 005ac5c0-005ac8ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005ac7ed) */

void __thiscall FUN_005ac5c0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645c78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_2 + 8) == 0) {
    local_1c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_18 = *puVar8;
        puVar8 = puVar8 + 1;
        local_18 = local_18 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)local_18 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        local_18 = (undefined4 *)((int)local_18 + 1);
      }
      FUN_00404190(uVar5);
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_Name_length___>_0_006a8f28,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a8edc,0x7d,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  FUN_0040cc00(param_3,0,0xffffffff);
  *(undefined1 *)(param_1 + 0x44) = 0;
  FUN_0040cc00(param_2,0,0xffffffff);
  uVar5 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0;
  pcVar7 = &DAT_006b3f70;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar2 = FUN_00401940(uVar5,1);
  if (cVar2 != '\0') {
    puVar8 = (undefined4 *)&DAT_006b3f70;
    puVar10 = *(undefined4 **)(param_1 + 0x18);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    FUN_00404190(uVar5);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar5 = *(uint *)(param_4 + 8);
  if (uVar5 != 0) {
    if (param_1 + 0x50 == param_4) {
      FUN_0040c9b0(uVar5,0xffffffff);
      FUN_0040c9b0(0,0);
    }
    else {
      if (uVar5 != 0) {
        puVar4 = *(undefined1 **)(param_4 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        if ((byte)puVar4[-1] < 0xfe) {
          FUN_004040a0(1);
          puVar4 = *(undefined1 **)(param_4 + 4);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0064a3b4;
          }
          *(undefined1 **)(param_1 + 0x54) = puVar4;
          *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_4 + 8);
          *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_4 + 0xc);
          puVar4[-1] = puVar4[-1] + '\x01';
          goto LAB_005ac893;
        }
      }
      cVar2 = FUN_00401940(uVar5,1);
      if (cVar2 != '\0') {
        puVar8 = *(undefined4 **)(param_4 + 4);
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)&DAT_0064a3b4;
        }
        puVar10 = *(undefined4 **)(param_1 + 0x54);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(uint *)(param_1 + 0x58) = uVar5;
        *(undefined1 *)(*(int *)(param_1 + 0x54) + uVar5) = 0;
      }
    }
    goto LAB_005ac893;
  }
  FUN_0040cc00(&DAT_006cad80,0,0xffffffff);
  if (*(int *)(param_1 + 0x58) != 0) goto LAB_005ac893;
  uVar5 = 0xffffffff;
  pcVar7 = s___ADAMWIN_INI_00693bbc;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar6 = ~uVar5 - 1;
  uVar5 = FUN_0040ce00();
  if (uVar5 < uVar6) {
    FUN_005fe5fb();
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (((iVar1 == 0) || (cVar2 = *(char *)(iVar1 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
    if (uVar6 == 0) {
      FUN_004040a0(1);
      goto LAB_005ac893;
    }
    if ((0x1f < *(uint *)(param_1 + 0x5c)) || (*(uint *)(param_1 + 0x5c) < uVar6)) {
      FUN_004040a0(1);
      goto LAB_005ac7b2;
    }
  }
  else {
    if (uVar6 == 0) {
      *(char *)(iVar1 + -1) = cVar2 + -1;
      FUN_004040a0(0);
      goto LAB_005ac893;
    }
LAB_005ac7b2:
    FUN_00401a60(uVar6);
  }
  pcVar7 = s___ADAMWIN_INI_00693bbc;
  pcVar9 = *(char **)(param_1 + 0x54);
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_00404190(uVar6);
LAB_005ac893:
  FUN_005ac540();
  ExceptionList = pvStack_c;
  return;
}

