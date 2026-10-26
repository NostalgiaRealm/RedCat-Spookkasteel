/*
 * FUN_0046ab40 at 0046ab40
 * int * __register FUN_0046ab40(int * param_1, char param_2, int * param_3)
 * Address ranges: 0046ab40-0046aba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0046ab40(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  int iVar1;
  char extraout_DL;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  bVar5 = 0;
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_0046aa04(param_1,'\0',param_3);
  FUN_00469d10((int)param_1,3);
  param_1[0x36] = -0x80000000;
  param_1[0x37] = 0x7fffffff;
  piVar3 = &DAT_0046aba8;
  piVar4 = param_1 + 0x24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

