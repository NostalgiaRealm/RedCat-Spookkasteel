/*
 * FUN_005b0bf0 at 005b0bf0
 * undefined FUN_005b0bf0(void)
 * Address ranges: 005b0bf0-005b0c36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b0bf0(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  if (param_1 != (char *)0x0) {
    iVar2 = -1;
    uVar4 = 0;
    pcVar5 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
      do {
        iVar2 = FUN_0060b28c((int)param_1[uVar4]);
        if (iVar2 != 0) {
          return 1;
        }
        uVar3 = 0xffffffff;
        uVar4 = uVar4 + 1;
        pcVar5 = param_1;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
      } while (uVar4 < ~uVar3 - 1);
    }
  }
  return 0;
}

