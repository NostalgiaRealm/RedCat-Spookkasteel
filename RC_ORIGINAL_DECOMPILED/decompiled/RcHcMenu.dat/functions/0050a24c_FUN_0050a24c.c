/*
 * FUN_0050a24c at 0050a24c
 * int * __register FUN_0050a24c(int * param_1, char param_2, int * param_3)
 * Address ranges: 0050a24c-0050a2d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0050a24c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
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
  FUN_00501218(param_1,'\0',param_3);
  param_1[0x96] = 0;
  FUN_005017f4(param_1,'\0');
  *(undefined1 *)((int)param_1 + 0x245) = 0;
  FUN_004fe5b0((int)param_1,'\0');
  *(undefined1 *)(param_1 + 0x9e) = 0x10;
  *(undefined *)((int)param_1 + 0x279) = *PTR_DAT_0057215c;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

