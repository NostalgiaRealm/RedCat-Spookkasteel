/*
 * FUN_0041ede8 at 0041ede8
 * int * __register FUN_0041ede8(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0041ede8-0041ee26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0041ede8(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00403064(param_1,'\0',param_3);
  iVar1 = FUN_0041eda8();
  FUN_0041edc8(iVar1,extraout_EDX,extraout_ECX_00);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

