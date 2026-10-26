/*
 * FUN_1001a4aa at 1001a4aa
 * undefined FUN_1001a4aa(void)
 * Address ranges: 1001a4aa-1001a4c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001a4aa(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10025d14 != (code *)0x0) {
    iVar1 = (*DAT_10025d14)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

