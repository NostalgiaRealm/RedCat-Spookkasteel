/*
 * FUN_0042c4e4 at 0042c4e4
 * int * __register FUN_0042c4e4(int * param_1, char param_2, int * param_3)
 * Address ranges: 0042c4e4-0042c5b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0042c4e4(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
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
  FUN_004348a0(param_1,'\0',param_3);
  if (*PTR_DAT_005722c4 == '\0') {
    param_1[0x10] = 0xb0;
  }
  else {
    param_1[0x10] = 0xa0;
  }
  FUN_00431f78(param_1,0x79);
  FUN_00431f98(param_1,0x61);
  FUN_00438bb4((int)param_1,'\x01');
  FUN_004328c4((int)param_1,'\0');
  iVar1 = FUN_00403064((int *)&PTR_FUN_00428a30,'\x01',extraout_ECX_00);
  param_1[0x7c] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  piVar2 = FUN_0041c468((int *)&PTR_FUN_0042dc98,'\x01',extraout_ECX_01);
  param_1[0x7e] = (int)piVar2;
  FUN_004314a8(piVar2,(int)param_1);
  param_1[0x80] = 0x10;
  *(undefined1 *)(param_1 + 0x7d) = 1;
  *(undefined1 *)(param_1 + 0x82) = 1;
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

