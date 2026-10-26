/*
 * FUN_00616b70 at 00616b70
 * undefined FUN_00616b70(void)
 * Address ranges: 00616b70-00616b84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

unkbyte10 FUN_00616b70(void)

{
  float10 in_ST0;
  float10 fVar1;
  unkbyte10 Var2;
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  Var2 = fscale((float10)1 + fVar1,ROUND(in_ST0));
  return Var2;
}

