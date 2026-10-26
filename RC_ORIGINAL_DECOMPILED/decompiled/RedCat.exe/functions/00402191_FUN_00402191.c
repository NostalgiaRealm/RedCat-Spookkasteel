/*
 * FUN_00402191 at 00402191
 * undefined4 __cdecl FUN_00402191(int * param_1)
 * Address ranges: 00402191-0040219d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_00402191(int *param_1)

{
  *param_1 = *param_1 + 4;
  return *(undefined4 *)(*param_1 + -4);
}

