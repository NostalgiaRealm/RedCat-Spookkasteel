/*
 * FUN_00467f44 at 00467f44
 * int * __register FUN_00467f44(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00467f44-00467f7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00467f44(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
  param_1[1] = iVar1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

