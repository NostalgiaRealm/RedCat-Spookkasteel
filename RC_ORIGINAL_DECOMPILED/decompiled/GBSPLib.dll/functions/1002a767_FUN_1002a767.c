/*
 * FUN_1002a767 at 1002a767
 * undefined FUN_1002a767(void)
 * Address ranges: 1002a767-1002a774
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002a767(int *param_1)

{
  *param_1 = *param_1 + 4;
  return CONCAT22((short)((uint)*param_1 >> 0x10),*(undefined2 *)(*param_1 + -4));
}

