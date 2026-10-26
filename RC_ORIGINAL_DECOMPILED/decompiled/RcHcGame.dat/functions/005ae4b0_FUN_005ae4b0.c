/*
 * FUN_005ae4b0 at 005ae4b0
 * undefined FUN_005ae4b0(void)
 * Address ranges: 005ae4b0-005ae5b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_005ae4b0(undefined1 *param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  if (param_2 == (char *)0x0) {
    *param_1 = param_1._0_1_;
    uVar3 = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    pcVar5 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar3 - 1;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 == '\0') {
      return param_1;
    }
    param_2 = &DAT_006b3f70;
  }
  else {
    *param_1 = param_1._0_1_;
    uVar3 = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    pcVar5 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
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
      if ((*(uint *)(param_1 + 0xc) < 0x20) && (uVar4 <= *(uint *)(param_1 + 0xc)))
      goto LAB_005ae595;
      FUN_004040a0(1);
    }
    else if (uVar4 == 0) {
      *(char *)(iVar1 + -1) = cVar2 + -1;
      FUN_004040a0(0);
      return param_1;
    }
    FUN_00401a60(uVar4);
  }
LAB_005ae595:
  pcVar5 = *(char **)(param_1 + 4);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *param_2;
    param_2 = param_2 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(uint *)(param_1 + 8) = uVar4;
  *(undefined1 *)(*(int *)(param_1 + 4) + uVar4) = 0;
  return param_1;
}

