/*
 * FUN_0051afc0 at 0051afc0
 * undefined FUN_0051afc0(void)
 * Address ranges: 0051afc0-0051b2c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_0051afc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  float10 fVar9;
  undefined1 local_a9;
  undefined1 local_a8 [4];
  undefined4 *puStack_a4;
  undefined1 local_98 [16];
  uint uStack_88;
  undefined4 *local_84;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006387f8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_84 = param_1;
  FUN_0051a190(param_2,param_3,param_4);
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x1c) = local_a9;
  FUN_004040a0(0);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  local_4._0_1_ = 4;
  *param_1 = &PTR_FUN_0064f5cc;
  local_98[0] = local_a9;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
  local_a8[0] = local_a9;
  local_4._0_1_ = 5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar8 = s_FadeInTime_00693408;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_FadeInTime_00693408,~uVar4 - 1);
  local_4._0_1_ = 6;
  iVar2 = FUN_005a3d10(local_a8,param_4,0,0,0x41200000,local_98);
  local_4._0_1_ = 7;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar9 = (float10)FUN_005ad390(iVar2 + 0x14,&local_a9);
    *(float *)(iVar2 + 0x60) = (float)fVar9;
  }
  uVar3 = __ftol();
  param_1[0x14] = uVar3;
  local_4._0_1_ = 6;
  FUN_005a3ce0();
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004040a0(1);
  local_a8[0] = local_a9;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_006b3f70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  uStack_88 = uVar4;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    puVar6 = (undefined4 *)&DAT_006b3f70;
    puVar7 = puStack_a4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    FUN_00404190(uVar4);
  }
  local_98[0] = local_a9;
  local_4._0_1_ = 8;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar8 = s_FadeOutTime_006933fc;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_FadeOutTime_006933fc,~uVar4 - 1);
  local_4._0_1_ = 9;
  iVar2 = FUN_005a3d10(local_98,param_4,0x3f800000,0,0x41200000,local_a8);
  local_4._0_1_ = 10;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar9 = (float10)FUN_005ad390(iVar2 + 0x14,&local_a9);
    *(float *)(iVar2 + 0x60) = (float)fVar9;
  }
  uVar3 = __ftol();
  param_1[0x15] = uVar3;
  local_4._0_1_ = 9;
  FUN_005a3ce0();
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004040a0(1);
  if (puStack_a4 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puStack_a4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)puStack_a4 + -1));
    }
    else {
      *(char *)((int)puStack_a4 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

