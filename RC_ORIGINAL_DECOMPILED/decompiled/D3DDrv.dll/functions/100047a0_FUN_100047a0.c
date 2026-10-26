/*
 * FUN_100047a0 at 100047a0
 * char * __cdecl FUN_100047a0(char * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 100047a0-100047b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_100047a0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar2 = _malloc(0x5310);
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar7 = pcVar2;
  for (iVar3 = 0x14c4; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar7[0] = '\0';
    pcVar7[1] = '\0';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7 = pcVar7 + 4;
  }
  *(undefined4 *)(pcVar2 + 0x104) = param_2;
  *(undefined4 *)(pcVar2 + 0x108) = param_3;
  *(undefined4 *)(pcVar2 + 0x10c) = param_4;
  uVar4 = 0xffffffff;
  *(char **)pcVar2 = pcVar2;
  do {
    pcVar7 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = pcVar2;
  for (uVar5 = uVar4 >> 2; pcVar7 = pcVar7 + 4, uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return pcVar2;
}

