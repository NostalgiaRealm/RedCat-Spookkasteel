/*
 * FUN_005356a0 at 005356a0
 * undefined FUN_005356a0(void)
 * Address ranges: 005356a0-00535922
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005356a0(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined1 local_b8 [4];
  char *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [4];
  undefined4 *local_a4;
  uint local_a0;
  undefined1 local_98 [4];
  undefined4 *local_94;
  undefined1 local_88 [124];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b7ec;
  local_c = ExceptionList;
  if (DAT_0069f650 == -1) {
    ExceptionList = &local_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_00693a14;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      puVar10 = (undefined4 *)&DAT_00693a14;
      puVar12 = local_94;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4 = 0;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = s_PlayerNumber_006a0bb8;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      pcVar9 = s_PlayerNumber_006a0bb8;
      pcVar11 = local_b4;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_00404190(uVar7);
    }
    local_4._0_1_ = 1;
    uVar2 = FUN_00436f90(local_88);
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar3 = FUN_005ac9d0(local_b8,local_98,1,uVar2,0);
    iVar5 = *(int *)(iVar3 + 100);
    if (iVar5 == -0x80000000) {
      puVar4 = *(undefined1 **)(iVar3 + 0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      iVar5 = FUN_0060af10(puVar4);
      *(int *)(iVar3 + 100) = iVar5;
    }
    DAT_0069f650 = iVar5;
    FUN_005acca0();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
    if (local_b4 != (char *)0x0) {
      cVar1 = local_b4[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_b4 + -1);
      }
      else {
        local_b4[-1] = cVar1 + -1;
      }
    }
    local_b4 = (char *)0x0;
    local_b0 = 0;
    local_ac = 0;
    local_4 = 0xffffffff;
    if (local_94 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_94 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_94 + -1));
      }
      else {
        *(char *)((int)local_94 + -1) = cVar1 + -1;
      }
    }
    if ((DAT_0069f650 < 1) || (10 < DAT_0069f650)) {
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar1 = FUN_00401940(uVar7,1);
      if (cVar1 != '\0') {
        puVar10 = (undefined4 *)&DAT_006b3f70;
        puVar12 = local_a4;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar12 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar12 = puVar12 + 1;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        *(undefined1 *)((int)local_a4 + uVar7) = 0;
        local_a0 = uVar7;
      }
      local_4 = 3;
      pcVar6 = (code *)FUN_005a07f0(s_playerNr_>__1____playerNr_<__10_006a0b98,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x815,local_a8);
      (*pcVar6)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
  }
  ExceptionList = local_c;
  return DAT_0069f650;
}

