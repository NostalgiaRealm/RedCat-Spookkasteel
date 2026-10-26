/*
 * FUN_00425570 at 00425570
 * undefined FUN_00425570(void)
 * Address ranges: 00425570-00425890
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_00425570(undefined1 *param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_3c [4];
  undefined4 *local_38;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622868;
  pvStack_c = ExceptionList;
  iVar3 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    local_3c[0] = param_1._0_1_;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *local_38 = *puVar6;
        puVar6 = puVar6 + 1;
        local_38 = local_38 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)local_38 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        local_38 = (undefined4 *)((int)local_38 + 1);
      }
      FUN_00404190(uVar4);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_CAdamApplication__InstanceExists_0068fa3c,
                                  s_D__Work_RCHorror_RCSource_RCEnem_0068fa60,0x20,local_3c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    iVar3 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      iVar3 = FUN_004bc480();
    }
  }
  if (*(int *)(iVar3 + 0x3a4) == 0) {
    local_1c[0] = param_1._0_1_;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x3a4) + 0x18);
  if (iVar3 == 0) {
    *param_1 = param_1._0_1_;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = (char *)&DAT_0068fa08;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 == '\0') {
      ExceptionList = pvStack_c;
      return param_1;
    }
    pcVar7 = (char *)&DAT_0068fa08;
  }
  else if (iVar3 == 1) {
    *param_1 = param_1._0_1_;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = s_Normal_0068fa10;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 == '\0') {
      ExceptionList = pvStack_c;
      return param_1;
    }
    pcVar7 = s_Normal_0068fa10;
  }
  else {
    if (iVar3 != 2) {
      auStack_2c[0] = param_1._0_1_;
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar7 = s_unknown_difficulty_level_0068fa20;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        pcVar7 = s_unknown_difficulty_level_0068fa20;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcStack_28 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcStack_28 = pcStack_28 + 4;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcStack_28 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcStack_28 = pcStack_28 + 1;
        }
        FUN_00404190(uVar4);
      }
      local_4 = 2;
      pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RCEnem_0068fa60,
                                    0x30,auStack_2c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      *param_1 = param_1._0_1_;
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 == '\0') {
        ExceptionList = pvStack_c;
        return param_1;
      }
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = *(undefined4 **)(param_1 + 4);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(uint *)(param_1 + 8) = uVar4;
      *(undefined1 *)(uVar4 + *(int *)(param_1 + 4)) = 0;
      ExceptionList = pvStack_c;
      return param_1;
    }
    *param_1 = param_1._0_1_;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = (char *)&DAT_0068fa18;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 == '\0') {
      ExceptionList = pvStack_c;
      return param_1;
    }
    pcVar7 = (char *)&DAT_0068fa18;
  }
  pcVar9 = *(char **)(param_1 + 4);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_00404190(uVar4);
  ExceptionList = pvStack_c;
  return param_1;
}

