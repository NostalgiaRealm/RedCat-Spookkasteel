/*
 * FUN_0055cff0 at 0055cff0
 * undefined FUN_0055cff0(void)
 * Address ranges: 0055cff0-0055d326
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0055cff0(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 local_3c [4];
  undefined4 *local_38;
  uint uStack_34;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063f700;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_3c[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_38;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00404190(uVar4);
    }
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_a_SubLevel_IsNotNull___00690830,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x1fb,local_3c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  piVar6 = *(int **)(param_1 + 0xec);
  if (piVar6 != *(int **)(param_1 + 0xf0)) {
    do {
      if (*piVar6 == param_2) {
        local_3c[0] = (undefined1)param_2;
        FUN_004040a0(0);
        uVar4 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4 - 1;
        cVar2 = FUN_00401940(uVar4,1);
        if (cVar2 != '\0') {
          puVar7 = (undefined4 *)&DAT_006b3f70;
          puVar9 = local_38;
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          *(undefined1 *)((int)local_38 + uVar4) = 0;
          uStack_34 = uVar4;
        }
        local_4._0_1_ = 2;
        pcVar3 = (code *)FUN_005a07f0(s___it_____a_SubLevel_006a2c70,
                                      s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x1ff,local_3c);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(param_1 + 0xf0));
  }
  FUN_004fdf50(*(undefined4 *)(param_1 + 0xf0),1,&param_2);
  if (param_2 == 0) {
    local_3c[0] = 0;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_3c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  puVar7 = (undefined4 *)(param_2 + 0x5c);
  if (*(int *)(param_2 + 0x5c) == 0) {
    auStack_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,auStack_2c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  uVar1 = *puVar7;
  if (*(int *)(param_1 + 0x100) == 0) {
    auStack_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4._0_1_ = 5;
    pcVar3 = (code *)FUN_005a07f0(s_m_Engine_006934e0,s___AdamSource_AdamEngine_h_0068eb58,0x1ad,
                                  auStack_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_005bbb90(*(undefined4 *)(param_1 + 0x100),uVar1);
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar8 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar8, iVar8 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

