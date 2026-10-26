/*
 * FUN_004021ae at 004021ae
 * undefined4 __cdecl FUN_004021ae(int * param_1)
 * Address ranges: 004021ae-004021bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_004021ae(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}

