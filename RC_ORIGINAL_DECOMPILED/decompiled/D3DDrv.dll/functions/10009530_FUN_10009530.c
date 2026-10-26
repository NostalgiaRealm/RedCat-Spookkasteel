/*
 * FUN_10009530 at 10009530
 * undefined4 __cdecl FUN_10009530(int * param_1)
 * Address ranges: 10009530-1000953d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10009530(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}

