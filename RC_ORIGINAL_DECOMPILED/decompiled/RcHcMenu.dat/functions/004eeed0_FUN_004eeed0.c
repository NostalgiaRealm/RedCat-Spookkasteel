/*
 * FUN_004eeed0 at 004eeed0
 * int * __register FUN_004eeed0(int * param_1, char param_2, int param_3)
 * Address ranges: 004eeed0-004eef74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004eeed0(int *param_1,char param_2,int param_3)

{
  int iVar1;
  int extraout_ECX;
  int extraout_ECX_00;
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
  iVar1 = param_3;
  if (param_3 == 0) {
    FUN_00403d94("Assertion failure");
    iVar1 = extraout_ECX_00;
  }
  FUN_0045b418(param_1,'\0',iVar1);
  param_1[1] = param_3;
  (**(code **)(**(int **)(param_1[1] + 0x14) + 0xc))(*(int **)(param_1[1] + 0x14),param_1);
  FUN_004ef03c((int)param_1);
  iVar1 = FUN_0049206c(*(int **)(param_1[1] + 0x10));
  param_1[5] = iVar1;
  FUN_004eda88((int *)param_1[1],(int *)param_1[5]);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

