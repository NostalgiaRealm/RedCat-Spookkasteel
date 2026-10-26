/*
 * FUN_005a58a0 at 005a58a0
 * undefined FUN_005a58a0(void)
 * Address ranges: 005a58a0-005a5b59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005a58a0(int param_1,int *param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 *puStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006455b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == (int *)0x0) {
    local_1c[0] = 0;
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
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Setting____0_006a805c,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a7d84,0x14f,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  cVar1 = FUN_005b0ba0(param_2 + 1);
  if (cVar1 != '\0') {
    local_1c[0] = param_2._0_1_;
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
      puVar9 = (undefined4 *)&DAT_006b3f70;
      puVar10 = puStack_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      FUN_00404190(uVar6);
    }
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s__EmptyOrSpacesOnly_a_Setting_>Ge_006a8030,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a7d84,0x150,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar3 = FUN_005a5b60(param_2 + 1);
  if (iVar3 != 0) {
    puVar8 = &DAT_0064a3b4;
    if (*(undefined1 **)(param_1 + 8) != (undefined1 *)0x0) {
      puVar8 = *(undefined1 **)(param_1 + 8);
    }
    puVar4 = (undefined1 *)param_2[2];
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_1c,s_Setting___s__already_exists_in_s_006a8004,puVar4,puVar8);
    local_4 = 2;
    FUN_0040cc00(uVar5,0,0xffffffff);
    if (puStack_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)puStack_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)((int)puStack_18 + -1) = cVar1 + -1;
        ExceptionList = pvStack_c;
        return 0;
      }
      FUN_005fe5f0((char *)((int)puStack_18 + -1));
    }
    ExceptionList = pvStack_c;
    return 0;
  }
  if (*param_2 != 0) {
    auStack_2c[0] = param_2._0_1_;
    uVar6 = 0xffffffff;
    iStack_28 = 0;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    uStack_24 = 0;
    uStack_20 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4 = 3;
    pcVar2 = (code *)FUN_005a07f0(s_a_Setting_>m_Section__0_006a7fec,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a7d84,0x159,auStack_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (iStack_28 != 0) {
      cVar1 = *(char *)(iStack_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_28 + -1));
      }
      else {
        *(char *)(iStack_28 + -1) = cVar1 + -1;
      }
    }
    iStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
  }
  FUN_0053cff0(*(undefined4 *)(param_1 + 0x1c),1,&param_2);
  *param_2 = param_1;
  ExceptionList = pvStack_c;
  return 1;
}

