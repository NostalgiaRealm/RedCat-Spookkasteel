/*
 * FUN_0048e984 at 0048e984
 * int * __register FUN_0048e984(int * param_1, char param_2, undefined4 * param_3)
 * Address ranges: 0048e984-0048e9f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0048e984(int *param_1,char param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  FUN_0045b418(param_1,'\0',param_3);
  piVar1 = FUN_00459fa8(3,extraout_EDX,extraout_ECX_00);
  param_1[1] = (int)piVar1;
  uVar2 = FUN_00403e04(param_1 + 3,param_3);
  iVar3 = FUN_00497394(uVar2,extraout_EDX_00,extraout_ECX_01);
  FUN_00497984(iVar3,(int)param_1);
  if (cVar4 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

