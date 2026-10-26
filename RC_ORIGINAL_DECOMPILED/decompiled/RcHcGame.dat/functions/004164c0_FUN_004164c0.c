/*
 * FUN_004164c0 at 004164c0
 * undefined FUN_004164c0(void)
 * Address ranges: 004164c0-0041682c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004164c0(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *local_70;
  undefined1 uStack_59;
  int local_58;
  undefined1 *local_54;
  int *local_50;
  undefined1 local_4c [4];
  char *pcStack_48;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006212f8;
  pvStack_c = ExceptionList;
  local_54 = (undefined1 *)&local_70;
  local_4 = 0;
  local_70 = param_1;
  ExceptionList = &pvStack_c;
  if (param_1 != (undefined1 *)0x0) {
    ExceptionList = &pvStack_c;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  FUN_00427ab0();
  local_70 = (undefined1 *)0x0;
  local_3c[0] = param_1._0_1_;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  pcVar7 = s_transghost_bmp_0068fce8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_70 = (undefined1 *)(~uVar5 - 1);
  FUN_004040f0(s_transghost_bmp_0068fce8);
  local_4._0_1_ = 1;
  iVar2 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    local_70 = (undefined1 *)0x416545;
    iVar2 = FUN_0055b280();
  }
  if (*(int *)(iVar2 + 0xd8) == 0) {
    local_70 = (undefined1 *)0x0;
    local_4c[0] = param_1._0_1_;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_70 = (undefined1 *)(~uVar5 - 1);
    FUN_004040f0(&DAT_006b3f70);
    local_70 = local_4c;
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar3)();
    local_4._0_1_ = 1;
    local_70 = (undefined1 *)0x1;
    FUN_004040a0();
  }
  local_70 = local_3c;
  FUN_0050d980(&local_58);
  local_70 = (undefined1 *)0x1;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004040a0();
  local_70 = (undefined1 *)0x0;
  local_4c[0] = param_1._0_1_;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  local_70 = (undefined1 *)0x1;
  pcVar7 = s_transghost_a_bmp_0068fcd4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  puVar6 = (undefined1 *)(~uVar5 - 1);
  cVar1 = FUN_00401940(puVar6);
  if (cVar1 != '\0') {
    pcVar7 = s_transghost_a_bmp_0068fcd4;
    for (uVar5 = (uint)puVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcStack_48 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcStack_48 = pcStack_48 + 4;
    }
    for (uVar5 = (uint)puVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcStack_48 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcStack_48 = pcStack_48 + 1;
    }
    local_70 = puVar6;
    FUN_00404190();
  }
  local_4._0_1_ = 5;
  iVar2 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    local_70 = (undefined1 *)0x416644;
    iVar2 = FUN_0055b280();
  }
  if (*(int *)(iVar2 + 0xd8) == 0) {
    local_70 = (undefined1 *)0x0;
    auStack_2c[0] = param_1._0_1_;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_70 = (undefined1 *)(~uVar5 - 1);
    FUN_004040f0(&DAT_006b3f70);
    local_70 = auStack_2c;
    local_4._0_1_ = 6;
    pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar3)();
    local_4._0_1_ = 5;
    local_70 = (undefined1 *)0x1;
    FUN_004040a0();
  }
  local_70 = local_4c;
  FUN_0050d980(&local_54);
  local_70 = (undefined1 *)0x1;
  local_4._0_1_ = 8;
  FUN_004040a0();
  if (local_58 == 0) {
    local_70 = (undefined1 *)0x0;
    auStack_2c[0] = param_1._0_1_;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_70 = (undefined1 *)(~uVar5 - 1);
    FUN_004040f0(&DAT_006b3f70);
    local_70 = auStack_2c;
    local_4._0_1_ = 9;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar3)();
    local_4._0_1_ = 8;
    local_70 = (undefined1 *)0x1;
    FUN_004040a0();
  }
  local_70 = (undefined1 *)0x416751;
  iVar2 = (**(code **)(*local_50 + 0x9c))();
  if (*(int *)(iVar2 + 0x114) == 0) {
    local_70 = &uStack_59;
    FUN_00409810(&DAT_006b3f70);
    local_70 = auStack_1c;
    local_4._0_1_ = 10;
    pcVar3 = (code *)FUN_005a07f0(s_m_Actor____0_0068e768,s___AdamSource_AdamActor_h_0068e778,0x18d)
    ;
    (*pcVar3)();
    local_4._0_1_ = 8;
    local_70 = (undefined1 *)0x1;
    FUN_004040a0();
  }
  local_70 = (undefined1 *)0x0;
  uVar9 = 0x437f0000;
  uVar8 = 0;
  uVar4 = FUN_0050aa70(0,0x437f0000);
  FUN_005b5520(uVar4,uVar8,uVar9);
  local_4._0_1_ = 4;
  if (local_54 != (undefined1 *)0x0) {
    local_70 = (undefined1 *)0x4167df;
    FUN_004098d0();
    local_54 = (undefined1 *)0x0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_58 != 0) {
    local_70 = (undefined1 *)0x4167f5;
    FUN_004098d0();
    local_58 = 0;
  }
  local_4 = 0xffffffff;
  if ((param_1 != (undefined1 *)0x0) &&
     (iVar2 = *(int *)(param_1 + 0x14), *(int *)(param_1 + 0x14) = iVar2 + -1, iVar2 + -1 == 0)) {
    local_70 = (undefined1 *)0x0;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

