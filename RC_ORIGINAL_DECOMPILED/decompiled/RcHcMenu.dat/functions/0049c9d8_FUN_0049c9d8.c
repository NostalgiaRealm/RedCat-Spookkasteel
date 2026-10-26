/*
 * FUN_0049c9d8 at 0049c9d8
 * int * __register FUN_0049c9d8(int * param_1, char param_2, int * param_3)
 * Address ranges: 0049c9d8-0049ca35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0049c9d8(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00418f00(param_1,'\0',param_3);
  FUN_0049cb50((int)param_1,1000,extraout_ECX_00);
  FUN_0049cb24((int)param_1,'\x01',extraout_ECX_01);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

