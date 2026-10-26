/*
 * FUN_005d9550 at 005d9550
 * undefined FUN_005d9550(void)
 * Address ranges: 005d9550-005d958f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005d9550(byte *param_1,byte *param_2)

{
  return ((uint)param_1[2] - (uint)param_2[2]) * ((uint)param_1[2] - (uint)param_2[2]) +
         ((uint)*param_1 - (uint)*param_2) * ((uint)*param_1 - (uint)*param_2) +
         ((uint)param_1[1] - (uint)param_2[1]) * ((uint)param_1[1] - (uint)param_2[1]);
}

