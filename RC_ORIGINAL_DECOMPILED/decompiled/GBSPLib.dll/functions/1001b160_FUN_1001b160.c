/*
 * FUN_1001b160 at 1001b160
 * undefined FUN_1001b160(void)
 * Address ranges: 1001b160-1001b24b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001b160(int param_1,char *param_2,char *param_3,int *param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0;
    }
    uVar2 = 0xffffffff;
    pcVar5 = *(char **)(param_1 + 8);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    if (param_5 < (int)uVar2) {
      return 0;
    }
    pcVar5 = *(char **)(param_1 + 8);
    pcVar6 = param_3;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  uVar3 = 0xffffffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  if ((param_5 < (int)(uVar3 + 1 + uVar2)) || (param_3 == (char *)0x0)) {
    return 0;
  }
  if (uVar2 == 0) {
    pcVar5 = param_3;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *param_2;
      param_2 = param_2 + 1;
      pcVar5 = pcVar5 + 1;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = (int)param_3;
    }
    if (*param_3 == '\0') {
      *(undefined2 *)param_3 = DAT_1003c708;
      param_3[2] = DAT_1003c70a;
    }
  }
  else {
    param_3[uVar2] = '\\';
    pcVar5 = param_3 + uVar2 + 1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *param_2;
      param_2 = param_2 + 1;
      pcVar5 = pcVar5 + 1;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = (int)(param_3 + uVar2 + 1);
      return 1;
    }
  }
  return 1;
}

