/*
 * FUN_100201b0 at 100201b0
 * undefined FUN_100201b0(void)
 * Address ranges: 100201b0-100201ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100201b0(byte *param_1,byte *param_2)

{
  return ((uint)param_1[2] - (uint)param_2[2]) * ((uint)param_1[2] - (uint)param_2[2]) +
         ((uint)*param_1 - (uint)*param_2) * ((uint)*param_1 - (uint)*param_2) +
         ((uint)param_1[1] - (uint)param_2[1]) * ((uint)param_1[1] - (uint)param_2[1]);
}

