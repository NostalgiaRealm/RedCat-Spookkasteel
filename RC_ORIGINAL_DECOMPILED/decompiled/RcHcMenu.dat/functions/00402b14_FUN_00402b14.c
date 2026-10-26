/*
 * FUN_00402b14 at 00402b14
 * undefined __register FUN_00402b14(void)
 * Address ranges: 00402b14-00402b2a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00402b14(void)

{
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = ROUND((float10)1.4426950408889634 * in_ST0);
  fVar2 = (float10)f2xm1((float10)1.4426950408889634 * in_ST0 - fVar1);
  fscale((float10)1 + fVar2,fVar1);
  return;
}

