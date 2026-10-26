/*
 * FUN_005afe30 at 005afe30
 * undefined FUN_005afe30(void)
 * Address ranges: 005afe30-005afefd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005afe30(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char local_12c [300];
  
  if (DAT_006cadcc == '\0') {
    iVar2 = -1;
    DAT_006cadcc = 1;
    cVar5 = '\0';
    pcVar6 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      uVar3 = 0xffffffff;
      pcVar6 = param_1;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar5 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar5 != '\0');
      cVar5 = param_1[~uVar3 - 2];
    }
    pcVar6 = local_12c;
    for (iVar2 = 0x4b; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + 4;
    }
    FUN_0060d81b(local_12c,0x12a,param_1,&stack0x00000008);
    if (cVar5 != '\n') {
      uVar3 = 0xffffffff;
      pcVar6 = &DAT_006a90d0;
      do {
        pcVar9 = pcVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar9 = pcVar6 + 1;
        cVar5 = *pcVar6;
        pcVar6 = pcVar9;
      } while (cVar5 != '\0');
      uVar3 = ~uVar3;
      iVar2 = -1;
      pcVar6 = local_12c;
      do {
        pcVar8 = pcVar6;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar8 = pcVar6 + 1;
        cVar5 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar5 != '\0');
      pcVar6 = pcVar9 + -uVar3;
      pcVar9 = pcVar8 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar9 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    puVar7 = &DAT_006cada4;
    do {
      if ((code *)*puVar7 != (code *)0x0) {
        (*(code *)*puVar7)(local_12c);
      }
      puVar7 = puVar7 + 1;
    } while ((int)puVar7 < 0x6cadcc);
    DAT_006cadcc = '\0';
  }
  return;
}

