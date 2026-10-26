/*
 * FUN_004ca428 at 004ca428
 * int * __register FUN_004ca428(int * param_1, char param_2, int param_3, int param_4)
 * Address ranges: 004ca428-004ca475
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004ca428(int *param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_0043e23c(param_1,'\0',param_3,param_4);
  iVar1 = FUN_00403064((int *)&DAT_00410838,'\x01',extraout_ECX_00);
  param_1[0x1e] = iVar1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

