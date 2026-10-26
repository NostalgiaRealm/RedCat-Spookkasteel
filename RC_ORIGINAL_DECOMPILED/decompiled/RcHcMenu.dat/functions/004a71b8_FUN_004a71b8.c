/*
 * FUN_004a71b8 at 004a71b8
 * int * __register FUN_004a71b8(int * param_1, char param_2, int * param_3)
 * Address ranges: 004a71b8-004a7284
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004a71b8(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  FUN_00439a24(param_1,'\0',param_3);
  piVar3 = FUN_0049a2d4((int *)&LAB_0049893c,'\x01',extraout_ECX_00);
  param_1[0x4c] = (int)piVar3;
  piVar3 = FUN_004a0e64((int *)&PTR_FUN_004a0d80,'\x01',param_1);
  param_1[0x4b] = (int)piVar3;
  iVar1 = param_1[0x4b];
  *(int **)(iVar1 + 0x1c) = param_1;
  uVar2 = *(undefined4 *)(*param_1 + 0xa4);
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  FUN_004a18e0(param_1[0x4b],uVar2,extraout_ECX_01,*(undefined4 *)(*param_1 + 0xa0),param_1);
  FUN_00431f78(param_1,100);
  FUN_00431f98(param_1,0x32);
  *(undefined1 *)((int)param_1 + 0x13d) = 0xff;
  if (cVar4 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

