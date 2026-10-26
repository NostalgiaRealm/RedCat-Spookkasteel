/*
 * FUN_004a9900 at 004a9900
 * undefined FUN_004a9900(void)
 * Address ranges: 004a9900-004a9bb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004a9900(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  float10 fVar10;
  undefined1 local_c9;
  undefined1 local_c8 [4];
  char *local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [4];
  undefined4 *local_b4;
  undefined1 local_a8 [4];
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 *local_98;
  undefined4 *local_94;
  undefined1 local_90 [132];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062de5c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_98 = param_1;
  uVar2 = FUN_005ae390(local_90,s_CommunicatorAnimator_00695f78);
  local_4 = 0;
  FUN_00501cb0(uVar2);
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  FUN_004ad120(param_1);
  param_1[0x4b] = param_2;
  local_94 = param_1 + 0x50;
  param_1[0x4c] = param_3;
  param_1[0x4d] = 0xffffffff;
  param_1[0x4e] = 0xffffffff;
  param_1[0x4f] = 0;
  *(undefined1 *)local_94 = local_c9;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  local_4._0_1_ = 4;
  FUN_004aa550(0);
  local_b8[0] = local_c9;
  local_4 = CONCAT31(local_4._1_3_,5);
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
    puVar8 = local_b4;
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
  local_4 = CONCAT31(local_4._1_3_,6);
  local_c8[0] = local_c9;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar7 = s_CharPrintTime_00695f68;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar7 = s_CharPrintTime_00695f68;
    pcVar9 = local_c4;
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
  local_4._0_1_ = 7;
  uVar2 = FUN_004a9bc0(local_a8);
  local_4._0_1_ = 8;
  iVar3 = FUN_005a3d10(local_c8,uVar2,0x3dcccccd,0,0x3f800000,local_b8);
  local_4._0_1_ = 9;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar10 = (float10)FUN_005ad390(iVar3 + 0x14,&local_c9);
    *(float *)(iVar3 + 0x60) = (float)fVar10;
  }
  uVar2 = __ftol();
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_005a3ce0();
  if (iStack_a4 != 0) {
    cVar1 = *(char *)(iStack_a4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_a4 + -1));
    }
    else {
      *(char *)(iStack_a4 + -1) = cVar1 + -1;
    }
  }
  iStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  if (local_c4 != (char *)0x0) {
    cVar1 = local_c4[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_c4 + -1);
    }
    else {
      local_c4[-1] = cVar1 + -1;
    }
  }
  local_c4 = (char *)0x0;
  uStack_c0 = 0;
  uStack_bc = 0;
  if (local_b4 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_b4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)local_b4 + -1));
    }
    else {
      *(char *)((int)local_b4 + -1) = cVar1 + -1;
    }
  }
  param_1[0x54] = uVar2;
  *param_1 = &PTR_FUN_0064e91c;
  ExceptionList = pvStack_c;
  return param_1;
}

