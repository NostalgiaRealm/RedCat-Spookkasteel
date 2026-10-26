/*
 * FUN_10001110 at 10001110
 * char * __cdecl FUN_10001110(char * param_1, undefined4 param_2)
 * Address ranges: 10001110-1000118b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_10001110(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar2 = _malloc(0x1f0c);
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar6 = pcVar2;
  for (iVar3 = 0x7c3; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  pcVar7 = pcVar2;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar2[0x1f04] = -1;
  pcVar2[0x1f05] = -1;
  pcVar2[0x1f06] = -1;
  pcVar2[0x1f07] = -1;
  *(undefined4 *)(pcVar2 + 0x100) = param_2;
  *(char **)(pcVar2 + 0x1f08) = pcVar2;
  iVar3 = FUN_10001190((int)pcVar2);
  if (iVar3 == 0) {
    FUN_10003f4c(pcVar2);
    return (char *)0x0;
  }
  return pcVar2;
}

