/*
 * FUN_0045b360 at 0045b360
 * undefined FUN_0045b360(void)
 * Address ranges: 0045b360-0045b4d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0045b360(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00626fb6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004cfad0(param_2);
  uVar3 = 0xffffffff;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0xffffffff;
  param_1[0x5d] = 0;
  *(undefined1 *)(param_1 + 0x5e) = (undefined1)param_2;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  pcVar6 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3 - 1;
  local_4 = 0;
  cVar2 = FUN_00401940(uVar3,1);
  if (cVar2 != '\0') {
    puVar5 = (undefined4 *)&DAT_006b3f70;
    puVar7 = (undefined4 *)param_1[0x5f];
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    param_1[0x60] = uVar3;
    *(undefined1 *)(param_1[0x5f] + uVar3) = 0;
  }
  param_2._0_1_ = (undefined1)uVar3;
  *(undefined1 *)(param_1 + 0x62) = (undefined1)param_2;
  uVar3 = 0xffffffff;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  pcVar6 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar3 - 1;
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar3 = FUN_0040ce00();
  if (uVar3 < uVar4) {
    FUN_005fe5fb();
  }
  iVar1 = param_1[99];
  if (((iVar1 == 0) || (cVar2 = *(char *)(iVar1 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
    if (uVar4 == 0) {
      FUN_004040a0(1);
      goto LAB_0045b4b9;
    }
    if ((0x1f < (uint)param_1[0x65]) || ((uint)param_1[0x65] < uVar4)) {
      FUN_004040a0(1);
      goto LAB_0045b48b;
    }
  }
  else {
    if (uVar4 == 0) {
      *(char *)(iVar1 + -1) = cVar2 + -1;
      FUN_004040a0(0);
      goto LAB_0045b4b9;
    }
LAB_0045b48b:
    FUN_00401a60(uVar4);
  }
  puVar5 = (undefined4 *)&DAT_006b3f70;
  puVar7 = (undefined4 *)param_1[99];
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  param_1[100] = uVar4;
  *(undefined1 *)(uVar4 + param_1[99]) = 0;
LAB_0045b4b9:
  *param_1 = &PTR_FUN_0064d678;
  ExceptionList = pvStack_c;
  return param_1;
}

