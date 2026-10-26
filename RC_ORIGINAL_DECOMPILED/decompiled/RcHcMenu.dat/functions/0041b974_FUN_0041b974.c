/*
 * FUN_0041b974 at 0041b974
 * int * __register FUN_0041b974(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0041b974-0041b9c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0041b974(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    cVar2 = extraout_DL;
  }
  DAT_0056f3e4 = 0;
  iVar1 = FUN_0041afa0(DAT_0057369c,(byte *)&DAT_0056f3e4);
  param_1[4] = iVar1;
  param_1[6] = -0x7ffffff8;
  param_1[7] = DAT_00573658;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

