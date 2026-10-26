/*
 * FUN_100143d0 at 100143d0
 * undefined FUN_100143d0(void)
 * Address ranges: 100143d0-100143e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_100143d0(float *param_1,float *param_2)

{
  return (float10)*param_1 * (float10)*param_2 +
         (float10)param_1[1] * (float10)param_2[1] + (float10)param_1[2] * (float10)param_2[2];
}

