/*
 * FUN_005d35e0 at 005d35e0
 * undefined FUN_005d35e0(void)
 * Address ranges: 005d35e0-005d369f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d35e0(int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x3b0);
  iVar5 = 0;
  pbVar3 = (byte *)(iVar1 + 0x60);
  piVar4 = (int *)(iVar1 + 0x3b4);
  do {
    iVar2 = *piVar4;
    *piVar4 = iVar2 + 1;
    if (*(char *)(iVar2 + 1 + iVar5 + 0x6c + iVar1) == '\0') {
      *piVar4 = 0;
    }
    iVar2 = __ftol();
    piVar4[-0xe1] = iVar2;
    if ((uint)*pbVar3 == (int)*(char *)(iVar5 + *piVar4 + 0x6c + iVar1) - 0x60U) {
      piVar4[-0xed] = 0;
    }
    else {
      piVar4[-0xed] = 1;
    }
    iVar2 = iVar5 + *piVar4;
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + 0x46;
    *pbVar3 = *(char *)(iVar2 + 0x6c + iVar1) + 0xa0;
    pbVar3 = pbVar3 + 1;
  } while ((int)(pbVar3 + (-0x60 - iVar1)) < 0xc);
  return;
}

