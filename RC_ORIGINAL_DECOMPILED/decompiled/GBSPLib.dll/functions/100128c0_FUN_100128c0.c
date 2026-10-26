/*
 * FUN_100128c0 at 100128c0
 * undefined FUN_100128c0(void)
 * Address ranges: 100128c0-1001291e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100128c0(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  
  uVar3 = 0xffffffff;
  pcVar2 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  cVar1 = param_1[~uVar3 - 2];
  for (pcVar2 = param_1 + (~uVar3 - 2); (cVar1 != '/' && (pcVar2 != param_1)); pcVar2 = pcVar2 + -1)
  {
    if (cVar1 == '.') {
      return;
    }
    cVar1 = pcVar2[-1];
  }
  uVar3 = 0xffffffff;
  do {
    pcVar2 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar2 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar2;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  do {
    pcVar6 = param_1;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar6 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + -uVar3;
  pcVar6 = pcVar6 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}

