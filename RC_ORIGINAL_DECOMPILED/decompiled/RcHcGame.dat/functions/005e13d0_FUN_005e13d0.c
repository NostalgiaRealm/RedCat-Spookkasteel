/*
 * FUN_005e13d0 at 005e13d0
 * undefined FUN_005e13d0(void)
 * Address ranges: 005e13d0-005e1425
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005e13d0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)FUN_005cf3b0(0x2c);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3 = piVar1;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  iVar2 = FUN_005e1430(&DAT_006b3f70);
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    FUN_005cf400(piVar1);
    _DAT_007203c0 = 0;
    return (int *)0x0;
  }
  piVar1[3] = piVar1[3] | 2;
  return piVar1;
}

