/*
 * FUN_00554280 at 00554280
 * undefined FUN_00554280(void)
 * Address ranges: 00554280-00554590
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00554280(undefined4 param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 local_90 [4];
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c [4];
  int local_78;
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e44a;
  local_c = ExceptionList;
  local_80 = 0;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  local_4 = 1;
  FUN_004040a0(0);
  local_4._0_1_ = 2;
  if (DAT_006ba77c == 0) {
    uVar3 = 0xffffffff;
    pcVar5 = s_Collision_006a2100;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = ~uVar3 - 1;
    pcVar5 = s_Collision_006a2100;
  }
  else if (DAT_006ba77c == 1) {
    uVar3 = 0xffffffff;
    pcVar5 = s_Render_006a210c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = ~uVar3 - 1;
    pcVar5 = s_Render_006a210c;
  }
  else if (DAT_006ba77c == 2) {
    uVar3 = 0xffffffff;
    pcVar5 = s_Dynamic_006a2114;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = ~uVar3 - 1;
    pcVar5 = s_Dynamic_006a2114;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar5 = s_UNKNOWN_006a211c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = ~uVar3 - 1;
    pcVar5 = s_UNKNOWN_006a211c;
  }
  FUN_004040f0(pcVar5,iVar4);
  if (param_2 == '\0') {
    uVar3 = 0xffffffff;
    pcVar5 = &DAT_00698944;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    puVar6 = &DAT_00698944;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar5 = &DAT_00698948;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    puVar6 = &DAT_00698948;
  }
  FUN_004040f0(puVar6,~uVar3 - 1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = &DAT_006a20fc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006a20fc,~uVar3 - 1);
  local_4._0_1_ = 3;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = &DAT_006a20f8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006a20f8,~uVar3 - 1);
  local_4._0_1_ = 4;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_Rendering_Bounding_Boxes_is_006a20d8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Rendering_Bounding_Boxes_is_006a20d8,~uVar3 - 1);
  local_4._0_1_ = 5;
  uVar2 = FUN_0044e370(local_1c,local_6c,local_90);
  local_4._0_1_ = 6;
  uVar2 = FUN_0044e370(local_2c,uVar2,local_5c);
  local_4._0_1_ = 7;
  uVar2 = FUN_0044e370(local_3c,uVar2,local_7c);
  local_4._0_1_ = 8;
  FUN_0044e370(param_1,uVar2,local_4c);
  local_80 = 1;
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004040a0(1);
  if (local_8c != 0) {
    cVar1 = *(char *)(local_8c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_8c + -1);
    }
    else {
      *(char *)(local_8c + -1) = cVar1 + -1;
    }
  }
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  if (local_78 != 0) {
    cVar1 = *(char *)(local_78 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_78 + -1);
    }
    else {
      *(char *)(local_78 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

