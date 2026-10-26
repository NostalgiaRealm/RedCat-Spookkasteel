/*
 * FUN_00526bac at 00526bac
 * int * __register FUN_00526bac(int * param_1, char param_2, int * param_3, int * param_4)
 * Address ranges: 00526bac-00526c0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00526bac(int *param_1,char param_2,int *param_3,int *param_4)

{
  int *extraout_ECX;
  int iVar1;
  char extraout_DL;
  char cVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  
  bVar4 = 0;
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffd8,in_stack_ffffffdc);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_0051c5b8(param_1,'\0',param_3);
  piVar3 = param_1 + 0x11;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *param_4;
    param_4 = param_4 + (uint)bVar4 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffd8;
  }
  return param_1;
}

