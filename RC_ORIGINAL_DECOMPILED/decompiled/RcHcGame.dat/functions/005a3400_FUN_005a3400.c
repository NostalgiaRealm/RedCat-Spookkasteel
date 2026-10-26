/*
 * FUN_005a3400 at 005a3400
 * undefined FUN_005a3400(void)
 * Address ranges: 005a3400-005a3610
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005a3500) */

void __thiscall FUN_005a3400(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645218;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_005a37c0();
  if (cVar1 != '\0') {
    local_1c[0] = (undefined1)param_2;
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar10 = (undefined4 *)&DAT_006b3f70;
      puVar12 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar6) = 0;
      local_14 = uVar6;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s___IsOpen___006a7b68,s_D__Work_RCHorror_AdamSource_Davi_006a7a50,
                                  0x1d9,local_1c);
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
  uVar6 = *(uint *)(param_2 + 8);
  if (param_1 + 0x18 == param_2) {
    if (*(uint *)(param_1 + 0x20) < uVar6) {
      FUN_005fe747();
    }
    FUN_0040ce10();
    iVar3 = *(int *)(param_1 + 0x20) - uVar6;
    iVar9 = -1;
    if (iVar3 != -1) {
      iVar9 = iVar3;
    }
    if (iVar9 != 0) {
      iVar8 = uVar6 + *(int *)(param_1 + 0x1c);
      FUN_0060ab50(iVar8,iVar8 + iVar9,iVar3 - iVar9);
      iVar9 = *(int *)(param_1 + 0x20) - iVar9;
      cVar1 = FUN_00401940(iVar9,0);
      if (cVar1 != '\0') {
        FUN_00404190(iVar9);
      }
    }
    FUN_0040c9b0(0,0);
  }
  else {
    if (uVar6 != 0) {
      puVar4 = *(undefined1 **)(param_2 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      if ((byte)puVar4[-1] < 0xfe) {
        FUN_004040a0(1);
        puVar4 = *(undefined1 **)(param_2 + 4);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        *(undefined1 **)(param_1 + 0x1c) = puVar4;
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0xc);
        puVar4[-1] = puVar4[-1] + '\x01';
        goto LAB_005a35e7;
      }
    }
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar10 = *(undefined4 **)(param_2 + 4);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar12 = *(undefined4 **)(param_1 + 0x1c);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      FUN_00404190(uVar6);
    }
  }
LAB_005a35e7:
  uVar5 = FUN_005a37d0(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  FUN_005a37c0();
  ExceptionList = pvStack_c;
  return;
}

