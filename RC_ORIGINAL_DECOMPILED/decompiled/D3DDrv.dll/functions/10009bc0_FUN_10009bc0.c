/*
 * FUN_10009bc0 at 10009bc0
 * undefined1[10] __stdcall FUN_10009bc0(void)
 * Address ranges: 10009bc0-10009bd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1  [10] FUN_10009bc0(void)

{
  float10 in_ST0;
  float10 fVar1;
  undefined1 auVar2 [10];
  
  fVar1 = (float10)f2xm1(-(ROUND(in_ST0) - in_ST0));
  auVar2 = (undefined1  [10])fscale((float10)1 + fVar1,ROUND(in_ST0));
  return auVar2;
}

