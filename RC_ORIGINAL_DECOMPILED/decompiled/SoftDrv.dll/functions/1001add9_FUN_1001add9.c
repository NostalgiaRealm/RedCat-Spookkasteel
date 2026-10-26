/*
 * FUN_1001add9 at 1001add9
 * undefined FUN_1001add9(void)
 * Address ranges: 1001add9-1001ade6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001add9(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}

