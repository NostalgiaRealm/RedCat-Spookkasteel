/*
 * FUN_006110f5 at 006110f5
 * undefined FUN_006110f5(void)
 * Address ranges: 006110f5-00611102
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_006110f5(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}

