/*
 * FUN_004f57d0 at 004f57d0
 * undefined FUN_004f57d0(void)
 * Address ranges: 004f57d0-004f5b5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004f57d0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int *piVar6;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined1 local_59;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00634a78;
  pvStack_c = ExceptionList;
  iVar11 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  piVar6 = (int *)FUN_004f4900();
  piVar6 = (int *)*piVar6;
  if (piVar6 == (int *)0x0) {
    FUN_004040a0();
    iVar9 = -1;
    pcVar12 = &DAT_006b3f70;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar5 != '\0');
    FUN_004040f0();
    local_4._0_1_ = 1;
    pcVar7 = (code *)FUN_005a07f0(s_m_List_00699eec);
    (*pcVar7)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  piVar1 = (int *)*piVar6;
  if (piVar1 != (int *)0x0) {
    iVar9 = *piVar1;
    while (iVar9 != 0) {
      if (*(char *)(iVar9 + 0x7d) == '\0') {
        FUN_00503030();
      }
      if (piVar6 == (int *)0x0) {
        FUN_004040a0();
        iVar9 = -1;
        pcVar12 = &DAT_006b3f70;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          cVar5 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar5 != '\0');
        FUN_004040f0();
        local_4._0_1_ = 2;
        pcVar7 = (code *)FUN_005a07f0(s_m_List_00699eec);
        (*pcVar7)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0();
      }
      if (piVar1 == (int *)0x0) {
        FUN_00409810();
        local_4._0_1_ = 3;
        pcVar7 = (code *)FUN_005a07f0(s_m_Node_00699ec4);
        (*pcVar7)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0();
      }
      piVar1 = (int *)piVar1[1];
      if (piVar1 == (int *)0x0) break;
      iVar9 = *piVar1;
    }
  }
  if (*(char *)(param_1 + 0x424) == '\0') {
    FUN_004f5750();
  }
  else if (*(int *)(param_1 + 0x364) == 0) {
    puVar8 = operator_new(0x10);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar8 + 4) = 0;
      *puVar8 = local_59;
      *(undefined4 *)(puVar8 + 8) = 0;
      *(undefined4 *)(puVar8 + 0xc) = 0;
    }
    *(undefined1 **)(param_1 + 0x364) = puVar8;
    FUN_005b02f0();
    FUN_004f3fd0();
    FUN_0059c470();
    FUN_005b02f0();
  }
  if (*(char *)(param_1 + 0x424) == '\0') {
    if (param_1 != 0) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    FUN_005669d0();
  }
  else {
    cVar5 = FUN_00566970();
    if (cVar5 == '\0') {
      FUN_00566980();
      uStack_1c = 0xc1000000;
      uStack_20 = 0xc1000000;
      uStack_24 = 0xc1000000;
      uStack_10 = 0x41000000;
      uStack_14 = 0x41000000;
      uStack_18 = 0x41000000;
      while( true ) {
        FUN_00457240();
        iVar9 = FUN_0041e8e0();
        if (iVar9 <= iVar11) break;
        FUN_00457240(param_1);
        iVar9 = FUN_004fe360();
        uVar2 = *(undefined4 *)(iVar9 + 0x10);
        uVar3 = *(undefined4 *)(iVar9 + 0x14);
        uVar4 = *(undefined4 *)(iVar9 + 0x18);
        if (*(int *)(param_1 + 0x5c) == 0) {
          FUN_004040a0();
          iVar10 = -1;
          pcVar12 = &DAT_006b3f70;
          do {
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            cVar5 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar5 != '\0');
          FUN_004040f0();
          local_4._0_1_ = 4;
          pcVar7 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8);
          (*pcVar7)();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0();
        }
        FUN_005b0310(*(undefined4 *)(param_1 + 0x5c),iVar9,&uStack_24,uVar2,uVar3,uVar4);
        iVar11 = iVar11 + 1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}

