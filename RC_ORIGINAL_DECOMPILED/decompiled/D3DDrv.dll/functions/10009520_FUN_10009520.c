/*
 * FUN_10009520 at 10009520
 * undefined8 __cdecl FUN_10009520(int * param_1)
 * Address ranges: 10009520-1000952f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __cdecl FUN_10009520(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}

