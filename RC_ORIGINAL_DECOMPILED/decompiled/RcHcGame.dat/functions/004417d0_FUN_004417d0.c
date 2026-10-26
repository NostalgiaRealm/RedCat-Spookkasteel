/*
 * FUN_004417d0 at 004417d0
 * undefined FUN_004417d0(void)
 * Address ranges: 004417d0-00441ae3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004417d0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined1 local_6c [4];
  char *local_68;
  undefined1 local_5c [4];
  undefined4 *local_58;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [16];
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00624db1;
  local_c = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  local_5c[0] = (undefined1)param_2;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar12 = &DAT_006b3f70;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar5 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar5 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar5 = FUN_00401940(uVar9,1);
  if (cVar5 != '\0') {
    puVar11 = (undefined4 *)&DAT_006b3f70;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *local_58 = *puVar11;
      puVar11 = puVar11 + 1;
      local_58 = local_58 + 1;
    }
    for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)local_58 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      local_58 = (undefined4 *)((int)local_58 + 1);
    }
    FUN_00404190(uVar9);
  }
  local_4 = 0;
  local_6c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar12 = s_IPotion_act_00690ce8;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar5 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar5 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar5 = FUN_00401940(uVar9,1);
  if (cVar5 != '\0') {
    pcVar12 = s_IPotion_act_00690ce8;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)local_68 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      local_68 = local_68 + 4;
    }
    for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *local_68 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      local_68 = local_68 + 1;
    }
    FUN_00404190(uVar9);
  }
  local_4._0_1_ = 1;
  local_3c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar12 = s_ItemPotion_00690c98;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar5 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar5 != '\0');
  FUN_004040f0(s_ItemPotion_00690c98,~uVar9 - 1);
  local_4._0_1_ = 2;
  uVar6 = FUN_005033a0(local_1c,local_3c);
  local_4._0_1_ = 3;
  FUN_004e0c50(uVar6,local_6c,0,0,10000,param_2,local_5c);
  local_4._0_1_ = 8;
  FUN_004040a0(1);
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  piVar1 = param_1 + 0xd5;
  *param_1 = &PTR_FUN_0064c908;
  *(undefined1 *)(param_1 + 0x82) = 1;
  *piVar1 = 0;
  FUN_0049b8d0();
  pvVar7 = operator_new(0xb10);
  local_4._0_1_ = 9;
  uVar4 = (undefined1)local_4;
  local_4._0_1_ = 9;
  if (pvVar7 == (void *)0x0) {
    iVar8 = 0;
    local_4._0_1_ = uVar4;
  }
  else {
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    uVar9 = 0xffffffff;
    pcVar12 = s_PotionPickUpEffect_00690cd4;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar5 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar5 != '\0');
    param_2._0_1_ = SUB41(pvVar7,0);
    local_4c[0] = (undefined1)param_2;
    FUN_004040f0(s_PotionPickUpEffect_00690cd4,~uVar9 - 1);
    local_4 = CONCAT31(local_4._1_3_,10);
    uVar6 = FUN_005033a0(local_2c,local_4c);
    bVar3 = true;
    bVar2 = true;
    local_4._0_1_ = 0xb;
    local_4._1_3_ = 0;
    iVar8 = FUN_004689a0(uVar6);
  }
  *piVar1 = iVar8;
  if (bVar2) {
    if (local_28 != 0) {
      cVar5 = *(char *)(local_28 + -1);
      if ((cVar5 == '\0') || (cVar5 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar5 + -1;
      }
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
  }
  local_4 = 5;
  if ((bVar3) && (local_48 != 0)) {
    cVar5 = *(char *)(local_48 + -1);
    if ((cVar5 == '\0') || (cVar5 == -1)) {
      FUN_005fe5f0((char *)(local_48 + -1));
    }
    else {
      *(char *)(local_48 + -1) = cVar5 + -1;
    }
  }
  if (*piVar1 != 0) {
    FUN_00509a90(*piVar1,piVar1);
  }
  ExceptionList = local_c;
  return param_1;
}

