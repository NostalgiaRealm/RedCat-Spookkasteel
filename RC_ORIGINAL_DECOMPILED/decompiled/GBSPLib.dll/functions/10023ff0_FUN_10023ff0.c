/*
 * FUN_10023ff0 at 10023ff0
 * undefined FUN_10023ff0(void)
 * Address ranges: 10023ff0-10024045
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_10023ff0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)FUN_10014310(0x2c);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3 = piVar1;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  iVar2 = FUN_10024050(&DAT_10265ce0);
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    FUN_10014360(piVar1);
    _DAT_1003fde8 = 0;
    return (int *)0x0;
  }
  piVar1[3] = piVar1[3] | 2;
  return piVar1;
}

