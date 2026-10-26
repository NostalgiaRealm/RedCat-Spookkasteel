/*
 * FUN_0048816c at 0048816c
 * int * __register FUN_0048816c(int * param_1, char param_2, int * param_3)
 * Address ranges: 0048816c-00488207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0048816c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
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
  FUN_00487538(param_1,'\0',param_3);
  iVar1 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_00);
  param_1[0x8e] = iVar1;
  *(int **)(iVar1 + 0x24) = param_1;
  *(undefined **)(iVar1 + 0x20) = &DAT_004883e0;
  piVar2 = FUN_0046f054((int *)&PTR_FUN_004663b4,'\x01',(int)param_1);
  param_1[0x90] = (int)piVar2;
  piVar2 = FUN_004880d0((int *)&PTR_FUN_0047f014,'\x01',(int)param_1);
  param_1[0x92] = (int)piVar2;
  *(undefined1 *)((int)param_1 + 0x255) = 0;
  *(undefined1 *)((int)param_1 + 0x25d) = 1;
  param_1[0x94] = -1;
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

