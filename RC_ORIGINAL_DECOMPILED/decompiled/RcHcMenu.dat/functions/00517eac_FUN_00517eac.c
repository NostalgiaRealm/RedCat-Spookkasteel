/*
 * FUN_00517eac at 00517eac
 * int * __register FUN_00517eac(int * param_1, char param_2, int * param_3)
 * Address ranges: 00517eac-00517f0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00517eac(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00418f00(param_1,'\0',param_3);
  piVar1 = FUN_00412dfc((int *)&PTR_FUN_00517b40,'\x01',(int)&PTR_FUN_005179fc);
  param_1[9] = (int)piVar1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

