/*
 * FUN_1000a5bc at 1000a5bc
 * undefined4 __cdecl FUN_1000a5bc(int * param_1)
 * Address ranges: 1000a5bc-1000a5c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000a5bc(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}

