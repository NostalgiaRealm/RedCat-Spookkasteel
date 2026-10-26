/*
 * FUN_00405444 at 00405444
 * undefined __register FUN_00405444(VARIANTARG * param_1)
 * Address ranges: 00405444-0040545a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00405444(VARIANTARG *param_1)

{
  float10 in_ST0;
  
  if (7 < (param_1->n1).n2.vt) {
    FUN_00404de4(param_1);
  }
  (param_1->n1).n2.vt = 6;
  (param_1->n1).n2.n3 = (_union_2685)(longlong)ROUND(in_ST0);
  return;
}

