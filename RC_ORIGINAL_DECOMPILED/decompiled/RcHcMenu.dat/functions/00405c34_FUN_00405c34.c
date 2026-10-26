/*
 * FUN_00405c34 at 00405c34
 * undefined __register FUN_00405c34(VARIANTARG * param_1, int * param_2)
 * Address ranges: 00405c34-00405c55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00405c34(VARIANTARG *param_1,int *param_2)

{
  if ((param_1->n1).n2.vt != 1) {
    FUN_004052a4(param_2,param_1);
    return;
  }
  FUN_00403db0(param_2);
  return;
}

