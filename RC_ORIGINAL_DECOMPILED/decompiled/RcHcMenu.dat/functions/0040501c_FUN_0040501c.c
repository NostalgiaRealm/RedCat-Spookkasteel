/*
 * FUN_0040501c at 0040501c
 * undefined __register FUN_0040501c(VARIANTARG * param_1, int param_2)
 * Address ranges: 0040501c-0040503b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040501c(VARIANTARG *param_1,int param_2)

{
  BSTR pOVar1;
  
  pOVar1 = FUN_00404d48(*(LPCSTR *)(param_2 + 8));
  FUN_00404de4(param_1);
  (param_1->n1).n2.vt = 8;
  *(BSTR *)((int)&param_1->n1 + 8) = pOVar1;
  return;
}

