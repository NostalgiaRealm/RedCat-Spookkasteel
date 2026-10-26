/*
 * FUN_0040d965 at 0040d965
 * undefined4 __cdecl FUN_0040d965(undefined4 param_1)
 * Address ranges: 0040d965-0040d97f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_0040d965(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00413560 != (code *)0x0) {
    iVar1 = (*DAT_00413560)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

