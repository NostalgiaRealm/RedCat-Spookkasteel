/*
 * FUN_005e8cb0 at 005e8cb0
 * undefined FUN_005e8cb0(void)
 * Address ranges: 005e8cb0-005e8dc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005e8cb0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  void *pvVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00646b10;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = param_2;
  local_4 = 0;
  *param_1 = &PTR_FUN_0065154c;
  FUN_005ff4d6(&DAT_006a1624);
  local_4._0_1_ = 1;
  puVar2 = (undefined4 *)FUN_0060e6d3();
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)*puVar2;
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)puVar2[1];
  pcVar7 = (char *)puVar2[2];
  uVar5 = 0xffffffff;
  pcVar6 = pcVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar3 = operator_new(uVar5);
  pcVar6 = pcVar3;
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar6 = *pcVar7;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar6 = s_false_0068d2d0;
  param_1[2] = pcVar3;
  uVar5 = 0xffffffff;
  pcVar7 = s_false_0068d2d0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pvVar4 = operator_new(uVar5);
  if (uVar5 != 0) {
    do {
      pcVar6[(int)pvVar4 + -0x68d2d0] = *pcVar6;
      pcVar6 = pcVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar8 = &DAT_006b0fa0;
  param_1[4] = pvVar4;
  uVar5 = 0xffffffff;
  pcVar7 = &DAT_006b0fa0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pvVar4 = operator_new(uVar5);
  if (uVar5 != 0) {
    do {
      puVar8[(int)pvVar4 + -0x6b0fa0] = *puVar8;
      puVar8 = puVar8 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  param_1[5] = pvVar4;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ff58f();
  ExceptionList = local_c;
  return param_1;
}

