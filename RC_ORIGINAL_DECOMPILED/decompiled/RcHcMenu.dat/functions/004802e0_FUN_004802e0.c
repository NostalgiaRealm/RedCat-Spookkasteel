/*
 * FUN_004802e0 at 004802e0
 * int * __register FUN_004802e0(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 004802e0-0048033c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004802e0(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00403064(param_1,'\0',param_3);
  piVar1 = FUN_004126cc((int *)&DAT_004107e0,'\x01',extraout_ECX_00);
  param_1[1] = (int)piVar1;
  iVar2 = FUN_00403064((int *)&DAT_00410838,'\x01',extraout_ECX_01);
  param_1[2] = iVar2;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00573958);
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

