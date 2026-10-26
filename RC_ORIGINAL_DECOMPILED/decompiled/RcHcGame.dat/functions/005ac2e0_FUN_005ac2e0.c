/*
 * FUN_005ac2e0 at 005ac2e0
 * undefined FUN_005ac2e0(void)
 * Address ranges: 005ac2e0-005ac51a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005ac3ce) */

void FUN_005ac2e0(undefined *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645c58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 8) == 0) {
    local_1c[0] = param_1._0_1_;
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar4) = 0;
      local_14 = uVar4;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_IniFileName_length___>_0_006a8f0c,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a8edc,0x21,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
  }
  uVar4 = *(uint *)(param_1 + 8);
  if (param_1 == &DAT_006cad80) {
    if (DAT_006cad88 < uVar4) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar8 = -1;
    if (DAT_006cad88 - uVar4 != -1) {
      iVar8 = DAT_006cad88 - uVar4;
    }
    if (iVar8 != 0) {
      FUN_0060ab50((undefined1 *)((int)DAT_006cad84 + uVar4),
                   (undefined1 *)((int)DAT_006cad84 + uVar4) + iVar8,(DAT_006cad88 - iVar8) - uVar4)
      ;
      iVar8 = DAT_006cad88 - iVar8;
      cVar1 = FUN_00401940(iVar8,0);
      if (cVar1 != '\0') {
        FUN_00404190(iVar8);
      }
    }
    FUN_0040c9b0(0,0);
    ExceptionList = pvStack_c;
    return;
  }
  if (uVar4 != 0) {
    puVar3 = *(undefined1 **)(param_1 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    if ((byte)puVar3[-1] < 0xfe) {
      FUN_004040a0(1);
      DAT_006cad84 = *(undefined4 **)(param_1 + 4);
      if (DAT_006cad84 == (undefined4 *)0x0) {
        DAT_006cad84 = (undefined4 *)&DAT_0064a3b4;
      }
      DAT_006cad88 = *(uint *)(param_1 + 8);
      DAT_006cad8c = *(undefined4 *)(param_1 + 0xc);
      *(char *)((int)DAT_006cad84 + -1) = *(char *)((int)DAT_006cad84 + -1) + '\x01';
      ExceptionList = pvStack_c;
      return;
    }
  }
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)&DAT_0064a3b4;
    }
    puVar9 = DAT_006cad84;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    FUN_00404190(uVar4);
  }
  ExceptionList = pvStack_c;
  return;
}

