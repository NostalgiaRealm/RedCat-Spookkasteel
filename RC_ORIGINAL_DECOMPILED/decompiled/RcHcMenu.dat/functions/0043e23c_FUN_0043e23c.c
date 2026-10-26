/*
 * FUN_0043e23c at 0043e23c
 * int * __register FUN_0043e23c(int * param_1, char param_2, int param_3, int param_4)
 * Address ranges: 0043e23c-0043e28c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0043e23c(int *param_1,char param_2,int param_3,int param_4)

{
  int extraout_ECX;
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
  FUN_00418f00(param_1,'\0',(int *)0x0);
  param_1[10] = param_3;
  param_1[9] = param_4;
  (**(code **)(*param_1 + 0x34))();
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

