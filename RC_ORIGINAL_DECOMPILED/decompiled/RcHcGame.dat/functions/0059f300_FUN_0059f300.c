/*
 * FUN_0059f300 at 0059f300
 * undefined FUN_0059f300(void)
 * Address ranges: 0059f300-0059f5ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_0059f300(undefined1 *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 local_6c [4];
  undefined4 *puStack_68;
  undefined1 local_5c [4];
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 local_4c [4];
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c [4];
  undefined4 *local_38;
  undefined1 local_2c [4];
  int iStack_28;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644bd7;
  pvStack_c = ExceptionList;
  local_2c[0] = (undefined1)param_2;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_4c[0] = (undefined1)param_2;
  local_4 = 1;
  FUN_004040a0(0);
  local_4._0_1_ = 2;
  local_5c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  local_4._0_1_ = 3;
  local_1c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  local_6c[0] = (undefined1)param_2;
  local_4._0_1_ = 4;
  FUN_004040a0(0);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (param_2 == 0) {
    local_3c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *local_38 = *puVar6;
        puVar6 = puVar6 + 1;
        local_38 = local_38 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)local_38 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        local_38 = (undefined4 *)((int)local_38 + 1);
      }
      FUN_00404190(uVar4);
    }
    local_4._0_1_ = 6;
    pcVar2 = (code *)FUN_005a07f0(s_a_SubLevel____0_0069c4d8,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a72cc,0x3a3,local_3c);
    (*pcVar2)();
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_004040a0(1);
  }
  uVar3 = FUN_004f3d20(local_4c,local_5c,local_1c,local_6c);
  FUN_005b1140(uVar3);
  uVar4 = 0xffffffff;
  pcVar7 = (char *)&DAT_006a7678;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    puVar6 = &DAT_006a7678;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puStack_68 = *puVar6;
      puVar6 = puVar6 + 1;
      puStack_68 = puStack_68 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puStack_68 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puStack_68 = (undefined4 *)((int)puStack_68 + 1);
    }
    FUN_00404190(uVar4);
  }
  FUN_005b0ff0(local_2c,local_4c,local_5c,local_1c,local_6c);
  *param_1 = local_2c[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_2c,0,0xffffffff);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_004040a0(1);
  if (iStack_58 != 0) {
    cVar1 = *(char *)(iStack_58 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_58 + -1);
    }
    else {
      *(char *)(iStack_58 + -1) = cVar1 + -1;
    }
  }
  iStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  if (iStack_48 != 0) {
    cVar1 = *(char *)(iStack_48 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_48 + -1);
    }
    else {
      *(char *)(iStack_48 + -1) = cVar1 + -1;
    }
  }
  iStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  if (iStack_28 != 0) {
    cVar1 = *(char *)(iStack_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_28 + -1);
    }
    else {
      *(char *)(iStack_28 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

