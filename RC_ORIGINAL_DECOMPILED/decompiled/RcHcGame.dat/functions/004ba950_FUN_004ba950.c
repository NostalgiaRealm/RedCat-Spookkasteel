/*
 * FUN_004ba950 at 004ba950
 * undefined FUN_004ba950(void)
 * Address ranges: 004ba950-004bab9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004ba950(int param_1,int param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0062f428;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (param_3 != 0) {
    ExceptionList = &pvStack_c;
    if (*(char *)(param_1 + 300) != '\0') {
      local_1c[0] = (undefined1)param_3;
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
          *local_18 = *puVar6;
          puVar6 = puVar6 + 1;
          local_18 = local_18 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)local_18 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          local_18 = (undefined4 *)((int)local_18 + 1);
        }
        FUN_00404190(uVar4);
      }
      local_4._0_1_ = 2;
      pcVar2 = (code *)FUN_005a07f0(s__m_Initialized_00697580,
                                    s_D__Work_RCHorror_AdamSource_Adam_00697510,0xf4,local_1c);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    if (*(int *)(param_3 + 0x5c) == 0) {
      local_1c[0] = (undefined1)param_3;
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
      local_4._0_1_ = 4;
      pcVar2 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_1c);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    iVar3 = FUN_004b9f60(param_1 + 0xf8,*(undefined4 *)(param_1 + 0x128),
                         *(undefined4 *)(param_3 + 0x5c));
    *(bool *)(param_1 + 300) = iVar3 != 0;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x5c) == 0) {
      local_1c[0] = (undefined1)param_3;
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
      local_4._0_1_ = 6;
      pcVar2 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_1c);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    FUN_004ba050((undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x128),
                 *(undefined4 *)(param_2 + 0x5c));
    *(undefined1 *)(param_1 + 300) = 0;
    puVar6 = (undefined4 *)(param_1 + 0xf8);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  local_4 = local_4 & 0xffffff00;
  if ((param_2 != 0) &&
     (iVar3 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar3 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

