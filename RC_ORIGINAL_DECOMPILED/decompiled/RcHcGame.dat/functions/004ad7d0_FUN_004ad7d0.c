/*
 * FUN_004ad7d0 at 004ad7d0
 * undefined FUN_004ad7d0(void)
 * Address ranges: 004ad7d0-004ad8aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004ad7d0(undefined4 *param_1,undefined4 param_2)

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
  puStack_8 = &LAB_0062e2d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  *(undefined1 *)(param_1 + 5) = (undefined1)param_2;
  uVar2 = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  pcVar5 = &DAT_006b3f70;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  local_4 = 0;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    puVar4 = (undefined4 *)&DAT_006b3f70;
    puVar6 = (undefined4 *)param_1[6];
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
    param_1[7] = uVar2;
    *(undefined1 *)(uVar2 + param_1[6]) = 0;
  }
  param_1[9] = param_2;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_0064ea98;
  ExceptionList = local_c;
  return param_1;
}

