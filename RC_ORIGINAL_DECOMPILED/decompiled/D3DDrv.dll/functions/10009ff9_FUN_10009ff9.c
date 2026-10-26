/*
 * FUN_10009ff9 at 10009ff9
 * undefined4 __cdecl FUN_10009ff9(undefined4 param_1)
 * Address ranges: 10009ff9-1000a013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10009ff9(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_101c3724 != (code *)0x0) {
    iVar1 = (*DAT_101c3724)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

