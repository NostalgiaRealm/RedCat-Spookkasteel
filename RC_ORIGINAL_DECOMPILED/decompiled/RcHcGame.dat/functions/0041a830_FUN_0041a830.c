/*
 * FUN_0041a830 at 0041a830
 * undefined FUN_0041a830(void)
 * Address ranges: 0041a830-0041aac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0041a830(int param_1,int param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00621808;
  pvStack_c = ExceptionList;
  local_4 = 1;
  if (param_3 == 0) {
    uVar9 = *(undefined4 *)(param_1 + 0xf8);
    ExceptionList = &pvStack_c;
    FUN_004969a0(uVar9);
    FUN_0042d4e0(uVar9);
  }
  else {
    ExceptionList = &pvStack_c;
    if (*(int *)(param_1 + 0xf8) == 0) {
      local_1c[0] = (undefined1)param_3;
      ExceptionList = &pvStack_c;
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        puVar7 = local_18;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        FUN_00404190(uVar4);
      }
      local_4._0_1_ = 2;
      pcVar2 = (code *)FUN_005a07f0(s_m_Top_0068f234,s_D__Work_RCHorror_RCSource_RcDung_0068f1d0,
                                    0x43,local_1c);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    if (*(int *)(param_1 + 0xfc) == 0) {
      local_1c[0] = (undefined1)param_3;
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar1 = FUN_00401940(uVar4,1);
      if (cVar1 != '\0') {
        puVar6 = (undefined4 *)&DAT_006b3f70;
        puVar7 = local_18;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        FUN_00404190(uVar4);
      }
      local_4._0_1_ = 3;
      pcVar2 = (code *)FUN_005a07f0(s_m_Bottom_0068f228,s_D__Work_RCHorror_RCSource_RcDung_0068f1d0,
                                    0x44,local_1c);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    if (*(int *)(param_1 + 0x100) == 0) {
      local_1c[0] = (undefined1)param_3;
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
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
      local_4._0_1_ = 4;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pipe_0068f1a4,s_D__Work_RCHorror_RCSource_RcDung_0068f1d0,
                                    0x45,local_1c);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
    }
    FUN_004f41c0(*(undefined4 *)(param_1 + 0xf8));
    FUN_004f41c0(*(undefined4 *)(param_1 + 0xfc));
    FUN_004f41c0(*(undefined4 *)(param_1 + 0x100));
    uVar9 = *(undefined4 *)(param_1 + 0xf8);
    FUN_004969a0(uVar9);
    FUN_0042d3a0(uVar9);
  }
  local_4 = local_4 & 0xffffff00;
  if (param_2 != 0) {
    FUN_004098d0();
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar3 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

