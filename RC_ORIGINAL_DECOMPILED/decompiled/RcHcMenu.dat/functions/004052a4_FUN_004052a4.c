/*
 * FUN_004052a4 at 004052a4
 * undefined __register FUN_004052a4(int * param_1, VARIANTARG * param_2)
 * Address ranges: 004052a4-004052dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004052a4(int *param_1,VARIANTARG *param_2)

{
  _union_2683 local_14;
  
  if ((param_2->n1).n2.vt == 0x100) {
    FUN_00403e04(param_1,*(undefined4 **)((int)&param_2->n1 + 8));
    return;
  }
  local_14.n2.vt = 0;
  FUN_0040503c((VARIANT *)&local_14.n2,param_2,0x100);
  FUN_00403db0(param_1);
  *param_1 = local_14._8_4_;
  return;
}

