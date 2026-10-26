/*
 * FUN_005e1430 at 005e1430
 * undefined FUN_005e1430(void)
 * Address ranges: 005e1430-005e1466
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005e1430(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar2 = (char *)FUN_005cf3b0(uVar3);
  if (pcVar2 != (char *)0x0) {
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *param_1;
      param_1 = param_1 + 1;
      pcVar2 = pcVar2 + 1;
    }
  }
  return;
}

