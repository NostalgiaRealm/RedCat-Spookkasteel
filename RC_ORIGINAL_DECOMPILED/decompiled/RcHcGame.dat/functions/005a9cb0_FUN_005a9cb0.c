/*
 * FUN_005a9cb0 at 005a9cb0
 * undefined FUN_005a9cb0(void)
 * Address ranges: 005a9cb0-005a9f92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005a9cb0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006459b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00517670();
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
    uVar5 = FUN_005ae390(local_2c,s_CDaviMainWindow__GetMessage___d__006a8954,
                         *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4));
    local_4 = 0;
    FUN_005aff00(uVar5);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0x12) {
    iVar2 = FUN_00517670();
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
      local_2c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar8 = s_CDaviMainWindow__GetMessage_____W_006a892c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar1 = FUN_00401940(uVar6,1);
      if (cVar1 != '\0') {
        pcVar8 = s_CDaviMainWindow__GetMessage_____W_006a892c;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)local_28 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          local_28 = local_28 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *local_28 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          local_28 = local_28 + 1;
        }
        FUN_00404190(uVar6);
      }
      local_4 = 1;
      FUN_005aefb0(local_2c);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      ExceptionList = local_c;
      return;
    }
  }
  else if (iVar4 == 0x10) {
    iVar2 = FUN_00517670();
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
      local_2c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar8 = s_CDaviMainWindow__GetMessage_____W_006a8900;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar1 = FUN_00401940(uVar6,1);
      if (cVar1 != '\0') {
        pcVar8 = s_CDaviMainWindow__GetMessage_____W_006a8900;
        pcVar9 = local_28;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar9 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar9 + 1;
        }
        local_28[uVar6] = '\0';
        local_24 = uVar6;
      }
      local_4 = 2;
      FUN_005aefb0(local_2c);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      ExceptionList = local_c;
      return;
    }
  }
  else if (iVar4 == 2) {
    iVar2 = FUN_00517670();
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
      uVar6 = 0xffffffff;
      pcVar8 = s_CDaviMainWindow__GetMessage_____W_006a88d4;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      local_1c[0] = (undefined1)param_1;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      FUN_004040f0(s_CDaviMainWindow__GetMessage_____W_006a88d4,~uVar6 - 1);
      local_4 = 3;
      FUN_005aefb0(local_1c);
      if (local_18 != 0) {
        cVar1 = *(char *)(local_18 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *(char *)(local_18 + -1) = cVar1 + -1;
          ExceptionList = local_c;
          return;
        }
        FUN_005fe5f0((char *)(local_18 + -1));
      }
    }
  }
  ExceptionList = local_c;
  return;
}

