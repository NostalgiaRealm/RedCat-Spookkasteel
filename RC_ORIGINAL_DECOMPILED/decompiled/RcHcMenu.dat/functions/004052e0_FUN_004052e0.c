/*
 * FUN_004052e0 at 004052e0
 * undefined __register FUN_004052e0(BSTR * param_1, VARIANTARG * param_2)
 * Address ranges: 004052e0-00405315
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004052e0(BSTR *param_1,VARIANTARG *param_2)

{
  _union_2683 local_14;
  
  if ((param_2->n1).n2.vt == 8) {
    FUN_004044b0(param_1,*(OLECHAR **)((int)&param_2->n1 + 8));
    return;
  }
  local_14.n2.vt = 0;
  FUN_0040503c((VARIANT *)&local_14.n2,param_2,8);
  FUN_00404464(param_1,local_14._8_4_);
  return;
}

