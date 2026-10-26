/*
 * FUN_005a2100 at 005a2100
 * undefined FUN_005a2100(void)
 * Address ranges: 005a2100-005a2271
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __fastcall FUN_005a2100(undefined1 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_15;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00645086;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = local_15;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = local_15;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x20] = local_15;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  local_4 = 2;
  uStack_3 = 0;
  FUN_00514e80(0);
  uVar3 = 0xffffffff;
  pcVar6 = (char *)&DAT_006a7a3c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar3 = ~uVar3 - 1;
  _local_4 = CONCAT31(uStack_3,3);
  cVar2 = FUN_00401940(uVar3,1);
  if (cVar2 != '\0') {
    puVar5 = &DAT_006a7a3c;
    puVar7 = *(undefined4 **)(param_1 + 4);
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
    *(uint *)(param_1 + 8) = uVar3;
    *(undefined1 *)(*(int *)(param_1 + 4) + uVar3) = 0;
  }
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar3 - 1;
  uVar3 = FUN_0040ce00();
  if (uVar3 < uVar4) {
    FUN_005fe5fb();
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 0) || (cVar2 = *(char *)(iVar1 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
    if (uVar4 == 0) {
      FUN_004040a0(1);
      goto LAB_005a2253;
    }
    if ((0x1f < *(uint *)(param_1 + 0x1c)) || (*(uint *)(param_1 + 0x1c) < uVar4)) {
      FUN_004040a0(1);
      goto LAB_005a2225;
    }
  }
  else {
    if (uVar4 == 0) {
      *(char *)(iVar1 + -1) = cVar2 + -1;
      FUN_004040a0(0);
      goto LAB_005a2253;
    }
LAB_005a2225:
    FUN_00401a60(uVar4);
  }
  puVar5 = (undefined4 *)&DAT_006b3f70;
  puVar7 = *(undefined4 **)(param_1 + 0x14);
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
  FUN_00404190(uVar4);
LAB_005a2253:
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x30] = 0;
  ExceptionList = pvStack_c;
  return param_1;
}

