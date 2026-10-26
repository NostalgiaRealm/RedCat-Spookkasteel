/*
 * FUN_0053a050 at 0053a050
 * undefined FUN_0053a050(void)
 * Address ranges: 0053a050-0053a3f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_0053a050(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_25;
  int local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063bdc9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_20 = param_1;
  FUN_005ab4a0();
  *(undefined1 *)(param_1 + 5) = local_25;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  local_1c = 0x437f0000;
  local_18 = (undefined4 *)0x437f0000;
  param_1[0x17] = 0x437f0000;
  local_14 = 0x437f0000;
  local_10 = 0x437f0000;
  param_1[0x18] = 0x437f0000;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  *param_1 = &PTR_FUN_0064f788;
  param_1[0x19] = 0x437f0000;
  param_1[0x1a] = 0x437f0000;
  param_1[0x18] = 0x43000000;
  param_1[0x19] = 0;
  param_1[0xf] = 0x437f0000;
  param_1[0x10] = 0x437f0000;
  param_1[0x11] = 0x437f0000;
  param_1[0x12] = 0x437f0000;
  param_1[0xb] = 0x437f0000;
  param_1[0xc] = 0x437f0000;
  param_1[0xd] = 0x437f0000;
  param_1[0xe] = 0x437f0000;
  param_1[0x13] = 0x437f0000;
  param_1[0xb] = 0x43350000;
  param_1[0xc] = 0x43350000;
  param_1[0x14] = 0x437f0000;
  param_1[0xd] = 0x43350000;
  param_1[0x15] = 0x437f0000;
  param_1[0x16] = 0x437f0000;
  param_1[0x13] = 0x43200000;
  param_1[0x14] = 0x43200000;
  param_1[0x15] = 0x43200000;
  iVar2 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar2 = FUN_0055b280();
  }
  if (*(int *)(iVar2 + 0xd8) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_25);
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188,
                                  &local_1c);
    (*pcVar3)();
    local_4._0_1_ = 3;
    FUN_004040a0(1);
  }
  piVar4 = (int *)FUN_0050d730(&local_24,&DAT_006ba6e8);
  iVar2 = param_1[0x1b];
  local_4._0_1_ = 5;
  if (iVar2 != *piVar4) {
    if ((iVar2 != 0) &&
       (iVar5 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar5, iVar5 == 0)) {
      FUN_005abfc0(0);
    }
    param_1[0x1b] = *piVar4;
    FUN_005844b0();
  }
  local_4._0_1_ = 3;
  if (local_24 != 0) {
    FUN_004098d0();
  }
  if (param_1[0x1b] == 0) {
    local_1c = CONCAT31(local_1c._1_3_,local_25);
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 6;
    pcVar3 = (code *)FUN_005a07f0(s_m_MenuBitmap1Handle_IsNotNull____006a0fdc,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a0d5c,0x244,&local_1c);
    (*pcVar3)();
    local_4._0_1_ = 3;
    FUN_004040a0(1);
  }
  iVar2 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar2 = FUN_0055b280();
  }
  if (*(int *)(iVar2 + 0xd8) == 0) {
    local_1c = CONCAT31(local_1c._1_3_,local_25);
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 7;
    pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188,
                                  &local_1c);
    (*pcVar3)();
    local_4._0_1_ = 3;
    FUN_004040a0(1);
  }
  piVar4 = (int *)FUN_0050d730(&local_24,&DAT_006ba678);
  iVar2 = param_1[0x1c];
  local_4._0_1_ = 8;
  if (iVar2 != *piVar4) {
    if ((iVar2 != 0) &&
       (iVar5 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar5, iVar5 == 0)) {
      FUN_005abfc0(0);
    }
    param_1[0x1c] = *piVar4;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  if (local_24 != 0) {
    FUN_004098d0();
  }
  if (param_1[0x1c] == 0) {
    local_1c = CONCAT31(local_1c._1_3_,local_25);
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_18;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      FUN_00404190(uVar6);
    }
    local_4._0_1_ = 9;
    pcVar3 = (code *)FUN_005a07f0(s_m_MenuBitmap2Handle_IsNotNull____006a0fb8,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a0d5c,0x24b,&local_1c);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

