/*
 * FUN_0055d330 at 0055d330
 * undefined FUN_0055d330(void)
 * Address ranges: 0055d330-0055d665
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0055d330(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  char *pcVar10;
  undefined1 local_3c [4];
  undefined4 *local_38;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063f740;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_3c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar3 = FUN_00401940(uVar6,1);
    if (cVar3 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *local_38 = *puVar8;
        puVar8 = puVar8 + 1;
        local_38 = local_38 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)local_38 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        local_38 = (undefined4 *)((int)local_38 + 1);
      }
      FUN_00404190(uVar6);
    }
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_a_SubLevel_IsNotNull___00690830,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x20b,local_3c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  for (piVar9 = *(int **)(param_1 + 0xec); piVar9 != *(int **)(param_1 + 0xf0); piVar9 = piVar9 + 1)
  {
    if (*piVar9 == param_2) {
      if (*piVar9 != 0) goto LAB_0055d47f;
      local_3c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      goto code_r0x0055d438;
    }
  }
  auStack_1c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar10 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar3 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar3 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_4._0_1_ = 5;
  pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x216,
                                auStack_1c);
  (*pcVar4)();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar5 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar5, iVar5 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
  while( true ) {
    uVar6 = uVar6 - 1;
    cVar3 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    if (cVar3 == '\0') break;
code_r0x0055d438:
    if (uVar6 == 0) break;
  }
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_4._0_1_ = 2;
  pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,local_3c)
  ;
  (*pcVar4)();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0(1);
LAB_0055d47f:
  iVar5 = *piVar9;
  if (*(int *)(iVar5 + 0x5c) == 0) {
    auStack_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 3;
    pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,auStack_2c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  uVar1 = *(undefined4 *)(iVar5 + 0x5c);
  if (*(int *)(param_1 + 0x100) == 0) {
    auStack_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s_m_Engine_006934e0,s___AdamSource_AdamEngine_h_0068eb58,0x1ad,
                                  auStack_1c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_005bbc50(*(undefined4 *)(param_1 + 0x100),uVar1);
  piVar2 = *(int **)(param_1 + 0xf0);
  while (piVar9 = piVar9 + 1, piVar9 != piVar2) {
    FUN_00537300(piVar9);
  }
  FUN_004fdd20(*(int *)(param_1 + 0xf0) + -4,*(int *)(param_1 + 0xf0));
  local_4 = 0xffffffff;
  *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + -4;
  if (param_2 == 0) {
    ExceptionList = pvStack_c;
    return;
  }
  FUN_004098d0();
  ExceptionList = pvStack_c;
  return;
}

