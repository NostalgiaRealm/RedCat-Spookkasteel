/*
 * FUN_004e27b0 at 004e27b0
 * undefined FUN_004e27b0(void)
 * Address ranges: 004e27b0-004e2a29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004e27b0(int param_1,int param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 local_1c [4];
  undefined4 *puStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006328b8;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if ((param_2 != 0) && (ExceptionList = &pvStack_c, *(int *)(param_1 + 0x140) != 0)) {
    ExceptionList = &pvStack_c;
    if (*(int *)(param_2 + 0x5c) == 0) {
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
      FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
      local_4._0_1_ = 3;
      pcVar2 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_1c);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    FUN_005b7d00(*(undefined4 *)(param_2 + 0x5c),*(undefined4 *)(param_1 + 0x140));
    *(undefined4 *)(param_1 + 0x140) = 0;
    DAT_006b94bc = DAT_006b94bc + -1;
  }
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x140) != 0) {
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
      uVar4 = ~uVar4 - 1;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puStack_18 = *puVar6;
          puVar6 = puVar6 + 1;
          puStack_18 = puStack_18 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puStack_18 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puStack_18 = (undefined4 *)((int)puStack_18 + 1);
        }
        FUN_00404190(uVar4);
      }
      local_4._0_1_ = 4;
      pcVar2 = (code *)FUN_005a07f0(s_m_Light____0_0069a264,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069a274,0xc3,local_1c);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    iVar3 = __ftol();
    if (0 < iVar3) {
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
        local_4._0_1_ = 6;
        pcVar2 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,
                                      s___AdamSource_AdamSubLevel_h_0068e1b8,0x144,local_1c);
        (*pcVar2)();
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_004040a0(1);
      }
      iVar3 = FUN_005b7cf0(*(undefined4 *)(param_3 + 0x5c));
      *(int *)(param_1 + 0x140) = iVar3;
      if (iVar3 != 0) {
        DAT_006b94bc = DAT_006b94bc + 1;
        FUN_004e2720();
        FUN_004e2a30();
      }
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

