/*
 * FUN_0050dcd0 at 0050dcd0
 * int * __register FUN_0050dcd0(int * param_1, char param_2, int * param_3)
 * Address ranges: 0050dcd0-0050dd85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0050dcd0(int *param_1,char param_2,int *param_3)

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
  FUN_0042b9b8(param_1,'\0',param_3);
  iVar1 = FUN_004c5364((int *)&PTR_FUN_004c520c,'\x01',(int)param_1);
  param_1[0x80] = iVar1;
  piVar2 = FUN_0041c468((int *)&PTR_FUN_0042dc98,'\x01',extraout_ECX_00);
  param_1[0x81] = (int)piVar2;
  FUN_00431f78(param_1,0x79);
  FUN_00431f98(param_1,0x15);
  param_1[0x83] = -0x7ffffffb;
  *(undefined1 *)((int)param_1 + 0x209) = 1;
  FUN_004314a8((int *)param_1[0x81],(int)param_1);
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

