/*
 * FUN_005b1630 at 005b1630
 * undefined FUN_005b1630(void)
 * Address ranges: 005b1630-005b1696
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b1630(float param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if ((float10)12.0 < ABS(fVar1)) {
    fVar1 = (float10)FUN_0060b0da();
  }
  if (fVar1 <= (float10)-3.1415927) {
    do {
      fVar1 = fVar1 + (float10)6.2831855;
    } while (fVar1 <= (float10)-3.1415927);
  }
  if ((float10)3.1415927 < fVar1) {
    do {
      fVar1 = fVar1 - (float10)6.2831855;
    } while ((float10)3.1415927 < fVar1);
  }
  return;
}

