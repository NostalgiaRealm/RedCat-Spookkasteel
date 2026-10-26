/*
 * FUN_00552b10 at 00552b10
 * undefined FUN_00552b10(void)
 * Address ranges: 00552b10-00552df8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00552b10(undefined4 *param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 local_ad;
  undefined1 local_ac [4];
  char *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c [4];
  char *local_98;
  undefined1 local_8c [4];
  int local_88;
  undefined4 *local_7c;
  undefined1 local_64 [76];
  float local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e237;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_7c = param_1;
  FUN_005ab4a0();
  *param_1 = &PTR_FUN_0064e794;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 8) = *param_3;
  FUN_004040a0(0);
  FUN_0040cc00(param_3,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0xc] = param_2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0x3f800000;
  *param_1 = &PTR_FUN_0064f818;
  local_9c[0] = local_ad;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s___Settings_Volume_ini_006a1f34;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar6 = s___Settings_Volume_ini_006a1f34;
    pcVar7 = local_98;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_00404190(uVar4);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  local_ac[0] = local_ad;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_Volumes_006a1f2c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar6 = s_Volumes_006a1f2c;
    pcVar7 = local_a8;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_00404190(uVar4);
  }
  local_4._0_1_ = 3;
  FUN_005ac8b0(param_3,local_ac,0x3f800000,local_9c,0);
  local_4._0_1_ = 4;
  if (local_18 == 0.0) {
    fVar8 = (float10)FUN_005ad390(local_64,&local_ad);
    local_18 = (float)fVar8;
  }
  else {
    fVar8 = (float10)local_18;
  }
  param_1[0xe] = (float)fVar8;
  if ((float10)1.0 < fVar8) {
    param_1[0xe] = 0x3f800000;
    puVar2 = *(undefined1 **)(param_3 + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    uVar3 = FUN_005ae390(local_8c,s__s_volume_setting_too_high___0_<_006a1ef8,puVar2);
    local_4._0_1_ = 5;
    FUN_005aff00(uVar3);
    local_4._0_1_ = 4;
    FUN_004040a0(1);
  }
  if ((float)param_1[0xe] < 0.0) {
    param_1[0xe] = 0;
    puVar2 = *(undefined1 **)(param_3 + 4);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    uVar3 = FUN_005ae390(local_8c,s__s_volume_setting_too_low___0_<__006a1ec4,puVar2);
    local_4._0_1_ = 6;
    FUN_005aff00(uVar3);
    if (local_88 != 0) {
      cVar1 = *(char *)(local_88 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_88 + -1));
      }
      else {
        *(char *)(local_88 + -1) = cVar1 + -1;
      }
    }
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_005acca0();
  if (local_a8 != (char *)0x0) {
    cVar1 = local_a8[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_a8 + -1);
    }
    else {
      local_a8[-1] = cVar1 + -1;
    }
  }
  local_a8 = (char *)0x0;
  local_a4 = 0;
  local_a0 = 0;
  if (local_98 != (char *)0x0) {
    cVar1 = local_98[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_98 + -1);
    }
    else {
      local_98[-1] = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

