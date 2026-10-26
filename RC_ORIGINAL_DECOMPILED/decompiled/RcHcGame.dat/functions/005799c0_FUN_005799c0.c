/*
 * FUN_005799c0 at 005799c0
 * undefined FUN_005799c0(void)
 * Address ranges: 005799c0-00579bf8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005799c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641b22;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar3 = operator_new(0x118);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    uVar4 = FUN_005033f0(local_2c,*param_1,s_EffectBolt_006a4ef4);
    local_4 = CONCAT31(local_4._1_3_,1);
    param_1 = (undefined4 *)FUN_00577cd0(uVar4,param_1);
  }
  local_4 = 0xffffffff;
  if ((pvVar3 != (void *)0x0) && (local_28 != (char *)0x0)) {
    cVar2 = local_28[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(local_28 + -1);
    }
    else {
      local_28[-1] = cVar2 + -1;
    }
  }
  pcVar7 = (char *)*puVar1;
  local_2c[0] = param_1._0_1_;
  FUN_004040a0(0);
  local_4 = 3;
  if (pcVar7 == (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      pcVar7 = &DAT_006b3f70;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)local_28 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        local_28 = local_28 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_28 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        local_28 = local_28 + 1;
      }
      FUN_00404190(uVar5);
    }
  }
  else {
    uVar5 = 0xffffffff;
    pcVar8 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      pcVar8 = local_28;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      local_28[uVar5] = '\0';
      local_24 = uVar5;
    }
  }
  FUN_00503ae0(local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00502350(puVar1[5] != 0);
  pcVar7 = (char *)puVar1[1];
  local_1c[0] = param_1._0_1_;
  FUN_004040a0(0);
  local_4 = 4;
  if (pcVar7 != (char *)0x0) {
    uVar5 = 0xffffffff;
    pcVar8 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      pcVar8 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      local_18[uVar5] = '\0';
      local_14 = uVar5;
    }
  }
  FUN_0040cc00(local_1c,0,0xffffffff);
  if (local_18 != (char *)0x0) {
    cVar2 = local_18[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      local_18[-1] = cVar2 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

