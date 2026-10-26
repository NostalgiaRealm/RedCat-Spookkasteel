/*
 * FUN_0059b730 at 0059b730
 * undefined FUN_0059b730(void)
 * Address ranges: 0059b730-0059b97c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0059b730(int param_1,undefined4 *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  char *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006446a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_0059b1f0();
  if (cVar1 == '\0') {
    local_1c[0] = param_2._0_1_;
    uVar8 = 0xffffffff;
    pcVar10 = s_invalid_destination_006a7164;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar8,1);
    if (cVar1 != '\0') {
      pcVar10 = s_invalid_destination_006a7164;
      pcVar11 = local_18;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_00404190(uVar8);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_WayPointId_IsValid___006a6d1c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a70c8,0x6a,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
  }
  FUN_0059b490();
  uVar3 = FUN_0059df90(*param_2);
  iVar4 = FUN_0059b1e0();
  iVar5 = FUN_0059b1e0();
  if (iVar5 != iVar4) {
    iVar4 = FUN_00598570();
    if (iVar4 != 0) {
      uVar6 = FUN_00598570();
      FUN_005afe30(s_waypoint_had__i_cursors_006a70b0,uVar6);
    }
    iVar4 = FUN_00598570();
    if (iVar4 != 0) {
      auStack_2c[0] = param_2._0_1_;
      uVar8 = 0xffffffff;
      pcVar10 = s_cursor_can_not_go_to_occupied_wa_006a713c;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8 - 1;
      pcStack_28 = (char *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
      cVar1 = FUN_00401940(uVar8,1);
      if (cVar1 != '\0') {
        pcVar10 = s_cursor_can_not_go_to_occupied_wa_006a713c;
        pcVar11 = pcStack_28;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        FUN_00404190(uVar8);
      }
      local_4 = 1;
      pcVar2 = (code *)FUN_005a07f0(s_destinationWayPoint_>GetNumberOf_006a710c,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a70c8,0x79,auStack_2c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      if (pcStack_28 != (char *)0x0) {
        cVar1 = pcStack_28[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0(pcStack_28 + -1);
        }
        else {
          pcStack_28[-1] = cVar1 + -1;
        }
      }
      pcStack_28 = (char *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
    }
    FUN_00598580(1);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  FUN_0059b1d0(param_2);
  puVar7 = (undefined4 *)FUN_00597fb0();
  *(undefined4 *)(param_1 + 0x20) = *puVar7;
  *(undefined4 *)(param_1 + 0x24) = puVar7[1];
  uVar3 = puVar7[2];
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  ExceptionList = pvStack_c;
  return;
}

