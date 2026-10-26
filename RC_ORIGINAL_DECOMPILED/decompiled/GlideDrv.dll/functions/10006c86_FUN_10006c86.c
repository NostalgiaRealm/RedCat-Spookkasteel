/*
 * FUN_10006c86 at 10006c86
 * undefined4 __cdecl FUN_10006c86(int * param_1)
 * Address ranges: 10006c86-10006c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10006c86(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}

