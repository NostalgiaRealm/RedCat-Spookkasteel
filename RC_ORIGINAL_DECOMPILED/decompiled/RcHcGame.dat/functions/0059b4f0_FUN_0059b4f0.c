/*
 * FUN_0059b4f0 at 0059b4f0
 * undefined FUN_0059b4f0(void)
 * Address ranges: 0059b4f0-0059b721
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0059b4f0(int param_1,undefined4 *param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
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
  puStack_8 = &LAB_00644680;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_0059b1f0();
  if (cVar1 == '\0') {
    local_1c[0] = param_2._0_1_;
    uVar6 = 0xffffffff;
    pcVar8 = s_invalid_current_006a70fc;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      pcVar8 = s_invalid_current_006a70fc;
      pcVar9 = local_18;
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
      FUN_00404190(uVar6);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_WayPointId_IsValid___006a6d1c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a70c8,0x4e,local_1c);
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
  FUN_0059b450();
  FUN_0059df90(*param_2);
  iVar3 = FUN_0059b1e0();
  iVar4 = FUN_0059b1e0();
  if (iVar4 != iVar3) {
    iVar3 = FUN_00598570();
    if (iVar3 != 0) {
      uVar5 = FUN_00598570();
      FUN_005afe30(s_waypoint_had__i_cursors_006a70b0,uVar5);
    }
    iVar3 = FUN_00598570();
    if (iVar3 != 0) {
      auStack_2c[0] = param_2._0_1_;
      uVar6 = 0xffffffff;
      pcVar8 = s_cursor_can_not_be_at_occupied_wa_006a7088;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      pcStack_28 = (char *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
      cVar1 = FUN_00401940(uVar6,1);
      if (cVar1 != '\0') {
        pcVar8 = s_cursor_can_not_be_at_occupied_wa_006a7088;
        pcVar9 = pcStack_28;
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
        FUN_00404190(uVar6);
      }
      local_4 = 1;
      pcVar2 = (code *)FUN_005a07f0(s_currentWayPoint_>GetNumberOfCurs_006a705c,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a70c8,0x5d,auStack_2c);
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
  FUN_0059b1d0(param_2);
  *(undefined1 *)(param_1 + 0x34) = 1;
  ExceptionList = pvStack_c;
  return;
}

