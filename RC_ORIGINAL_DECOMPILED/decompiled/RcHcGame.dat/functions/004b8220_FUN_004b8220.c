/*
 * FUN_004b8220 at 004b8220
 * undefined FUN_004b8220(void)
 * Address ranges: 004b8220-004b8553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004b8220(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iStack_7c;
  int iStack_78;
  undefined4 local_74;
  undefined4 local_70;
  int iStack_6c;
  void *pvStack_68;
  undefined4 local_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f097;
  pvStack_c = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  ExceptionList = &pvStack_c;
  local_64 = FUN_004e2710();
  FUN_004cffd0();
  iVar4 = FUN_005c3350(0);
  if (iVar4 == 0) {
    uVar5 = FUN_005ae390(local_40,s_geBitmap_GetInfo___fails___00696e9c);
    local_4 = 0;
    pcVar6 = (code *)FUN_005a07f0(s_result_00691bc0,s_D__Work_RCHorror_AdamSource_Adam_006971b0,0x2f
                                  ,uVar5);
    (*pcVar6)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_004b95a0(&local_70,&local_74);
  pvStack_68 = operator_new(0x8c);
  local_4 = 1;
  if (pvStack_68 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    piVar7 = (int *)FUN_004b8560(&iStack_78);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (*piVar7 == 0) {
      FUN_004040a0(0);
      uVar10 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
      local_4 = 3;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_60);
      (*pcVar6)();
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_004040a0(1);
    }
    iStack_6c = *piVar7;
    piVar7 = (int *)FUN_004b8560(&iStack_7c);
    local_4 = 4;
    if (*piVar7 == 0) {
      FUN_004040a0(0);
      uVar10 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
      local_4 = 5;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_50);
      (*pcVar6)();
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_004040a0(1);
    }
    uVar5 = *(undefined4 *)(param_1 + 0x174);
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = *(undefined4 *)(param_1 + 0x170);
    FUN_004b0230(uStack_2c,local_30,uVar12,uVar5,local_70,local_74,0,0);
    uVar8 = FUN_005bff90();
    FUN_004b0230(uVar8);
    uVar9 = FUN_005c0070();
    uVar5 = FUN_004b7900(0,param_1 + 0x5c,param_1 + 0x17c,uVar9,uVar8,uStack_2c,local_30,uVar12,
                         uVar5,local_70,local_74,uVar13,uVar14);
    bVar3 = true;
    bVar2 = true;
  }
  local_4 = 7;
  FUN_004ad2e0(uVar5);
  local_4 = 6;
  if ((bVar3) && (iStack_7c != 0)) {
    iVar4 = *(int *)(iStack_7c + 0x14) + -1;
    *(int *)(iStack_7c + 0x14) = iVar4;
    if (iVar4 == 0) {
      FUN_005abfc0(0);
    }
    iStack_7c = 0;
  }
  local_4 = 0xffffffff;
  if ((bVar2) && (iStack_78 != 0)) {
    iVar4 = *(int *)(iStack_78 + 0x14) + -1;
    *(int *)(iStack_78 + 0x14) = iVar4;
    if (iVar4 == 0) {
      FUN_005abfc0(0);
    }
    iStack_78 = 0;
  }
  FUN_004ad9a0(100,0xffffffff);
  ExceptionList = pvStack_c;
  return;
}

