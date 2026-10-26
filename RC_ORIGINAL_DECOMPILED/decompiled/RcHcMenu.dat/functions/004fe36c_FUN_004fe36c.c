/*
 * FUN_004fe36c at 004fe36c
 * int * __register FUN_004fe36c(int * param_1, char param_2, int * param_3)
 * Address ranges: 004fe36c-004fe421
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004fe36c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
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
  FUN_00429430(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 0x82) = 0;
  piVar1 = FUN_0041c468((int *)&PTR_FUN_0042dc98,'\x01',extraout_ECX_00);
  param_1[0x83] = (int)piVar1;
  iVar2 = FUN_004c5364((int *)&PTR_FUN_004c520c,'\x01',(int)param_1);
  param_1[0x84] = iVar2;
  *(undefined1 *)(param_1 + 0x85) = 1;
  *(undefined1 *)((int)param_1 + 0x215) = 0;
  FUN_00406a48(&PTR_DAT_004fd8f4,param_1 + 0x86);
  FUN_004314a8((int *)param_1[0x83],(int)param_1);
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

