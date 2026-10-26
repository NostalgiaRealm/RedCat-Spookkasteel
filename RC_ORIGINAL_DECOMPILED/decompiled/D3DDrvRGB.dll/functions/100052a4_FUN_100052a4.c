/*
 * FUN_100052a4 at 100052a4
 * char * __fastcall FUN_100052a4(undefined4 param_1, char * param_2, char * param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 100052a4-100052fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __fastcall
FUN_100052a4(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar6 = param_2;
  for (iVar2 = 0x14c4; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  *(undefined4 *)(param_2 + 0x104) = param_4;
  *(undefined4 *)(param_2 + 0x108) = param_5;
  *(undefined4 *)(param_2 + 0x10c) = param_6;
  uVar3 = 0xffffffff;
  *(char **)param_2 = param_2;
  do {
    pcVar6 = param_3;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = param_2;
  for (uVar4 = uVar3 >> 2; pcVar6 = pcVar6 + 4, uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return param_2;
}

