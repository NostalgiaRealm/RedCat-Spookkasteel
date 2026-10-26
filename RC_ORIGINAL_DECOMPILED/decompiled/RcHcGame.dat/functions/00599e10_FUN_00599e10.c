/*
 * FUN_00599e10 at 00599e10
 * undefined FUN_00599e10(void)
 * Address ranges: 00599e10-0059a1ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00599e10(int *param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *extraout_ECX;
  char *pcVar9;
  char *pcVar10;
  float10 fVar11;
  char *pcStack_6c;
  char *pcStack_68;
  int **ppiStack_64;
  int *local_50;
  float local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  char acStack_3c [4];
  char *pcStack_38;
  char local_2c [16];
  char acStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006443a8;
  local_c = ExceptionList;
  ppiStack_64 = (int **)0x599e35;
  ExceptionList = &local_c;
  iVar3 = FUN_00598570();
  if (0 < iVar3) {
    ExceptionList = local_c;
    return 0;
  }
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    ppiStack_64 = (int **)0x599e4f;
    iVar3 = FUN_004bc480();
  }
  if (*(int *)(iVar3 + 0x3a4) == 0) {
    ppiStack_64 = (int **)0x0;
    local_2c[0] = param_2;
    pcStack_68 = (char *)0x599e6e;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    ppiStack_64 = (int **)(~uVar7 - 1);
    pcStack_68 = &DAT_006b3f70;
    pcStack_6c = (char *)0x599e8c;
    FUN_004040f0();
    ppiStack_64 = (int **)local_2c;
    local_4 = 0;
    pcStack_68 = (char *)0x130;
    pcStack_6c = s___AdamSource_AdamApplication_h_0068e58c;
    pcVar4 = (code *)FUN_005a07f0(s_m_Game_0068e584);
    (*pcVar4)();
    local_4 = 0xffffffff;
    ppiStack_64 = (int **)0x1;
    pcStack_68 = (char *)0x599ec5;
    FUN_004040a0();
  }
  ppiStack_64 = &local_50;
  pcStack_68 = (char *)0x599ed5;
  FUN_00453d20();
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (local_50 == (int *)0x0) {
    ppiStack_64 = (int **)0x0;
    acStack_3c[0] = param_2;
    pcStack_68 = (char *)0x599efc;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    ppiStack_64 = (int **)0x1;
    pcVar9 = s_no_current_sublevel_006a6f24;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7 - 1;
    pcStack_6c = (char *)0x599f19;
    pcStack_68 = (char *)uVar7;
    cVar2 = FUN_00401940();
    if (cVar2 != '\0') {
      pcVar9 = s_no_current_sublevel_006a6f24;
      pcVar10 = pcStack_38;
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
      pcStack_68 = (char *)0x599f40;
      ppiStack_64 = (int **)uVar7;
      FUN_00404190();
    }
    ppiStack_64 = (int **)acStack_3c;
    local_4._0_1_ = 2;
    pcStack_68 = (char *)0x3aa;
    pcStack_6c = s_D__Work_RCHorror_AdamSource_Adam_006a6cec;
    pcVar4 = (code *)FUN_005a07f0(s___subLevel_IsNull___006a6f10);
    (*pcVar4)();
    local_4._0_1_ = 1;
    ppiStack_64 = (int **)0x1;
    pcStack_68 = (char *)0x599f73;
    FUN_004040a0();
    if (local_50 == (int *)0x0) {
      ppiStack_64 = (int **)0x0;
      acStack_1c[0] = param_2;
      pcStack_68 = (char *)0x599f8e;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      ppiStack_64 = (int **)(~uVar7 - 1);
      pcStack_68 = &DAT_006b3f70;
      pcStack_6c = (char *)0x599fac;
      FUN_004040f0();
      ppiStack_64 = (int **)acStack_1c;
      local_4._0_1_ = 3;
      pcStack_68 = (char *)0xb6;
      pcStack_6c = s___AdamSource_DaviRC_h_0068d638;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c);
      (*pcVar4)();
      local_4._0_1_ = 1;
      ppiStack_64 = (int **)0x1;
      pcStack_68 = (char *)0x599fdf;
      FUN_004040a0();
    }
  }
  piVar1 = (int *)local_50[0xd8];
  if (piVar1 == (int *)0x0) {
    acStack_3c[0] = param_2;
    pcStack_68 = (char *)0x59a003;
    ppiStack_64 = (int **)piVar1;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    ppiStack_64 = (int **)0x1;
    pcVar9 = s_no_player_found_in_sublevel_006a6ef4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7 - 1;
    pcStack_6c = (char *)0x59a020;
    pcStack_68 = (char *)uVar7;
    cVar2 = FUN_00401940();
    if (cVar2 != '\0') {
      pcVar9 = s_no_player_found_in_sublevel_006a6ef4;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcStack_38 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcStack_38 = pcStack_38 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcStack_38 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcStack_38 = pcStack_38 + 1;
      }
      pcStack_68 = (char *)0x59a047;
      ppiStack_64 = (int **)uVar7;
      FUN_00404190();
    }
    ppiStack_64 = (int **)acStack_3c;
    local_4._0_1_ = 4;
    pcStack_68 = (char *)0x3ac;
    pcStack_6c = s_D__Work_RCHorror_AdamSource_Adam_006a6cec;
    pcVar4 = (code *)FUN_005a07f0(s_player____NULL_0069f0c0);
    (*pcVar4)();
    local_4._0_1_ = 1;
    ppiStack_64 = (int **)0x1;
    pcStack_68 = (char *)0x59a07a;
    FUN_004040a0();
  }
  ppiStack_64 = (int **)0x59a083;
  ppiStack_64 = (int **)FUN_00597fb0();
  pcStack_68 = acStack_3c;
  pcStack_6c = (char *)0x59a08e;
  puVar5 = (undefined4 *)FUN_004dbe60();
  uStack_48 = *puVar5;
  uStack_44 = puVar5[1];
  uStack_40 = puVar5[2];
  ppiStack_64 = (int **)acStack_3c;
  pcStack_68 = (char *)0x59a0b3;
  (**(code **)(*piVar1 + 0x48))();
  ppiStack_64 = (int **)0x59a0be;
  fVar11 = (float10)FUN_005b30a0();
  local_4c = (float)fVar11;
  ppiStack_64 = (int **)0x59a0cd;
  iVar3 = FUN_005954a0();
  if (*(float *)(iVar3 + 0x10) <= local_4c) {
    if (param_2 != '\0') {
      ppiStack_64 = (int **)&uStack_48;
      pcStack_68 = acStack_3c;
      pcStack_6c = (char *)0x59a126;
      pcStack_68 = (char *)(**(code **)(*param_1 + 0x88))();
      pcStack_6c = extraout_ECX;
      FUN_004042e0(&pcStack_6c);
      cVar2 = FUN_00594fe0();
      if (cVar2 == '\0') {
        local_4 = 0xffffffff;
        if (local_50 != (int *)0x0) {
          iVar3 = local_50[5];
          local_50[5] = iVar3 + -1;
          if (iVar3 + -1 == 0) {
            ppiStack_64 = (int **)0x0;
            pcStack_68 = (char *)0x59a16a;
            FUN_005abfc0();
          }
        }
        goto LAB_0059a16a;
      }
    }
    local_4 = 0xffffffff;
    if (local_50 != (int *)0x0) {
      iVar3 = local_50[5];
      local_50[5] = iVar3 + -1;
      if (iVar3 + -1 == 0) {
        ppiStack_64 = (int **)0x0;
        pcStack_68 = (char *)0x59a196;
        FUN_005abfc0();
      }
    }
    uVar6 = 1;
  }
  else {
    local_4 = 0xffffffff;
    if (local_50 != (int *)0x0) {
      iVar3 = local_50[5];
      local_50[5] = iVar3 + -1;
      if (iVar3 + -1 == 0) {
        ppiStack_64 = (int **)0x0;
        pcStack_68 = (char *)0x59a103;
        FUN_005abfc0();
        ExceptionList = local_c;
        return 0;
      }
    }
LAB_0059a16a:
    uVar6 = 0;
  }
  ExceptionList = local_c;
  return uVar6;
}

