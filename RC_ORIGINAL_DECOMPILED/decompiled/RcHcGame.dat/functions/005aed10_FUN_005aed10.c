/*
 * FUN_005aed10 at 005aed10
 * undefined FUN_005aed10(void)
 * Address ranges: 005aed10-005aee1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_005aed10(char *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  
  if (param_2 != '\0') {
    *param_1 = param_2;
    uVar3 = 0xffffffff;
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    pcVar6 = (char *)&DAT_006a9064;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar3 - 1;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 == '\0') {
      return param_1;
    }
    puVar5 = &DAT_006a9064;
    goto LAB_005aedfb;
  }
  *param_1 = '\0';
  uVar3 = 0xffffffff;
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  pcVar6 = (char *)&DAT_006a9060;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar3 - 1;
  uVar3 = FUN_0040ce00();
  if (uVar3 < uVar4) {
    FUN_005fe5fb();
  }
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (cVar2 = *(char *)(iVar1 + -1), cVar2 == '\0')) || (cVar2 == -1)) {
    if (uVar4 == 0) {
      FUN_004040a0(1);
      return param_1;
    }
    if ((0x1f < *(uint *)(param_1 + 0xc)) || (*(uint *)(param_1 + 0xc) < uVar4)) {
      FUN_004040a0(1);
      goto LAB_005aedec;
    }
  }
  else {
    if (uVar4 == 0) {
      *(char *)(iVar1 + -1) = cVar2 + -1;
      FUN_004040a0(0);
      return param_1;
    }
LAB_005aedec:
    FUN_00401a60(uVar4);
  }
  puVar5 = &DAT_006a9060;
LAB_005aedfb:
  puVar7 = *(undefined4 **)(param_1 + 4);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  *(uint *)(param_1 + 8) = uVar4;
  *(undefined1 *)(*(int *)(param_1 + 4) + uVar4) = 0;
  return param_1;
}

