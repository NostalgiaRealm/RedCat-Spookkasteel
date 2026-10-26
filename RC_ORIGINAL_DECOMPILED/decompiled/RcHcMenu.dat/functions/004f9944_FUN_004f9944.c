/*
 * FUN_004f9944 at 004f9944
 * int * __register FUN_004f9944(int * param_1, char param_2, int * param_3)
 * Address ranges: 004f9944-004f99a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004f9944(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
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
  FUN_00429430(param_1,'\0',param_3);
  param_1[0x89] = 0;
  FUN_0048e078(param_1 + 0x82);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

