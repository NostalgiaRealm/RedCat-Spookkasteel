/*
 * FUN_005c7d80 at 005c7d80
 * undefined FUN_005c7d80(void)
 * Address ranges: 005c7d80-005c7d93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005c7d80(int param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)fsin((float10)param_2);
  *(float *)(param_1 + 4) = (float)(fVar1 * (float10)0.1);
  return;
}

