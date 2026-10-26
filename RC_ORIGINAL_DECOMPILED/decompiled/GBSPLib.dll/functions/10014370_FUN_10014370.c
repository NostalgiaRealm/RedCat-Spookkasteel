/*
 * FUN_10014370 at 10014370
 * undefined FUN_10014370(void)
 * Address ranges: 10014370-100143c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10014370(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = FUN_10014310(param_2);
    return iVar1;
  }
  if (param_2 != 0) {
    do {
      iVar1 = FUN_10028a89(param_1,param_2);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_10014340();
    } while (iVar1 != 0);
    return 0;
  }
  FUN_10014360(param_1);
  _DAT_1003fde8 = param_2;
  return 0;
}

