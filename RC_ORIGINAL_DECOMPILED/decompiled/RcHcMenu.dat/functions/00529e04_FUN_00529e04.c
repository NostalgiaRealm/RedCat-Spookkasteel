/*
 * FUN_00529e04 at 00529e04
 * int * __register FUN_00529e04(int * param_1, char param_2, undefined4 param_3, int param_4, int param_5)
 * Address ranges: 00529e04-00529e6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00529e04(int *param_1,char param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_005471e0(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_0052b330(param_1,param_5);
  FUN_0052b4a8(param_1,param_4);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

