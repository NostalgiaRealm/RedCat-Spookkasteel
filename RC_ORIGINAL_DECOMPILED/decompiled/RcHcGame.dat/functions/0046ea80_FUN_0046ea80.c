/*
 * FUN_0046ea80 at 0046ea80
 * undefined FUN_0046ea80(void)
 * Address ranges: 0046ea80-0046eea4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0046ea80(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined1 *puStack_98;
  undefined1 local_82;
  undefined1 uStack_81;
  undefined1 *local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  undefined1 *puStack_70;
  undefined1 local_6c [8];
  int iStack_64;
  undefined1 local_5c [4];
  int iStack_58;
  undefined1 local_4c [16];
  undefined1 auStack_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628158;
  pvStack_c = ExceptionList;
  iVar7 = 4;
  puVar2 = (undefined4 *)(param_1 + 0x1420);
  ExceptionList = &pvStack_c;
  do {
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0x437f0000;
    puVar2[5] = 0x437f0000;
    puVar2[6] = 0x437f0000;
    puVar2[7] = 0x437f0000;
    puVar2 = puVar2 + 9;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  *(undefined4 *)(param_1 + 0x1494) = 0;
  *(undefined4 *)(param_1 + 0x1498) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1428) = 0;
  *(undefined4 *)(param_1 + 0x142c) = 0;
  *(undefined4 *)(param_1 + 0x144c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1450) = 0;
  *(undefined4 *)(param_1 + 0x1470) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1474) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1418) = 0;
  *(undefined4 *)(param_1 + 0x1414) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x14ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14b0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14b4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x14b8) = 1;
  puStack_98 = (undefined1 *)0x46eb38;
  FUN_005b3070();
  puStack_98 = (undefined1 *)0x0;
  local_5c[0] = local_82;
  FUN_004040a0();
  puStack_98 = (undefined1 *)0x0;
  local_4 = 1;
  local_6c[0] = local_82;
  FUN_004040a0();
  local_7c = 0;
  local_80 = (undefined1 *)0x0;
  local_4._0_1_ = 4;
  puVar9 = (undefined1 *)0x0;
  piVar8 = (int *)(param_1 + 0x14bc);
  do {
    puStack_98 = puVar9;
    uVar3 = FUN_005ae390(local_2c,s_score_d_bmp_00692c08);
    puStack_98 = (undefined1 *)0xffffffff;
    local_4._0_1_ = 5;
    FUN_0040cc00(uVar3,0);
    puStack_98 = (undefined1 *)0x1;
    local_4._0_1_ = 4;
    FUN_004040a0();
    puStack_98 = puVar9;
    uVar3 = FUN_005ae390(local_1c,s_score_d_a_bmp_00692bf8);
    local_4._0_1_ = 6;
    puStack_98 = (undefined1 *)0xffffffff;
    FUN_0040cc00(uVar3,0);
    puStack_98 = (undefined1 *)0x1;
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004040a0();
    iVar7 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_98 = (undefined1 *)0x46ec0d;
      iVar7 = FUN_0055b280();
    }
    if (*(int *)(iVar7 + 0xd8) == 0) {
      puStack_98 = &local_82;
      FUN_00409810(&DAT_006b3f70);
      puStack_98 = local_4c;
      local_4._0_1_ = 7;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_98 = (undefined1 *)0x1;
      FUN_004040a0();
    }
    puStack_98 = local_5c;
    piVar5 = (int *)FUN_0050d980(&local_78);
    local_4._0_1_ = 8;
    if (local_7c != *piVar5) {
      if ((local_7c != 0) &&
         (iVar7 = *(int *)(local_7c + 0x14) + -1, *(int *)(local_7c + 0x14) = iVar7, iVar7 == 0)) {
        puStack_98 = (undefined1 *)0x0;
        FUN_005abfc0();
      }
      local_7c = *piVar5;
      puStack_98 = (undefined1 *)0x46ecb4;
      FUN_005844b0();
    }
    local_4._0_1_ = 4;
    if (local_78 != 0) {
      puStack_98 = (undefined1 *)0x46ecc9;
      FUN_004098d0();
      local_78 = 0;
    }
    if (iStack_64 != 0) {
      iVar7 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        puStack_98 = (undefined1 *)0x46ece6;
        iVar7 = FUN_0055b280();
      }
      if (*(int *)(iVar7 + 0xd8) == 0) {
        puStack_98 = &uStack_81;
        FUN_00409810(&DAT_006b3f70);
        puStack_98 = auStack_3c;
        local_4._0_1_ = 9;
        pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                      0x188);
        (*pcVar4)();
        local_4._0_1_ = 4;
        puStack_98 = (undefined1 *)0x1;
        FUN_004040a0();
      }
      puStack_98 = local_6c;
      piVar5 = (int *)FUN_0050d980(&iStack_74);
      local_4._0_1_ = 10;
      if (local_80 != (undefined1 *)*piVar5) {
        if ((local_80 != (undefined1 *)0x0) &&
           (iVar7 = *(int *)(local_80 + 0x14), *(int *)(local_80 + 0x14) = iVar7 + -1,
           iVar7 + -1 == 0)) {
          puStack_98 = (undefined1 *)0x0;
          FUN_005abfc0();
        }
        local_80 = (undefined1 *)*piVar5;
        puStack_98 = (undefined1 *)0x46ed8d;
        FUN_005844b0();
      }
      local_4._0_1_ = 4;
      if (iStack_74 != 0) {
        puStack_98 = (undefined1 *)0x46eda6;
        FUN_004098d0();
        iStack_74 = 0;
      }
    }
    if ((local_7c != 0) && (local_80 != (undefined1 *)0x0)) {
      puStack_70 = (undefined1 *)&puStack_98;
      if (local_80 != (undefined1 *)0x0) {
        *(int *)(local_80 + 0x14) = *(int *)(local_80 + 0x14) + 1;
      }
      local_4._0_1_ = 4;
      puStack_98 = local_80;
      FUN_00412de0();
      FUN_0050aea0();
    }
    iVar7 = *piVar8;
    if (iVar7 != local_7c) {
      if ((iVar7 != 0) &&
         (iVar6 = *(int *)(iVar7 + 0x14) + -1, *(int *)(iVar7 + 0x14) = iVar6, iVar6 == 0)) {
        puStack_98 = (undefined1 *)0x0;
        FUN_005abfc0();
      }
      *piVar8 = local_7c;
      puStack_98 = (undefined1 *)0x46ee14;
      FUN_005844b0();
    }
    puVar9 = puVar9 + 1;
    piVar8 = piVar8 + 1;
  } while ((int)puVar9 < 5);
  local_4._0_1_ = 3;
  if (local_80 != (undefined1 *)0x0) {
    puStack_98 = (undefined1 *)0x46ee38;
    FUN_004098d0();
    local_80 = (undefined1 *)0x0;
  }
  local_4._0_1_ = 2;
  if (local_7c != 0) {
    puStack_98 = (undefined1 *)0x46ee51;
    FUN_004098d0();
    local_7c = 0;
  }
  puStack_98 = (undefined1 *)0x1;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004040a0();
  if (iStack_58 != 0) {
    cVar1 = *(char *)(iStack_58 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      puStack_98 = (undefined1 *)(iStack_58 + -1);
      FUN_005fe5f0();
    }
    else {
      *(char *)(iStack_58 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

