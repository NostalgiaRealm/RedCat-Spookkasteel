/*
 * FUN_00569050 at 00569050
 * undefined FUN_00569050(void)
 * Address ranges: 00569050-0056906a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_00569050(undefined4 param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00568e00(param_1);
  return ((float10)param_3 - (float10)param_2) * fVar1 + (float10)param_2;
}

