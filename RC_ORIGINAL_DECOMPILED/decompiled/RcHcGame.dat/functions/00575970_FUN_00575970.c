/*
 * FUN_00575970 at 00575970
 * undefined FUN_00575970(void)
 * Address ranges: 00575970-00575dbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00575970(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_4c [4];
  char *local_48;
  int local_44;
  undefined4 uStack_40;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006416db;
  pvStack_c = ExceptionList;
  local_4 = 0;
  local_4c[0] = (undefined1)param_2;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_4._0_1_ = 1;
  switch(*(undefined4 *)(param_1 + 0x148)) {
  case 0:
  case 3:
    break;
  case 1:
    uVar2 = FUN_005033f0(local_2c,**(undefined4 **)(param_1 + 0xf8),s_AdamActor_006a4aa4);
    local_4._0_1_ = 2;
    FUN_0040cc00(uVar2,0,0xffffffff);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    uVar7 = 0xffffffff;
    pcVar9 = s_trip_bomb_act_006a4a94;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_trip_bomb_act_006a4a94,~uVar7 - 1);
    break;
  case 2:
    uVar2 = FUN_005033f0(local_1c,**(undefined4 **)(param_1 + 0xf8),s_AdamActor_006a4aa4);
    local_4._0_1_ = 3;
    FUN_0040cc00(uVar2,0,0xffffffff);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    uVar7 = 0xffffffff;
    pcVar9 = s_trip_detect_act_006a4a84;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      pcVar9 = s_trip_detect_act_006a4a84;
      pcVar10 = local_48;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_00404190(uVar7);
    }
    break;
  default:
    local_3c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = s_Invalid_case_0068d650;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      pcVar9 = s_Invalid_case_0068d650;
      pcVar10 = local_38;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_00404190(uVar7);
    }
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006a4908,0x1de
                                  ,local_3c);
    (*pcVar3)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  if (local_44 != 0) {
    pvVar4 = operator_new(0x294);
    local_4._0_1_ = 5;
    if (pvVar4 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_0049b240(param_1 + 0x16c,local_4c);
    }
    local_4._0_1_ = 1;
    if (piVar5 == (int *)0x0) {
      local_3c[0] = (undefined1)param_2;
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
        pcVar9 = &DAT_006b3f70;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)local_38 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          local_38 = local_38 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *local_38 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          local_38 = local_38 + 1;
        }
        FUN_00404190(uVar7);
      }
      local_4._0_1_ = 6;
      pcVar3 = (code *)FUN_005a07f0(s_actor_006a4a7c,s_D__Work_RCHorror_AdamSource_Adam_006a4908,
                                    0x1e5,local_3c);
      (*pcVar3)();
      local_4._0_1_ = 1;
      FUN_004040a0(1);
    }
    (**(code **)(*piVar5 + 0x4c))(param_1 + 0xfc);
    FUN_00502350(1);
    local_3c[0] = (undefined1)param_2;
    pcVar9 = *(char **)(*(int *)(param_1 + 0xf8) + 4);
    FUN_004040a0(0);
    local_4._0_1_ = 7;
    if (pcVar9 != (char *)0x0) {
      uVar7 = 0xffffffff;
      pcVar10 = pcVar9;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(pcVar9,~uVar7 - 1);
    }
    FUN_0040cc00(local_3c,0,0xffffffff);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    FUN_0040cc00(param_1 + 0x5c,0,0xffffffff);
    FUN_0049ced0(param_1 + 0x120);
    if (*(int *)(param_1 + 0x148) != 3) {
      *(undefined1 *)(piVar5 + 0x80) = 1;
      piVar5[0x81] = (int)&LAB_005773c0;
    }
    if (param_2 == 0) {
      local_3c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 8;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_3c);
      (*pcVar3)();
      local_4._0_1_ = 1;
      FUN_004040a0(1);
    }
    FUN_004f41c0(piVar5);
  }
  if (local_48 != (char *)0x0) {
    cVar1 = local_48[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_48 + -1);
    }
    else {
      local_48[-1] = cVar1 + -1;
    }
  }
  local_48 = (char *)0x0;
  local_44 = 0;
  uStack_40 = 0;
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar6 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar6, iVar6 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

