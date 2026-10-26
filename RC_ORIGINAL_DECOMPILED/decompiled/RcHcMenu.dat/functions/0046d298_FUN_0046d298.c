/*
 * FUN_0046d298 at 0046d298
 * int * __register FUN_0046d298(int * param_1, char param_2, int * param_3)
 * Address ranges: 0046d298-0046d2f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0046d298(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  piVar1 = FUN_0046858c((int *)&DAT_00462844,'\x01',0);
  param_1[0x35] = (int)piVar1;
  param_1[0x34] = (int)piVar1;
  FUN_00468a40(param_1,'\0',param_3);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}

