/*
 * FUN_0053e228 at 0053e228
 * int * __register FUN_0053e228(int * param_1, char param_2, int * param_3)
 * Address ranges: 0053e228-0053e299
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0053e228(int *param_1,char param_2,int *param_3)

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
  FUN_004f81d4(param_1,'\0',param_3);
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  piVar1 = FUN_004f9c78((int *)&DAT_004f9c64,'\x01',extraout_ECX_00);
  param_1[0xf8] = (int)piVar1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

