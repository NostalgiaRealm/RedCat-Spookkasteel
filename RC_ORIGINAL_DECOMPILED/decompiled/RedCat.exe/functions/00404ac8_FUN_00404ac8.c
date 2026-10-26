/*
 * FUN_00404ac8 at 00404ac8
 * undefined4 __cdecl FUN_00404ac8(undefined4 param_1)
 * Address ranges: 00404ac8-00404ae2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_00404ac8(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0040810c != (code *)0x0) {
    iVar1 = (*DAT_0040810c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

