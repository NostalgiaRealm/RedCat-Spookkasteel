/*
 * FUN_10013b00 at 10013b00
 * undefined FUN_10013b00(void)
 * Address ranges: 10013b00-10013b18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_10013b00(undefined4 param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = *(float *)(param_2 + 0xc);
  fVar2 = (float10)FUN_100143d0();
  return fVar2 - (float10)fVar1;
}

