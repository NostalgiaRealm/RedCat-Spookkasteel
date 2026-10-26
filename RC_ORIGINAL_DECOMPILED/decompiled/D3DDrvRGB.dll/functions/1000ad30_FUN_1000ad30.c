/*
 * FUN_1000ad30 at 1000ad30
 * undefined1[10] __stdcall FUN_1000ad30(void)
 * Address ranges: 1000ad30-1000ad44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [10] FUN_1000ad30(void)

{
  float10 in_ST0;
  float10 fVar1;
  undefined1 auVar2 [10];
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  auVar2 = (undefined1  [10])fscale((float10)1 + fVar1,ROUND(in_ST0));
  return auVar2;
}

