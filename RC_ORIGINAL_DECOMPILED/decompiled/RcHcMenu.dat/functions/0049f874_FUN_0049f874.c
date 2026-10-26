/*
 * FUN_0049f874 at 0049f874
 * int * __register FUN_0049f874(int * param_1, char param_2, HGLOBAL param_3)
 * Address ranges: 0049f874-0049f8e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0049f874(int *param_1,char param_2,HGLOBAL param_3)

{
  SIZE_T SVar1;
  LPVOID pvVar2;
  HGLOBAL extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00403064(param_1,'\0',param_3);
  param_1[5] = (int)param_3;
  SVar1 = GlobalSize(param_3);
  if ((int)SVar1 < 0) {
    SVar1 = thunk_FUN_00402874(SVar1);
  }
  pvVar2 = GlobalLock(param_3);
  FUN_00414ad8((int)param_1,pvVar2,SVar1);
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

