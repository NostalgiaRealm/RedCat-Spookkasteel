/*
 * FUN_004cbb50 at 004cbb50
 * undefined FUN_004cbb50(void)
 * Address ranges: 004cbb50-004cbc8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004cbb50(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630cfc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004cfad0(param_2);
  uVar2 = 0xffffffff;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)((int)param_1 + 0x169) = 0;
  param_1[0x5b] = 1;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)((int)param_1 + 0x171) = 0;
  *(undefined1 *)((int)param_1 + 0x172) = 0;
  *(undefined1 *)((int)param_1 + 0x173) = 0;
  param_1[0x5d] = 0xffffffff;
  param_1[0x5e] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x66) = 1;
  *(undefined1 *)(param_1 + 0x68) = (undefined1)param_2;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  pcVar5 = &DAT_006b3f70;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  local_4 = 1;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    puVar4 = (undefined4 *)&DAT_006b3f70;
    puVar6 = (undefined4 *)param_1[0x69];
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    param_1[0x6a] = uVar2;
    *(undefined1 *)(param_1[0x69] + uVar2) = 0;
  }
  param_2._0_1_ = (undefined1)uVar2;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x6c) = (undefined1)param_2;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *param_1 = &PTR_FUN_0064eeb8;
  ExceptionList = local_c;
  return param_1;
}

