/*
 * FUN_005d18a0 at 005d18a0
 * undefined FUN_005d18a0(void)
 * Address ranges: 005d18a0-005d18f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005d18a0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  
  iVar7 = 0;
  iVar2 = FUN_0059b1e0();
  iVar6 = 0;
  if (iVar2 < 1) {
    return 0;
  }
  do {
    pcVar3 = (char *)FUN_005d1b10();
    uVar5 = 0xffffffff;
    iVar4 = 0;
    pcVar8 = pcVar3;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (0 < (int)(~uVar5 - 1)) {
      do {
        iVar7 = iVar7 + pcVar3[iVar4];
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(~uVar5 - 1));
    }
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 * 3;
    if (iVar2 <= iVar6) {
      return iVar7;
    }
  } while( true );
}

