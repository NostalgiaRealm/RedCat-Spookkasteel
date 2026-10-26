/*
 * FUN_00529328 at 00529328
 * undefined __register FUN_00529328(int * param_1, int * param_2, int * param_3, undefined1 param_4, LONG * param_5)
 * Address ranges: 00529328-00529383
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00529328(int *param_1,int *param_2,int *param_3,undefined1 param_4,LONG *param_5)

{
  int iVar1;
  
  if ((param_1[0xa0] != 0) && (*param_3 != 0)) {
    iVar1 = FUN_00403224((int *)*param_3,(int)&PTR_FUN_00525a70);
    FUN_00529384(param_1,param_2,(int *)param_1[0xa0],CONCAT31((int3)((uint)param_5 >> 8),param_4),
                 param_5,iVar1);
  }
  return;
}

