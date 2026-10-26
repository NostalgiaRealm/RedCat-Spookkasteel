/*
 * FUN_005d6b50 at 005d6b50
 * undefined FUN_005d6b50(void)
 * Address ranges: 005d6b50-005d6b94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005d6b50(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_005cf3b0(0xc);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  iVar2 = FUN_005d5a70();
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    FUN_005cf400(piVar1);
    _DAT_007203c0 = 0;
    return (int *)0x0;
  }
  return piVar1;
}

