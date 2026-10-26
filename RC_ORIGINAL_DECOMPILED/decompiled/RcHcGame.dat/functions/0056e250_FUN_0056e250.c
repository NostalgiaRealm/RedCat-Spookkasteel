/*
 * FUN_0056e250 at 0056e250
 * undefined FUN_0056e250(void)
 * Address ranges: 0056e250-0056e517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0056e250(undefined4 *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int aiStack_54 [2];
  undefined1 local_4c [4];
  undefined4 *local_48;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640d7f;
  pvStack_c = ExceptionList;
  iVar4 = *(int *)(param_2 + 4);
  aiStack_54[1] = 0;
  if (((iVar4 == 0) || ((*(int *)(param_2 + 8) - iVar4) / 0x18 != 1)) ||
     (ExceptionList = &pvStack_c, *(int *)(iVar4 + 8) != 2)) {
    local_4c[0] = (undefined1)param_2;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_48 = *puVar7;
        puVar7 = puVar7 + 1;
        local_48 = local_48 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)local_48 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        local_48 = (undefined4 *)((int)local_48 + 1);
      }
      FUN_00404190(uVar5);
    }
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s__args_size______1______args_0__I_006a4340,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a4280,0x2c5,local_4c);
    (*pcVar3)();
    local_4 = local_4 & 0xffffff00;
    FUN_004040a0(1);
  }
  iVar4 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar4 = FUN_004bc480();
  }
  if (*(int *)(iVar4 + 0x3a4) == 0) {
    auStack_3c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  auStack_3c);
    (*pcVar3)();
    local_4 = local_4 & 0xffffff00;
    FUN_004040a0(1);
  }
  FUN_00453d20(aiStack_54);
  local_4 = 3;
  if ((aiStack_54[0] != 0) && (iVar4 = *(int *)(aiStack_54[0] + 0x360), iVar4 != 0)) {
    iVar1 = *(int *)(param_2 + 4);
    if (*(int *)(iVar1 + 8) != 2) {
      auStack_2c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4._0_1_ = 5;
      pcVar3 = (code *)FUN_005a07f0(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,
                                    0x42,auStack_2c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_004040a0(1);
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (*(int *)(iVar4 + 0x1f0) == 0) {
      auStack_1c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4._0_1_ = 6;
      pcVar3 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x15b,auStack_1c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_004040a0(1);
    }
    (**(code **)(**(int **)(iVar4 + 0x1f0) + 0x30))(iVar1 != 0);
  }
  aiStack_54[1] = 1;
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  local_4 = local_4 & 0xffffff00;
  if ((aiStack_54[0] != 0) &&
     (iVar4 = *(int *)(aiStack_54[0] + 0x14) + -1, *(int *)(aiStack_54[0] + 0x14) = iVar4,
     iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

