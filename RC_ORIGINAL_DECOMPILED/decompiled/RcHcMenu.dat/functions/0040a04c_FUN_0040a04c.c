/*
 * FUN_0040a04c at 0040a04c
 * undefined __register FUN_0040a04c(undefined * param_1, int * param_2)
 * Address ranges: 0040a04c-0040a087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040a04c(undefined *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00409f34(&DAT_0040a090,param_1);
  if ((iVar1 < 1) || (param_1[iVar1 + -1] != '.')) {
    FUN_00403db0(param_2);
  }
  else {
    FUN_00404238((int)param_1,iVar1,0x7fffffff,param_2);
  }
  return;
}

