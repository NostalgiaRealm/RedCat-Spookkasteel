/*
 * FUN_00599120 at 00599120
 * undefined FUN_00599120(void)
 * Address ranges: 00599120-00599448
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00599120(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00644298;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00599450(local_20);
  local_4._0_1_ = 1;
  iVar2 = FUN_0059b1e0();
  iVar3 = FUN_0059b1e0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005630e0();
  if (iVar2 == iVar3) {
    iVar3 = FUN_005195f0();
    iVar2 = *(int *)(iVar3 + 100);
    if (iVar2 == -0x80000000) {
      puVar4 = *(undefined1 **)(iVar3 + 0x18);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      iVar2 = FUN_0060af10(puVar4);
      *(int *)(iVar3 + 100) = iVar2;
    }
    if (iVar2 != 0) {
      FUN_0059df90(param_1);
      iVar2 = FUN_00597fa0();
      puVar4 = &DAT_0064a3b4;
      if (*(undefined1 **)(iVar2 + 4) != (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)(iVar2 + 4);
      }
      puVar5 = (undefined4 *)FUN_00599450(local_20);
      local_4._0_1_ = 2;
      iVar2 = FUN_00597fa0();
      puVar6 = *(undefined1 **)(iVar2 + 4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar7 = FUN_005ae390(local_1c,s_You_ve_tried_to_link_WayPoint__s_006a6e8c,puVar6,*puVar5,
                           puVar4,param_1);
      local_4._0_1_ = 3;
      FUN_005aff00(uVar7);
      local_4._0_1_ = 2;
      FUN_004040a0(1);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_005630e0();
    }
  }
  else {
    cVar1 = FUN_00598f20(param_1);
    if (cVar1 == '\0') {
      iVar2 = 0;
      do {
        cVar1 = FUN_0059b1f0();
        if (cVar1 == '\0') {
          FUN_0059b1d0(&param_1);
          goto LAB_00599423;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 8);
      local_1c[0] = (undefined1)param_1;
      uVar9 = 0xffffffff;
      pcVar11 = s_can_not_add_more_links_to_this_w_006a6e08;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9 - 1;
      local_18 = (char *)0x0;
      local_14 = 0;
      local_10 = 0;
      cVar1 = FUN_00401940(uVar9,1);
      if (cVar1 != '\0') {
        pcVar11 = s_can_not_add_more_links_to_this_w_006a6e08;
        pcVar12 = local_18;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar12 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar12 = pcVar12 + 1;
        }
        local_18[uVar9] = '\0';
        local_14 = uVar9;
      }
      local_4 = CONCAT31(local_4._1_3_,6);
      pcVar8 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006a6cec,
                                    0x1c3,local_1c);
      (*pcVar8)();
      if (local_18 != (char *)0x0) {
        cVar1 = local_18[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0(local_18 + -1);
        }
        else {
          local_18[-1] = cVar1 + -1;
        }
      }
      local_18 = (char *)0x0;
      local_14 = 0;
      local_10 = 0;
    }
    else {
      iVar3 = FUN_005195f0();
      iVar2 = *(int *)(iVar3 + 100);
      if (iVar2 == -0x80000000) {
        puVar4 = *(undefined1 **)(iVar3 + 0x18);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0064a3b4;
        }
        iVar2 = FUN_0060af10(puVar4);
        *(int *)(iVar3 + 100) = iVar2;
      }
      if (iVar2 != 0) {
        FUN_0059df90(param_1);
        iVar2 = FUN_00597fa0();
        puVar4 = &DAT_0064a3b4;
        if (*(undefined1 **)(iVar2 + 4) != (undefined1 *)0x0) {
          puVar4 = *(undefined1 **)(iVar2 + 4);
        }
        iVar2 = FUN_00597fa0();
        puVar6 = *(undefined1 **)(iVar2 + 4);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        FUN_00599450(local_20);
        local_4._0_1_ = 4;
        uVar7 = FUN_0059b1e0(puVar4);
        uVar7 = FUN_0059b1e0(puVar6,uVar7);
        uVar7 = FUN_005ae390(local_1c,s_WayPoint__i____s___and_WayPoint___006a6e34,uVar7);
        local_4 = CONCAT31(local_4._1_3_,5);
        FUN_005aff00(uVar7);
        if (local_18 != (char *)0x0) {
          cVar1 = *(char *)((int)local_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0((char *)((int)local_18 + -1));
          }
          else {
            *(char *)((int)local_18 + -1) = cVar1 + -1;
          }
        }
        local_18 = (char *)0x0;
        local_14 = 0;
        local_10 = 0;
        local_4 = local_4 & 0xffffff00;
        FUN_005630e0();
      }
    }
  }
LAB_00599423:
  local_4 = 0xffffffff;
  FUN_005630e0();
  ExceptionList = local_c;
  return;
}

