/*
 * FUN_0047c710 at 0047c710
 * undefined FUN_0047c710(void)
 * Address ranges: 0047c710-0047c75b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_0047c710(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = ABS((float10)param_1 - (float10)param_2) * (float10)0.5;
  fVar2 = ABS((float10)param_5 - (float10)param_2);
  if (fVar2 <= fVar1) {
    fVar2 = fVar1 - fVar2;
  }
  else {
    fVar2 = fVar2 - fVar1;
  }
  return ((float10)param_3 * (float10)0.1 + ((float10)param_3 - (fVar2 / fVar1) * (float10)param_3))
         * (float10)param_4;
}

