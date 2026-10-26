/*
 * FUN_00598540 at 00598540
 * undefined FUN_00598540(void)
 * Address ranges: 00598540-00598564
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00598540(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 8;
  do {
    cVar1 = FUN_0059b1f0();
    if (cVar1 != '\0') {
      iVar2 = iVar2 + 1;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar2;
}

