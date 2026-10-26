/*
 * FUN_005371d8 at 005371d8
 * int * __register FUN_005371d8(int * param_1, char param_2, int * param_3, int * param_4)
 * Address ranges: 005371d8-00537239
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005371d8(int *param_1,char param_2,int *param_3,int *param_4)

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
  FUN_00526bac(param_1,'\0',param_3,param_4);
  piVar1 = (int *)FUN_005372a8(param_1);
  piVar1 = (int *)FUN_005374a4(piVar1);
  FUN_00539138(piVar1,(int)param_1);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

