/*
 * FUN_005865f0 at 005865f0
 * undefined FUN_005865f0(void)
 * Address ranges: 005865f0-00586841
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005865f0(undefined4 *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_34;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642bd2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = operator_new(0x114);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    uVar3 = FUN_005033f0(local_2c,*param_1,s_EffectSpark_00696fd4);
    local_4 = CONCAT31(local_4._1_3_,1);
    local_34 = FUN_005860f0(uVar3,param_1);
  }
  local_4 = 0xffffffff;
  if ((pvVar2 != (void *)0x0) && (local_28 != (char *)0x0)) {
    cVar1 = local_28[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_28 + -1);
    }
    else {
      local_28[-1] = cVar1 + -1;
    }
  }
  pcVar6 = (char *)*param_1;
  local_2c[0] = param_1._0_1_;
  FUN_004040a0(0);
  local_4 = 3;
  if (pcVar6 == (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      pcVar6 = &DAT_006b3f70;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)local_28 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        local_28 = local_28 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *local_28 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        local_28 = local_28 + 1;
      }
      FUN_00404190(uVar4);
    }
  }
  else {
    uVar4 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      pcVar7 = local_28;
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
      local_28[uVar4] = '\0';
      local_24 = uVar4;
    }
  }
  FUN_00503ae0(local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  pcVar6 = (char *)param_1[1];
  local_1c[0] = param_1._0_1_;
  FUN_004040a0(0);
  local_4 = 4;
  if (pcVar6 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      pcVar7 = local_18;
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
      local_18[uVar4] = '\0';
      local_14 = uVar4;
    }
  }
  FUN_0040cc00(local_1c,0,0xffffffff);
  local_4 = 0xffffffff;
  if (local_18 != (char *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  local_18 = (char *)0x0;
  local_14 = 0;
  local_10 = 0;
  FUN_00502350(param_1[5] != 0);
  ExceptionList = local_c;
  return local_34;
}

