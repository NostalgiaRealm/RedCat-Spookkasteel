/*
 * FUN_00404fec at 00404fec
 * undefined __register FUN_00404fec(VARIANTARG * param_1, int param_2)
 * Address ranges: 00404fec-00405018
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00404fec(VARIANTARG *param_1,int param_2)

{
  int local_8;
  
  local_8 = 0;
  FUN_00404d24(*(LPCWSTR *)(param_2 + 8),&local_8);
  FUN_00404de4(param_1);
  (param_1->n1).n2.vt = 0x100;
  *(int *)((int)&param_1->n1 + 8) = local_8;
  return;
}

