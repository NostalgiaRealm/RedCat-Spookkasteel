/*
 * FUN_0046c604 at 0046c604
 * undefined __register FUN_0046c604(int * param_1, VARIANTARG * param_2)
 * Address ranges: 0046c604-0046c637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046c604(int *param_1,VARIANTARG *param_2)

{
  char cVar1;
  undefined1 local_10 [8];
  
  cVar1 = FUN_0046c798(param_1,(int)local_10);
  if (cVar1 == '\0') {
    FUN_00404e28(param_2,(VARIANTARG *)PTR_DAT_00572068);
  }
  else {
    FUN_00405444(param_2);
  }
  return;
}

