/*
 * FUN_100121f0 at 100121f0
 * undefined FUN_100121f0(void)
 * Address ranges: 100121f0-100122e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100121f0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack00000004;
  
  iVar1 = __ftol();
  iVar7 = iVar1 + 0x4000 >> 8;
  iVar1 = __ftol();
  iVar5 = iVar1 + 0x4000 >> 8;
  iVar1 = __ftol();
  iStack00000004 = iVar1 + 0x4000 >> 8;
  iVar1 = __ftol();
  iVar6 = iVar1 + 0x4000 >> 8;
  iVar1 = iVar7;
  if (iStack00000004 < iVar7) {
    iVar1 = iStack00000004;
    iStack00000004 = iVar7;
  }
  iVar7 = iVar5;
  if (iVar6 < iVar5) {
    iVar7 = iVar6;
    iVar6 = iVar5;
  }
  DAT_103df87c = 0;
  for (; iVar1 <= iStack00000004; iVar1 = iVar1 + 1) {
    if (iVar7 <= iVar6) {
      iVar5 = (iVar6 - iVar7) + 1;
      piVar2 = (int *)(&DAT_104d98a8 + (iVar7 * 0x80 + iVar1) * 4);
      do {
        iVar3 = *piVar2;
        if (iVar3 != 0) {
          piVar4 = &DAT_103df890 + DAT_103df87c;
          do {
            *piVar4 = iVar3;
            iVar3 = *(int *)(&DAT_103a007c + iVar3 * 4);
            DAT_103df87c = DAT_103df87c + 1;
            piVar4 = piVar4 + 1;
          } while (iVar3 != 0);
        }
        piVar2 = piVar2 + 0x80;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

