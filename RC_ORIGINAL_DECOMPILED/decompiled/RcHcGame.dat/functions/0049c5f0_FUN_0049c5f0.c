/*
 * FUN_0049c5f0 at 0049c5f0
 * undefined FUN_0049c5f0(void)
 * Address ranges: 0049c5f0-0049c874
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0049c5f0(int param_1,undefined4 param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int aiStack_24 [2];
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c9b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_00694c70,400);
  local_4 = 0;
  if (*(char *)(param_1 + 0x10c) != '\0') {
    local_1c[0] = (undefined1)param_2;
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
      puVar9 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00404190(uVar6);
    }
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s___m_Initialized_00694cac,
                                  s_D__Work_RCHorror_AdamSource_Adam_00694c70,0x191,local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar3 = FUN_0055b280();
  }
  if (*(int *)(iVar3 + 0xf8) == 0) {
    local_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_ActorDefMgr_00694c9c,s___AdamSource_AdamEngine_h_0068eb58,
                                  0x182,local_1c);
    (*pcVar2)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  piVar4 = (int *)FUN_0049fe30(aiStack_24,param_2);
  local_4._0_1_ = 3;
  iVar3 = *(int *)(param_1 + 0x110);
  if (iVar3 != *piVar4) {
    if ((iVar3 != 0) &&
       (iVar5 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar5, iVar5 == 0)) {
      FUN_005abfc0(0);
    }
    iVar3 = *piVar4;
    *(int *)(param_1 + 0x110) = iVar3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((aiStack_24[0] != 0) &&
     (iVar3 = *(int *)(aiStack_24[0] + 0x14) + -1, *(int *)(aiStack_24[0] + 0x14) = iVar3,
     iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  if (*(int *)(param_1 + 0x110) == 0) {
    local_1c[0] = (undefined1)param_2;
    uVar6 = 0xffffffff;
    local_18 = (undefined4 *)0x0;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uStack_14 = 0;
    uStack_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 4;
    pcVar2 = (code *)FUN_005a07f0(s___m_ActorDef_IsNull___00694c4c,
                                  s_D__Work_RCHorror_AdamSource_Adam_00694c70,0x195,local_1c);
    (*pcVar2)();
    local_4._0_1_ = 0;
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = (undefined4 *)0x0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  FUN_0049c2a0();
  *(undefined1 *)(param_1 + 0x10c) = 1;
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

