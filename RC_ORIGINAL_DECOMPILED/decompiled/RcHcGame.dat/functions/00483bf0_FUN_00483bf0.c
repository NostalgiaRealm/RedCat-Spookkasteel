/*
 * FUN_00483bf0 at 00483bf0
 * undefined FUN_00483bf0(void)
 * Address ranges: 00483bf0-00483f32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00483bf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  float10 fVar10;
  undefined1 local_a5;
  undefined1 local_a4 [4];
  char *local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 local_94 [4];
  undefined4 *puStack_90;
  undefined4 *local_84;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006297c5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_84 = param_1;
  FUN_0051a190(param_2,param_3,param_4);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  local_4 = 1;
  *param_1 = &PTR_FUN_0064e3dc;
  local_a4[0] = local_a5;
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
    pcVar7 = &DAT_006b3f70;
    pcVar9 = local_a0;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(uVar4);
  }
  local_4._0_1_ = 2;
  local_94[0] = local_a5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar7 = s_FadeInTime_00693408;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_FadeInTime_00693408,~uVar4 - 1);
  local_4._0_1_ = 3;
  iVar2 = FUN_005a3d10(local_94,param_4,0x40400000,0,0x41200000,local_a4);
  local_4._0_1_ = 4;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar10 = (float10)FUN_005ad390(iVar2 + 0x14,&local_a5);
    *(float *)(iVar2 + 0x60) = (float)fVar10;
  }
  uVar3 = __ftol();
  param_1[0x14] = uVar3;
  local_4._0_1_ = 3;
  FUN_005a3ce0();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004040a0(1);
  local_94[0] = local_a5;
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
    puVar8 = puStack_90;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_00404190(uVar4);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  local_a4[0] = local_a5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar7 = s_FadeOutTime_006933fc;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar7 = s_FadeOutTime_006933fc;
    pcVar9 = local_a0;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(uVar4);
  }
  local_4._0_1_ = 6;
  iVar2 = FUN_005a3d10(local_a4,param_4,0x40400000,0,0x41200000,local_94);
  local_4._0_1_ = 7;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar10 = (float10)FUN_005ad390(iVar2 + 0x14,&local_a5);
    *(float *)(iVar2 + 0x60) = (float)fVar10;
  }
  uVar3 = __ftol();
  param_1[0x15] = uVar3;
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_005a3ce0();
  if (local_a0 != (char *)0x0) {
    cVar1 = local_a0[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_a0 + -1);
    }
    else {
      local_a0[-1] = cVar1 + -1;
    }
  }
  local_a0 = (char *)0x0;
  uStack_9c = 0;
  uStack_98 = 0;
  if (puStack_90 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puStack_90 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)puStack_90 + -1));
    }
    else {
      *(char *)((int)puStack_90 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

