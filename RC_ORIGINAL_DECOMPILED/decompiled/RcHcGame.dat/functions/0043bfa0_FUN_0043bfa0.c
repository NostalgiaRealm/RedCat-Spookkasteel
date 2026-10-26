/*
 * FUN_0043bfa0 at 0043bfa0
 * undefined FUN_0043bfa0(void)
 * Address ranges: 0043bfa0-0043c2c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0043bfa0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 local_6c [4];
  char *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [4];
  undefined4 *local_58;
  undefined1 local_4c [4];
  undefined4 *local_48;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00624501;
  local_c = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  local_4c[0] = (undefined1)param_2;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar12 = &DAT_006b3f70;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar4 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar4 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar4 = FUN_00401940(uVar9,1);
  if (cVar4 != '\0') {
    puVar11 = (undefined4 *)&DAT_006b3f70;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *local_48 = *puVar11;
      puVar11 = puVar11 + 1;
      local_48 = local_48 + 1;
    }
    for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)local_48 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      local_48 = (undefined4 *)((int)local_48 + 1);
    }
    FUN_00404190(uVar9);
  }
  local_4 = 0;
  local_5c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar12 = (char *)&DAT_00690894;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar4 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar4 != '\0');
  uVar9 = ~uVar9 - 1;
  cVar4 = FUN_00401940(uVar9,1);
  if (cVar4 != '\0') {
    puVar11 = &DAT_00690894;
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
  local_4._0_1_ = 1;
  uVar5 = FUN_0043bdf0(local_1c,param_2);
  local_4._0_1_ = 2;
  uVar6 = FUN_005033a0(local_2c,local_5c);
  local_4._0_1_ = 3;
  FUN_004e0c50(uVar6,uVar5,CONCAT31((int3)((uint)local_4c >> 8),DAT_006b594c),0,10000,param_3,
               local_4c);
  local_4._0_1_ = 8;
  FUN_004040a0(1);
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  param_1[0xd5] = param_2;
  param_1[0xd6] = 0;
  *param_1 = &PTR_FUN_0064c638;
  *(undefined1 *)(param_1 + 0x82) = 1;
  FUN_0049b8d0();
  pvVar7 = operator_new(0xb10);
  local_4 = CONCAT31(local_4._1_3_,9);
  if (pvVar7 == (void *)0x0) {
    iVar8 = 0;
  }
  else {
    uVar9 = 0xffffffff;
    pcVar12 = s_CoinPickUpEffect_006909bc;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar4 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar4 != '\0');
    uVar9 = ~uVar9 - 1;
    local_6c[0] = (undefined1)param_2;
    local_68 = (char *)0x0;
    local_64 = 0;
    local_60 = 0;
    cVar4 = FUN_00401940(uVar9,1);
    if (cVar4 != '\0') {
      pcVar12 = s_CoinPickUpEffect_006909bc;
      pcVar13 = local_68;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_4 = CONCAT31(local_4._1_3_,10);
    uVar5 = FUN_005033a0(local_3c,local_6c);
    bVar3 = true;
    bVar2 = true;
    local_4 = 0xb;
    iVar8 = FUN_004689a0(uVar5);
  }
  piVar1 = param_1 + 0xd6;
  *piVar1 = iVar8;
  if (bVar3) {
    if (local_38 != 0) {
      cVar4 = *(char *)(local_38 + -1);
      if ((cVar4 == '\0') || (cVar4 == -1)) {
        FUN_005fe5f0((char *)(local_38 + -1));
      }
      else {
        *(char *)(local_38 + -1) = cVar4 + -1;
      }
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
  }
  local_4 = 5;
  if ((bVar2) && (local_68 != (char *)0x0)) {
    cVar4 = local_68[-1];
    if ((cVar4 == '\0') || (cVar4 == -1)) {
      FUN_005fe5f0(local_68 + -1);
    }
    else {
      local_68[-1] = cVar4 + -1;
    }
  }
  if (*piVar1 != 0) {
    FUN_00509a90(*piVar1,piVar1);
  }
  ExceptionList = local_c;
  return param_1;
}

