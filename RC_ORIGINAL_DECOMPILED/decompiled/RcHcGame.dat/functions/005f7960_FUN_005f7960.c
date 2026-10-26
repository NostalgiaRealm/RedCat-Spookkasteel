/*
 * FUN_005f7960 at 005f7960
 * undefined FUN_005f7960(void)
 * Address ranges: 005f7960-005f7a05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_005f7960(undefined1 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = param_1._0_1_;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar2 = 0xffffffff;
    pcVar5 = (char *)&DAT_006a15d8;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 == '\0') {
      return param_1;
    }
    puVar4 = &DAT_006a15d8;
  }
  else {
    *param_1 = param_1._0_1_;
    uVar2 = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    pcVar5 = (char *)&DAT_006b1538;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 == '\0') {
      return param_1;
    }
    puVar4 = &DAT_006b1538;
  }
  puVar6 = *(undefined4 **)(param_1 + 4);
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
  *(uint *)(param_1 + 8) = uVar2;
  *(undefined1 *)(*(int *)(param_1 + 4) + uVar2) = 0;
  return param_1;
}

