/*
 * FUN_004ae000 at 004ae000
 * undefined FUN_004ae000(void)
 * Address ranges: 004ae000-004ae456
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004ae000(int param_1)

{
  int iVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  int in_stack_00000010;
  undefined1 local_99;
  int local_98;
  undefined1 local_94 [4];
  char *local_90;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_75;
  int *piStack_74;
  int iStack_70;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e3ac;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_98 = param_1;
  if (in_stack_00000010 != 0) {
    puVar3 = *(undefined1 **)(param_1 + 0x54);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    ExceptionList = &pvStack_c;
    iVar4 = FUN_004251b0(0,*(undefined4 *)(in_stack_00000010 + 100),puVar3,
                         *(undefined4 *)(param_1 + 0x58));
    if (iVar4 == 0) goto LAB_004ae0ee;
  }
  local_94[0] = local_99;
  FUN_004040a0(0);
  uVar8 = 0xffffffff;
  pcVar10 = &DAT_006b3f70;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uVar8 = ~uVar8 - 1;
  cVar2 = FUN_00401940(uVar8,1);
  if (cVar2 != '\0') {
    pcVar10 = &DAT_006b3f70;
    pcVar11 = local_90;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uVar8);
    param_1 = local_98;
  }
  local_4 = 0;
  pcVar5 = (code *)FUN_005a07f0(s_go____0____go_>GetName____m_Dyna_006964fc,
                                s_D__Work_RCHorror_AdamSource_Adam_0069652c,0x2b,local_94);
  (*pcVar5)();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
LAB_004ae0ee:
  if ((in_stack_00000010 != 0) && (*(int *)(param_1 + 0x60) != 0)) {
    piStack_74 = (int *)FUN_0060a6f2(in_stack_00000010,0,&CAdamGO::RTTI_Type_Descriptor,
                                     &CAdamLight::RTTI_Type_Descriptor,0);
    if (piStack_74 == (int *)0x0) {
      local_94[0] = local_99;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar10 = s_Couldn_t_cast_game_object_to_lig_006964bc;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar2 = FUN_00401940(uVar8,1);
      if (cVar2 != '\0') {
        pcVar10 = s_Couldn_t_cast_game_object_to_lig_006964bc;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)local_90 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          local_90 = local_90 + 4;
        }
        for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *local_90 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          local_90 = local_90 + 1;
        }
        FUN_00404190(uVar8);
      }
      local_4 = 1;
      pcVar5 = (code *)FUN_005a07f0(s_light____NULL_006964ac,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069652c,0x32,local_94);
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar6 = (int *)FUN_004042e0(&iStack_70);
    local_4 = 2;
    if (*piVar6 == 0) {
      local_94[0] = local_99;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 3;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_94);
      (*pcVar5)();
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004040a0(1);
    }
    iVar4 = *piVar6;
    if (*(int *)(iVar4 + 0x5c) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_99);
      local_4._0_1_ = 4;
      pcVar5 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,auStack_6c);
      (*pcVar5)();
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004040a0(1);
    }
    iVar1 = local_98;
    FUN_005b9810(*(undefined4 *)(iVar4 + 0x5c),*(undefined4 *)(local_98 + 0x60),auStack_3c);
    local_4 = 0xffffffff;
    if (iStack_70 != 0) {
      FUN_004098d0();
    }
    piVar6 = piStack_74;
    puVar7 = (undefined4 *)FUN_004e2ca0(local_94);
    uStack_84 = *puVar7;
    uStack_80 = puVar7[1];
    uStack_7c = puVar7[2];
    cVar2 = FUN_004e30f0();
    if (cVar2 == '\0') {
      FUN_005b3000(&uStack_84);
    }
    else {
      piVar6 = (int *)FUN_004042e0(&local_98);
      local_4 = 5;
      if (*piVar6 == 0) {
        FUN_00409810(&DAT_006b3f70,&local_99);
        local_4._0_1_ = 6;
        pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_5c);
        (*pcVar5)();
        local_4 = CONCAT31(local_4._1_3_,5);
        FUN_004040a0(1);
      }
      iVar4 = *piVar6;
      if (*(int *)(iVar4 + 0x5c) == 0) {
        FUN_00409810(&DAT_006b3f70,&uStack_75);
        local_4._0_1_ = 7;
        pcVar5 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,
                                      s___AdamSource_AdamSubLevel_h_0068e1b8,0x144,auStack_4c);
        (*pcVar5)();
        local_4 = CONCAT31(local_4._1_3_,5);
        FUN_004040a0(1);
      }
      FUN_005b98a0(*(undefined4 *)(iVar4 + 0x5c),*(undefined4 *)(iVar1 + 0x60),auStack_6c);
      local_4 = 0xffffffff;
      FUN_0057d310();
      FUN_005b2fe0(&uStack_84);
      FUN_005b3470(&uStack_84);
      FUN_005b3000(&uStack_84);
      piVar6 = piStack_74;
    }
    (**(code **)(*piVar6 + 0x4c))(&uStack_84);
  }
  ExceptionList = pvStack_c;
  return;
}

