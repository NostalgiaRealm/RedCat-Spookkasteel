/*
 * FUN_0049a2d4 at 0049a2d4
 * int * __register FUN_0049a2d4(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0049a2d4-0049a323
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0049a2d4(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  piVar1 = FUN_0041e4e4(param_1,'\0',param_3);
  piVar1 = FUN_0049a29c(piVar1,extraout_EDX,extraout_ECX_00);
  FUN_0049b6c0((int)param_1,(int)piVar1);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

