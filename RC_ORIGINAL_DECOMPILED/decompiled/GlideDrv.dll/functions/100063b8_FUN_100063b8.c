/*
 * FUN_100063b8 at 100063b8
 * undefined4 __cdecl FUN_100063b8(undefined4 param_1)
 * Address ranges: 100063b8-100063d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_100063b8(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100e3aec != (code *)0x0) {
    iVar1 = (*DAT_100e3aec)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

