/*
 * FUN_10025a10 at 10025a10
 * undefined FUN_10025a10(void)
 * Address ranges: 10025a10-10025aab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10025a10(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1c [28];
  
  iVar1 = FUN_10024f00();
  if (iVar1 < 2) {
    return 0;
  }
  FUN_10024ee0();
  iVar2 = FUN_1001df50(local_1c);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = 1;
  if (1 < iVar1) {
    do {
      FUN_10024ee0();
      iVar3 = FUN_1001df50(local_1c);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_10014450(param_1);
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 1;
}

