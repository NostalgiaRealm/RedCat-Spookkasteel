/*
 * FUN_00405248 at 00405248
 * undefined __register FUN_00405248(VARIANTARG * param_1)
 * Address ranges: 00405248-004052a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00405248(VARIANTARG *param_1)

{
  VARTYPE VVar1;
  _union_2683 local_10;
  
  VVar1 = (param_1->n1).n2.vt;
  if (VVar1 == 6) {
    return;
  }
  if ((((VVar1 != 5) && (VVar1 != 4)) && (VVar1 != 3)) && (VVar1 != 2)) {
    local_10.n2.vt = 0;
    FUN_0040503c((VARIANT *)&local_10.n2,param_1,6);
    return;
  }
  return;
}

