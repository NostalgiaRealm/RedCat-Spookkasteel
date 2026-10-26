/*
 * FUN_1000b169 at 1000b169
 * undefined4 __cdecl FUN_1000b169(undefined4 param_1)
 * Address ranges: 1000b169-1000b183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000b169(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100ec160 != (code *)0x0) {
    iVar1 = (*DAT_100ec160)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

