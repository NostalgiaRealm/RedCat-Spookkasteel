/*
 * FUN_004532e0 at 004532e0
 * undefined FUN_004532e0(void)
 * Address ranges: 004532e0-00453557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004532e0(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int local_34;
  int *piStack_30;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006264a8;
  pvStack_c = ExceptionList;
  local_34 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    local_34 = FUN_004bc480();
  }
  if (*(int *)(local_34 + 0x3a4) == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *local_18 = *puVar8;
        puVar8 = puVar8 + 1;
        local_18 = local_18 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)local_18 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        local_18 = (undefined4 *)((int)local_18 + 1);
      }
      FUN_00404190(uVar6);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  piStack_30 = (int *)FUN_00453d20(&local_34);
  local_4 = 1;
  if (*piStack_30 == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar11 = puStack_28;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined1 *)((int)puStack_28 + uVar6) = 0;
      uStack_24 = uVar6;
    }
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_2c);
    (*pcVar2)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  uVar3 = FUN_004f3d80(0,&CAdamSubLevelSettings::RTTI_Type_Descriptor,
                       &CRcSubLevelSettings::RTTI_Type_Descriptor,0);
  iVar4 = FUN_0060a6f2(uVar3);
  local_4 = 0xffffffff;
  if (local_34 != 0) {
    iVar9 = *(int *)(local_34 + 0x14) + -1;
    *(int *)(local_34 + 0x14) = iVar9;
    if (iVar9 == 0) {
      FUN_005abfc0(0);
    }
    local_34 = 0;
  }
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = FUN_0049b020();
    (**(code **)(**(int **)(param_1 + 0x94) + 0xc))(uVar3);
  }
  if ((*(int **)(param_1 + 0x90) != (int *)0x0) && (*(int *)(param_1 + 0x94) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0x10))();
    iVar4 = **(int **)(param_1 + 0x94);
    uVar5 = FUN_00439e20();
    (**(code **)(iVar4 + 4))(uVar5);
    (**(code **)(**(int **)(param_1 + 0x94) + 0x10))();
  }
  if ((*(int **)(param_1 + 0x98) != (int *)0x0) && (*(int *)(param_1 + 0x9c) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x98) + 0x10))();
    (**(code **)(**(int **)(param_1 + 0x9c) + 4))(uVar3);
    (**(code **)(**(int **)(param_1 + 0x9c) + 0x10))();
  }
  ExceptionList = pvStack_c;
  return;
}

