/*
 * FUN_10006c69 at 10006c69
 * undefined4 __cdecl FUN_10006c69(int * param_1)
 * Address ranges: 10006c69-10006c75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10006c69(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}

