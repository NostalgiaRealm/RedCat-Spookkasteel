/*
 * FUN_005b2e40 at 005b2e40
 * undefined FUN_005b2e40(void)
 * Address ranges: 005b2e40-005b2e54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_005b2e40(float *param_1,float *param_2)

{
  return (float10)*param_1 * (float10)*param_2 +
         (float10)param_1[1] * (float10)param_2[1] + (float10)param_1[2] * (float10)param_2[2];
}

