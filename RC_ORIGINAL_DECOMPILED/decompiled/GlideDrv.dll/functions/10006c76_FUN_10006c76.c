/*
 * FUN_10006c76 at 10006c76
 * undefined8 __cdecl FUN_10006c76(int * param_1)
 * Address ranges: 10006c76-10006c85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __cdecl FUN_10006c76(int *param_1)

{
  *param_1 = *param_1 + 8;
  return *(undefined8 *)(*param_1 + -8);
}

