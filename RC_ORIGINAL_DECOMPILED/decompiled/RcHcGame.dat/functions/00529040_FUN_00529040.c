/*
 * FUN_00529040 at 00529040
 * undefined FUN_00529040(void)
 * Address ranges: 00529040-005293bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00529040(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char cStack_36;
  undefined1 uStack_35;
  int local_34;
  int iStack_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639b50;
  pvStack_c = ExceptionList;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  local_34 = param_1;
  if (param_2 == 0) {
    local_2c[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_28;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      FUN_00404190(uVar6);
    }
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_Level_IsNotNull___006a0030,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x249,local_2c);
    (*pcVar2)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
    if (param_2 == 0) {
      auStack_1c[0] = 0;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4._0_1_ = 2;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_1c);
      (*pcVar2)();
      local_4._0_1_ = 0;
      FUN_004040a0(1);
    }
  }
  uVar3 = FUN_00556560();
  piVar4 = (int *)FUN_005293f0(&iStack_30,uVar3);
  local_4._0_1_ = 3;
  if (*piVar4 != 0) {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *local_28 = *puVar8;
        puVar8 = puVar8 + 1;
        local_28 = local_28 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)local_28 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        local_28 = (undefined4 *)((int)local_28 + 1);
      }
      FUN_00404190(uVar6);
    }
    local_4._0_1_ = 4;
    pcVar2 = (code *)FUN_005a07f0(s_FindLevelByName__a_Level_>GetNam_006a0000,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x24a,local_2c);
    (*pcVar2)();
    local_4._0_1_ = 3;
    FUN_004040a0(1);
  }
  local_4._0_1_ = 0;
  if ((iStack_30 != 0) &&
     (iVar9 = *(int *)(iStack_30 + 0x14) + -1, *(int *)(iStack_30 + 0x14) = iVar9, iVar9 == 0)) {
    FUN_005abfc0(0);
  }
  if (param_2 == 0) {
    auStack_1c[0] = 0;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 5;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_1c);
    (*pcVar2)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  uVar3 = FUN_00556560();
  iVar9 = local_34;
  if (*(char *)(local_34 + 0x3c) != '\0') {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 6;
    pcVar2 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,s___AdamSource_DaviSortedList_h_00690798
                                  ,0x49,local_2c);
    (*pcVar2)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  iVar5 = FUN_00536af0(uVar3,&cStack_36);
  if (cStack_36 != '\0') {
    FUN_00409810(&DAT_006b3f70,&uStack_35);
    local_4._0_1_ = 7;
    pcVar2 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,0x4b,
                                  local_2c);
    (*pcVar2)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  FUN_004fdb90(*(int *)(iVar9 + 0x28) + iVar5 * 4,&param_2);
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar9 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar9, iVar9 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

