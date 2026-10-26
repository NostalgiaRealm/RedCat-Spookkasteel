/*
 * FUN_004a04a0 at 004a04a0
 * undefined FUN_004a04a0(void)
 * Address ranges: 004a04a0-004a05cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004a04a0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ce88;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ab4a0();
  param_1[5] = param_2;
  *(undefined1 *)(param_1 + 6) = (undefined1)param_2;
  uVar3 = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  pcVar6 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_4 = 0;
  if (0xfffffffd < uVar3) {
    FUN_005fe5fb();
  }
  iVar2 = param_1[7];
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004040a0(1);
      goto LAB_004a057c;
    }
    if ((0x1f < (uint)param_1[9]) || ((uint)param_1[9] < uVar3)) {
      FUN_004040a0(1);
      goto LAB_004a054c;
    }
  }
  else {
    if (uVar3 == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      FUN_004040a0(0);
      goto LAB_004a057c;
    }
LAB_004a054c:
    FUN_00401a60(uVar3);
  }
  puVar5 = (undefined4 *)&DAT_006b3f70;
  puVar7 = (undefined4 *)param_1[7];
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
  param_1[8] = uVar3;
  *(undefined1 *)(param_1[7] + uVar3) = 0;
LAB_004a057c:
  param_1[10] = 0;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0x10] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *param_1 = &PTR_FUN_0064e860;
  ExceptionList = pvStack_c;
  return param_1;
}

