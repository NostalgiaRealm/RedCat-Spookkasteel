/*
 * FUN_00405414 at 00405414
 * undefined __register FUN_00405414(VARIANTARG * param_1)
 * Address ranges: 00405414-0040542a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00405414(VARIANTARG *param_1)

{
  float10 in_ST0;
  
  if (7 < (param_1->n1).n2.vt) {
    FUN_00404de4(param_1);
  }
  (param_1->n1).n2.vt = 5;
  *(double *)((int)&param_1->n1 + 8) = (double)in_ST0;
  return;
}

