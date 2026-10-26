/*
 * FUN_1000dd40 at 1000dd40
 * undefined4 __cdecl FUN_1000dd40(int * param_1)
 * Address ranges: 1000dd40-1000dd59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000dd40(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}

