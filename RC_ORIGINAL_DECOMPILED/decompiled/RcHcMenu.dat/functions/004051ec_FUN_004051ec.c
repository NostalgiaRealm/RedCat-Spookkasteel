/*
 * FUN_004051ec at 004051ec
 * undefined __register FUN_004051ec(VARIANTARG * param_1)
 * Address ranges: 004051ec-00405247
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004051ec(VARIANTARG *param_1)

{
  VARTYPE VVar1;
  _union_2683 local_10;
  
  VVar1 = (param_1->n1).n2.vt;
  if (VVar1 != 5) {
    if (VVar1 == 4) {
      return;
    }
    if (VVar1 == 6) {
      return;
    }
    if (VVar1 == 3) {
      return;
    }
    if (VVar1 == 2) {
      return;
    }
    if (VVar1 != 7) {
      local_10.n2.vt = 0;
      FUN_0040503c((VARIANT *)&local_10.n2,param_1,5);
      return;
    }
  }
  return;
}

