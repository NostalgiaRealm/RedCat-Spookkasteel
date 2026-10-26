/*
 * FUN_0061ac70 at 0061ac70
 * undefined FUN_0061ac70(void)
 * Address ranges: 0061ac70-0061ac90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0061ac70(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

