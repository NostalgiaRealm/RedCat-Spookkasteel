/*
 * FUN_0040e360 at 0040e360
 * int * __register FUN_0040e360(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0040e360-0040e3c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0040e360(int *param_1,char param_2,undefined4 param_3)

{
  HANDLE pvVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00403064(param_1,'\0',param_3);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,-1,-1,(LPCSTR)0x0);
  param_1[7] = (int)pvVar1;
  FUN_00406454(param_1 + 10,(int)&DAT_004094d4,1);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

