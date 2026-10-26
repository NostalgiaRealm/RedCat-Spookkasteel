/*
 * FUN_0052a370 at 0052a370
 * undefined FUN_0052a370(void)
 * Address ranges: 0052a370-0052a79a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0052a370(int param_1,int *param_2,int *param_3,int *param_4)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_34;
  int local_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint uStack_24;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639cf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 8) == 0) {
    local_2c[0] = param_4._0_1_;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar5 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_28;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_SubLevelName_length___>_0_006a0330,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x331,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  puVar3 = *(undefined1 **)(param_1 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  iVar4 = FUN_0060b449(puVar3,s_SubLevel_d__d_006a0320,&local_34,&local_30);
  if (iVar4 == 2) {
    if (*(int *)(param_1 + 4) == 0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = (char *)(*(int *)(param_1 + 4) + -1 + *(int *)(param_1 + 8));
    }
    cVar1 = FUN_0060bbcc((int)*pcVar5);
    iVar4 = (int)cVar1;
    iVar6 = FUN_0060b28c(iVar4);
    if (iVar6 == 0) {
      iVar4 = FUN_0060b2ba(iVar4);
      if (iVar4 == 0) goto LAB_0052a768;
      *param_4 = 1;
    }
    else {
      if ((cVar1 < 'b') || ('z' < cVar1)) {
        local_2c[0] = param_4._0_1_;
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar5 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7 - 1;
        cVar1 = FUN_00401940(uVar7,1);
        if (cVar1 != '\0') {
          puVar9 = (undefined4 *)&DAT_006b3f70;
          puVar10 = local_28;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          FUN_00404190(uVar7);
        }
        local_4 = 1;
        pcVar2 = (code *)FUN_005a07f0(s_c_>___b_____c_<___z__006a0308,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x340,local_2c);
        (*pcVar2)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      iVar4 = iVar4 + -0x60;
      *param_4 = iVar4;
      if ((iVar4 < 2) || (0x1a < iVar4)) {
        local_2c[0] = param_4._0_1_;
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar5 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7 - 1;
        cVar1 = FUN_00401940(uVar7,1);
        if (cVar1 != '\0') {
          puVar9 = (undefined4 *)&DAT_006b3f70;
          puVar10 = local_28;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          FUN_00404190(uVar7);
        }
        local_4 = 2;
        pcVar2 = (code *)FUN_005a07f0(s_a_SubSubLevelNr_>__2____a_SubSub_006a02c8,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x342,local_2c);
        (*pcVar2)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
    }
    *param_2 = local_34;
    *param_3 = local_30;
    if ((*param_2 < 1) || (100 < *param_2)) {
      local_2c[0] = param_4._0_1_;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar5 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar1 = FUN_00401940(uVar7,1);
      if (cVar1 != '\0') {
        puVar9 = (undefined4 *)&DAT_006b3f70;
        puVar10 = local_28;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(undefined1 *)((int)local_28 + uVar7) = 0;
        uStack_24 = uVar7;
      }
      local_4 = 3;
      pcVar2 = (code *)FUN_005a07f0(s_a_LevelNr_>__MIN_LEVEL_NR____a_L_006a0248,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x356,local_2c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if ((*param_3 < 1) || (100 < *param_3)) {
      uVar7 = 0xffffffff;
      pcVar5 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iStack_18 = 0;
      auStack_1c[0] = param_4._0_1_;
      uStack_14 = 0;
      uStack_10 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 4;
      pcVar2 = (code *)FUN_005a07f0(s_a_SubLevelNr_>__MIN_SUB_LEVEL_NR_006a0280,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x357,auStack_1c);
      (*pcVar2)();
      if (iStack_18 != 0) {
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *(char *)(iStack_18 + -1) = cVar1 + -1;
          ExceptionList = pvStack_c;
          return 1;
        }
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
    }
    ExceptionList = pvStack_c;
    return 1;
  }
LAB_0052a768:
  *param_4 = -1;
  *param_3 = -1;
  *param_2 = -1;
  ExceptionList = pvStack_c;
  return 0;
}

