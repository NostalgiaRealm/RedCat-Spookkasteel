/*
 * FUN_0043009c at 0043009c
 * int * __register FUN_0043009c(int * param_1, char param_2, int param_3)
 * Address ranges: 0043009c-004300ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0043009c(int *param_1,char param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int extraout_ECX;
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
  FUN_0042ff90(param_1,'\0',param_3);
  piVar1 = FUN_0041c16c((int *)&PTR_FUN_0041a6d0,'\x01',extraout_ECX_00);
  param_1[0x10] = (int)piVar1;
  uVar2 = FUN_004230a8(0,0xffffff);
  FUN_0041c2ec(piVar1,uVar2);
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

