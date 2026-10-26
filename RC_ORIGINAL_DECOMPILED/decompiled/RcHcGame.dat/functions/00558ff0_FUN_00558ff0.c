/*
 * FUN_00558ff0 at 00558ff0
 * undefined FUN_00558ff0(void)
 * Address ranges: 00558ff0-0055922f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00558ff0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 local_3c [4];
  char *local_38;
  uint local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063edc0;
  local_c = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  if (DAT_006ba7c0 == 0) {
    ExceptionList = &local_c;
    pvVar5 = operator_new(0x6c);
    local_4 = 0;
    if (pvVar5 == (void *)0x0) {
      DAT_006ba7c0 = 0;
    }
    else {
      uVar6 = 0xffffffff;
      local_28 = 0;
      pcVar8 = s___Settings_Computer_ini_006a1830;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      local_24 = 0;
      local_20 = 0;
      FUN_004040f0(s___Settings_Computer_ini_006a1830,~uVar6 - 1);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar8 = s_Install_006a2554;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar4 = FUN_00401940(uVar6,1);
      if (cVar4 != '\0') {
        pcVar8 = s_Install_006a2554;
        pcVar10 = local_38;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar10 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar10 = pcVar10 + 1;
        }
        local_38[uVar6] = '\0';
        local_34 = uVar6;
      }
      local_4 = 2;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar8 = (char *)&DAT_006a254c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar4 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar4 = FUN_00401940(uVar6,1);
      if (cVar4 != '\0') {
        puVar9 = &DAT_006a254c;
        puVar11 = local_18;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        *(undefined1 *)((int)local_18 + uVar6) = 0;
        local_14 = uVar6;
      }
      bVar3 = true;
      bVar2 = true;
      bVar1 = true;
      local_4 = 3;
      DAT_006ba7c0 = FUN_005acaf0(local_1c,local_3c,&DAT_006a2548,local_2c,0);
    }
    local_4 = 5;
    if (bVar1) {
      FUN_004040a0(1);
    }
    if (bVar2) {
      if (local_38 != (char *)0x0) {
        cVar4 = local_38[-1];
        if ((cVar4 == '\0') || (cVar4 == -1)) {
          FUN_005fe5f0(local_38 + -1);
        }
        else {
          local_38[-1] = cVar4 + -1;
        }
      }
      local_38 = (char *)0x0;
      local_34 = 0;
      local_30 = 0;
    }
    local_4 = 0xffffffff;
    if (bVar3) {
      if (local_28 != 0) {
        cVar4 = *(char *)(local_28 + -1);
        if ((cVar4 == '\0') || (cVar4 == -1)) {
          FUN_005fe5f0((char *)(local_28 + -1));
        }
        else {
          *(char *)(local_28 + -1) = cVar4 + -1;
        }
      }
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
    }
    FUN_005ad400(1);
  }
  ExceptionList = local_c;
  return DAT_006ba7c0;
}

