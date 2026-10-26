/*
 * FUN_0046b5dc at 0046b5dc
 * undefined __register FUN_0046b5dc(int * param_1, VARIANTARG * param_2, undefined4 param_3)
 * Address ranges: 0046b5dc-0046b611
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046b5dc(int *param_1,VARIANTARG *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 local_10 [8];
  
  cVar1 = FUN_00469218(param_1,(int)local_10,CONCAT31((int3)((uint)param_3 >> 8),1));
  if (cVar1 == '\0') {
    FUN_00404e28(param_2,(VARIANTARG *)PTR_DAT_00572068);
  }
  else {
    FUN_00405414(param_2);
  }
  return;
}

