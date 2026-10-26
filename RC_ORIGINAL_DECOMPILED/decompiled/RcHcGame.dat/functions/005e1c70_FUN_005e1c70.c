/*
 * FUN_005e1c70 at 005e1c70
 * undefined FUN_005e1c70(void)
 * Address ranges: 005e1c70-005e1cab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005e1c70(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar2 = 0xffffffff;
  pcVar4 = (char *)*param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  if (param_3 < (int)(uVar2 - 1)) {
    return 0;
  }
  pcVar4 = (char *)*param_1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    param_2 = param_2 + 1;
  }
  return 1;
}

