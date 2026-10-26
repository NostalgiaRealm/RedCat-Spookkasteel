/*
 * FUN_00414ca8 at 00414ca8
 * int * __register FUN_00414ca8(int * param_1, char param_2, HMODULE param_3, LPCSTR param_4, undefined * param_5)
 * Address ranges: 00414ca8-00414cfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00414ca8(int *param_1,char param_2,HMODULE param_3,LPCSTR param_4,undefined *param_5)

{
  LPCSTR pCVar1;
  HMODULE extraout_ECX;
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
  FUN_00403064(param_1,'\0',param_3);
  pCVar1 = FUN_004041f4(param_5);
  FUN_00414d70((int)param_1,param_3,pCVar1,param_4);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

