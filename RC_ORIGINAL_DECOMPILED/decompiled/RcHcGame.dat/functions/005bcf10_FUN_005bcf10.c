/*
 * FUN_005bcf10 at 005bcf10
 * undefined FUN_005bcf10(void)
 * Address ranges: 005bcf10-005bcfa5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bcf10(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  pcVar4 = param_4;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (0x78 < ~uVar2 - 1) {
    return 0;
  }
  if (0x27 < *(int *)(param_1 + 0x34ec4)) {
    return 0;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_4 + 1;
    cVar1 = *param_4;
    param_4 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  pcVar5 = (char *)(*(int *)(param_1 + 0x34ec4) * 0x80 + 0x33acc + param_1);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x34ec4) * 0x80 + 0x33ac4 + param_1) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x34ec4) * 0x80 + 0x33ac8 + param_1) = param_3;
  *(int *)(param_1 + 0x34ec4) = *(int *)(param_1 + 0x34ec4) + 1;
  return 1;
}

