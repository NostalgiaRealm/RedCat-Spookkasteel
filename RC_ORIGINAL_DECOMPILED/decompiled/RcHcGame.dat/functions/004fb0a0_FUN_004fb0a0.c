/*
 * FUN_004fb0a0 at 004fb0a0
 * undefined FUN_004fb0a0(void)
 * Address ranges: 004fb0a0-004fb2fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004fb0a0(int param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_ac [4];
  char *local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined1 local_9c [4];
  char *local_98;
  uint local_94;
  undefined4 local_90;
  int local_8c;
  undefined1 local_88 [4];
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635311;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_2 = 0;
  *param_3 = 0;
  local_8c = param_1;
  FUN_004f3d80();
  cVar1 = FUN_004fef40();
  if (cVar1 != '\0') {
    if (*(int *)(param_1 + 0x3f0) == 0) {
      pcVar8 = *(char **)(param_1 + 0x20);
      if (pcVar8 == (char *)0x0) {
        pcVar8 = "";
      }
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar9 = pcVar8;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar1 = FUN_00401940(uVar6,1);
      if (cVar1 != '\0') {
        pcVar9 = local_98;
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
        local_98[uVar6] = '\0';
        local_94 = uVar6;
      }
      local_4 = 0;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar8 = s_NrSecrets_00694b2c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar1 = FUN_00401940(uVar6,1);
      if (cVar1 != '\0') {
        pcVar8 = s_NrSecrets_00694b2c;
        pcVar9 = local_a8;
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
        local_a8[uVar6] = '\0';
        local_a4 = uVar6;
      }
      local_4._0_1_ = 1;
      uVar2 = FUN_00436f90(local_88);
      local_4 = CONCAT31(local_4._1_3_,2);
      iVar3 = FUN_005ac9d0(local_ac,local_9c,0,uVar2,0);
      iVar5 = *(int *)(iVar3 + 100);
      if (iVar5 == -0x80000000) {
        puVar4 = *(undefined1 **)(iVar3 + 0x18);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        iVar5 = FUN_0060af10(puVar4);
        *(int *)(iVar3 + 100) = iVar5;
      }
      *param_2 = iVar5;
      FUN_005acca0();
      if (local_84 != 0) {
        cVar1 = *(char *)(local_84 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_84 + -1));
        }
        else {
          *(char *)(local_84 + -1) = cVar1 + -1;
        }
      }
      local_84 = 0;
      local_80 = 0;
      local_7c = 0;
      if (local_a8 != (char *)0x0) {
        cVar1 = local_a8[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0(local_a8 + -1);
        }
        else {
          local_a8[-1] = cVar1 + -1;
        }
      }
      local_a8 = (char *)0x0;
      local_a4 = 0;
      local_a0 = 0;
      local_4 = 0xffffffff;
      if (local_98 != (char *)0x0) {
        cVar1 = local_98[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0(local_98 + -1);
        }
        else {
          local_98[-1] = cVar1 + -1;
        }
      }
      local_98 = (char *)0x0;
      local_94 = 0;
      local_90 = 0;
      FUN_004f3d80();
      uVar2 = FUN_004fef80();
      *param_3 = uVar2;
    }
    else {
      *param_2 = *(int *)(param_1 + 0x3f0);
      *param_3 = *(undefined4 *)(param_1 + 0x3f4);
    }
  }
  ExceptionList = local_c;
  return;
}

