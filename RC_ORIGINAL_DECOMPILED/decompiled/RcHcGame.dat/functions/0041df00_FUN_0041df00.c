/*
 * FUN_0041df00 at 0041df00
 * undefined FUN_0041df00(void)
 * Address ranges: 0041df00-0041e1dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0041df00(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int iStack_3c;
  undefined4 *puStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00621dc0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  do {
    if ((*(int *)(param_1 + 0x234) == 0) ||
       ((*(int *)(param_1 + 0x238) - *(int *)(param_1 + 0x234)) / 0xc < 1)) {
      FUN_00449760(&param_2);
      iVar2 = FUN_0041e8e0();
      iStack_3c = 0;
      if (0 < iVar2) {
        do {
          if (param_2 == 0) {
            FUN_004040a0();
            iVar6 = -1;
            pcVar9 = &DAT_006b3f70;
            do {
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
            FUN_004040f0();
            local_4._0_1_ = 2;
            pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638);
            (*pcVar3)();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_004040a0();
          }
          iVar6 = FUN_004f3d50();
          if (iVar6 == 0) {
            FUN_004040a0();
            uVar7 = 0xffffffff;
            pcVar9 = &DAT_006b3f70;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
            cVar1 = FUN_00401940();
            if (cVar1 != '\0') {
              puVar4 = (undefined4 *)&DAT_006b3f70;
              puVar5 = puStack_28;
              for (uVar8 = ~uVar7 - 1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar5 = puVar5 + 1;
              }
              for (uVar7 = ~uVar7 - 1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
                puVar4 = (undefined4 *)((int)puVar4 + 1);
                puVar5 = (undefined4 *)((int)puVar5 + 1);
              }
              FUN_00404190();
            }
            local_4._0_1_ = 3;
            pcVar3 = (code *)FUN_005a07f0(s_point____0_0068f43c,
                                          s_D__Work_RCHorror_RCSource_RcJest_0068f410);
            (*pcVar3)();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_004040a0();
          }
          FUN_0041eaf0();
          iStack_3c = iStack_3c + 1;
        } while (iStack_3c < iVar2);
      }
      if (*(int *)(param_1 + 0x234) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_1 + 0x238) - *(int *)(param_1 + 0x234)) / 0xc;
      }
      *(int *)(param_1 + 0x240) = iVar2;
      FUN_0041edb0(*(undefined4 *)(param_1 + 0x238));
      local_4 = 0xffffffff;
      if ((param_2 != 0) &&
         (iVar2 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar2, iVar2 == 0)) {
        FUN_005abfc0();
      }
      ExceptionList = pvStack_c;
      return;
    }
    iVar2 = FUN_0041ead0();
    if (iVar2 < 1) {
      FUN_004040a0();
      iVar2 = -1;
      pcVar9 = &DAT_006b3f70;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0();
      local_4._0_1_ = 1;
      pcVar3 = (code *)FUN_005a07f0(s_a_Index<Count()_0068f448,s___AdamSource_DaviList_h_0068f458);
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0();
    }
    puVar4 = (undefined4 *)FUN_0041f240();
    puVar5 = (undefined4 *)FUN_0041f120();
    *puVar5 = *puVar4;
    puVar5[1] = puVar4[1];
    puVar5[2] = puVar4[2];
    FUN_0041ed10();
  } while( true );
}

