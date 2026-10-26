/*
 * FUN_0053dc6c at 0053dc6c
 * int * __register FUN_0053dc6c(int * param_1, char param_2, int param_3)
 * Address ranges: 0053dc6c-0053dcec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0053dc6c(int *param_1,char param_2,int param_3)

{
  int *piVar1;
  int extraout_ECX;
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
  FUN_0054b670(param_1,'\0',param_3);
  if (param_3 != param_1[1]) {
    FUN_00403d94("Assertion failure");
  }
  FUN_0053ddd8((int)param_1);
  piVar1 = (int *)FUN_0053d8a4(param_3);
  piVar1 = FUN_004935a0(piVar1);
  param_1[4] = (int)piVar1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

