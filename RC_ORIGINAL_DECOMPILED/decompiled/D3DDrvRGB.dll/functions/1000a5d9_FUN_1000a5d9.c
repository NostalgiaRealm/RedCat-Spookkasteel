/*
 * FUN_1000a5d9 at 1000a5d9
 * undefined4 __cdecl FUN_1000a5d9(int * param_1)
 * Address ranges: 1000a5d9-1000a5e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000a5d9(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}

