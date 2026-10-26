/*
 * FUN_0043a330 at 0043a330
 * int * __register FUN_0043a330(int * param_1, char param_2, int * param_3)
 * Address ranges: 0043a330-0043a38a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0043a330(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
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
  FUN_004348a0(param_1,'\0',param_3);
  piVar1 = FUN_0041c468((int *)&PTR_FUN_0042dc98,'\x01',extraout_ECX_00);
  param_1[0x7c] = (int)piVar1;
  FUN_004314a8(piVar1,(int)param_1);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

