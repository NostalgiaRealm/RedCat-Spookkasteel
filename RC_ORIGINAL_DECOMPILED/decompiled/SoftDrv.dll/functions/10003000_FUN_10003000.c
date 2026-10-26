/*
 * FUN_10003000 at 10003000
 * undefined FUN_10003000(void)
 * Address ranges: 10003000-1000311b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10003000(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8 [62];
  
  local_100 = DAT_100213b4;
  local_fc = DAT_100213b8;
  puVar9 = local_f8;
  for (iVar4 = 0x3e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  iVar4 = 0;
  if (0 < *param_1) {
    *param_1 = *param_1 + 1;
    return 1;
  }
  *param_1 = 1;
  param_1[1] = 0;
  piVar7 = param_1 + 0x76;
  do {
    iVar3 = FUN_10002940();
    *piVar7 = iVar3;
    if (iVar3 == 0) {
      FUN_10002fb0(param_1);
      return 0;
    }
    uVar5 = 0xffffffff;
    pcVar8 = (char *)&local_100;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar3 = FUN_10002910(iVar4,piVar7 + -0x41,0x100 - (~uVar5 - 1),iVar3);
    if (iVar3 == 0) {
      FUN_10002960(piVar7);
      *piVar7 = 0;
    }
    else {
      uVar5 = 0xffffffff;
      pcVar8 = (char *)&local_100;
      do {
        pcVar12 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar12 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar12;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar3 = -1;
      piVar10 = piVar7 + -0x41;
      do {
        piVar11 = piVar10;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        piVar11 = (int *)((int)piVar10 + 1);
        iVar2 = *piVar10;
        piVar10 = piVar11;
      } while ((char)iVar2 != '\0');
      pcVar8 = pcVar12 + -uVar5;
      pcVar12 = (char *)((int)piVar11 + -1);
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar12 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar12 = pcVar12 + 1;
      }
      piVar7[-1] = iVar4;
      param_1[1] = param_1[1] + 1;
    }
    iVar4 = iVar4 + 1;
    piVar7 = piVar7 + 0x42;
    if (1 < iVar4) {
      return 1;
    }
  } while( true );
}

