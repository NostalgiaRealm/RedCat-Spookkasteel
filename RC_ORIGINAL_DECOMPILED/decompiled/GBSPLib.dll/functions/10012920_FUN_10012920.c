/*
 * FUN_10012920 at 10012920
 * undefined FUN_10012920(void)
 * Address ranges: 10012920-10012954
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012920(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar3 = ~uVar2 - 2;
  if (0 < iVar3) {
    cVar1 = param_1[iVar3];
    do {
      if (cVar1 == '.') break;
      cVar1 = param_1[iVar3 + -1];
      iVar3 = iVar3 + -1;
      if (cVar1 == '/') {
        return;
      }
    } while (0 < iVar3);
  }
  if (iVar3 != 0) {
    param_1[iVar3] = '\0';
  }
  return;
}

