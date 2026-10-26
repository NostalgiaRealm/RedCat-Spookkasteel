/*
 * FUN_005a10d0 at 005a10d0
 * undefined FUN_005a10d0(void)
 * Address ranges: 005a10d0-005a12bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005a10d0(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 local_11c [4];
  undefined4 *local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644ec6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_005a0830();
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    pcVar7 = s_SR_SUCCESS_006a7948;
    if (param_2 == '\0') {
      pcVar7 = s_SR_FAILURE_006a793c;
    }
    puVar3 = *(undefined1 **)(param_1 + 0x20);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_11c,s_Leaving_critical_section___s___r_006a7910,puVar3,pcVar7);
    local_4 = 0;
    FUN_005aff00(uVar5);
    local_4 = 0xffffffff;
    if (local_118 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_118 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_118 + -1));
      }
      else {
        *(char *)((int)local_118 + -1) = cVar1 + -1;
      }
    }
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    uVar8 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    local_118 = (undefined4 *)0x0;
    local_114 = 0;
    local_110 = 0;
    cVar1 = FUN_00401940(uVar8,1);
    if (cVar1 != '\0') {
      puVar10 = (undefined4 *)&DAT_006b3f70;
      puVar11 = local_118;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FUN_00404190(uVar8);
    }
    local_4 = 1;
    pcVar6 = (code *)FUN_005a07f0(s_m_Active_006a7904,s_D__Work_RCHorror_AdamSource_Davi_006a7824,
                                  0x3d,local_11c);
    (*pcVar6)();
    local_4 = 0xffffffff;
    if (local_118 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_118 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_118 + -1));
      }
      else {
        *(char *)((int)local_118 + -1) = cVar1 + -1;
      }
    }
  }
  puVar10 = local_10c;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,(param_2 != '\0') + '\x01');
  FUN_005acdb0(local_10c);
  FUN_005a1bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}

