/*
 * FUN_1002c050 at 1002c050
 * undefined FUN_1002c050(void)
 * Address ranges: 1002c050-1002c064
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

unkbyte10 FUN_1002c050(void)

{
  float10 in_ST0;
  float10 fVar1;
  unkbyte10 Var2;
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  Var2 = fscale((float10)1 + fVar1,ROUND(in_ST0));
  return Var2;
}

