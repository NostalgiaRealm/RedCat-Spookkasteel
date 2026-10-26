/*
 * FUN_005a0d70 at 005a0d70
 * undefined FUN_005a0d70(void)
 * Address ranges: 005a0d70-005a0fb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005a0d70(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_11c [4];
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644e81;
  pvStack_c = ExceptionList;
  iVar3 = *(int *)(param_1 + 0xfc);
  ExceptionList = &pvStack_c;
  if (iVar3 == -0x80000000) {
    puVar2 = *(undefined1 **)(param_1 + 0xb0);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    ExceptionList = &pvStack_c;
    iVar3 = FUN_0060af10(puVar2);
    *(int *)(param_1 + 0xfc) = iVar3;
  }
  if (iVar3 == 0) {
    iVar4 = FUN_005a0830();
    iVar3 = *(int *)(iVar4 + 100);
    if (iVar3 == -0x80000000) {
      puVar2 = *(undefined1 **)(iVar4 + 0x18);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &DAT_0064a3b4;
      }
      iVar3 = FUN_0060af10(puVar2);
      *(int *)(iVar4 + 100) = iVar3;
    }
    if (iVar3 != 0) {
      puVar2 = *(undefined1 **)(param_1 + 0x20);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_11c,s_Entering_critical_section___s___w_006a7894,puVar2);
      local_4 = 0;
      FUN_005aff00(uVar5);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
  }
  else {
    iVar4 = FUN_005a0830();
    iVar3 = *(int *)(iVar4 + 100);
    if (iVar3 == -0x80000000) {
      puVar2 = *(undefined1 **)(iVar4 + 0x18);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &DAT_0064a3b4;
      }
      iVar3 = FUN_0060af10(puVar2);
      *(int *)(iVar4 + 100) = iVar3;
    }
    if (iVar3 != 0) {
      puVar2 = *(undefined1 **)(param_1 + 0x20);
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_11c,s_Entering_critical_section___s___006a7874,puVar2);
      local_4 = 1;
      FUN_005aff00(uVar5);
      local_4 = 0xffffffff;
      if (local_118 != 0) {
        cVar1 = *(char *)(local_118 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_118 + -1));
        }
        else {
          *(char *)(local_118 + -1) = cVar1 + -1;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    local_118 = 0;
    local_114 = 0;
    local_110 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 2;
    pcVar6 = (code *)FUN_005a07f0(s__m_Active_006a7868,s_D__Work_RCHorror_AdamSource_Davi_006a7824,
                                  0x26,local_11c);
    (*pcVar6)();
    local_4 = 0xffffffff;
    if (local_118 != 0) {
      cVar1 = *(char *)(local_118 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_118 + -1));
      }
      else {
        *(char *)(local_118 + -1) = cVar1 + -1;
      }
    }
  }
  puVar9 = local_10c;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,0);
  FUN_005acdb0(local_10c);
  FUN_005a1a90(param_1);
  ExceptionList = pvStack_c;
  return;
}

