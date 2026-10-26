/*
 * FUN_0040542c at 0040542c
 * undefined __register FUN_0040542c(VARIANTARG * param_1)
 * Address ranges: 0040542c-00405442
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040542c(VARIANTARG *param_1)

{
  float10 in_ST0;
  
  if (7 < (param_1->n1).n2.vt) {
    FUN_00404de4(param_1);
  }
  (param_1->n1).n2.vt = 7;
  *(double *)((int)&param_1->n1 + 8) = (double)in_ST0;
  return;
}

