/*
 * FUN_00557358 at 00557358
 * int * __register FUN_00557358(int * param_1, char param_2, int * param_3)
 * Address ranges: 00557358-00557428
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00557358(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar1;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00556824(param_1,'\0',param_3);
  FUN_00432744(param_1[0x85],*(uint **)(PTR_DAT_00572404 + 0x118));
  FUN_00432744(param_1[0x86],*(uint **)(PTR_DAT_00572404 + 0x10c));
  FUN_00432744(param_1[0x87],*(uint **)(PTR_DAT_00572404 + 0x110));
  FUN_00432744(param_1[0x88],*(uint **)(PTR_DAT_00572404 + 0x114));
  FUN_00432744(param_1[0x89],*(uint **)(PTR_DAT_00572404 + 0x108));
  FUN_00556d2c((int)param_1,extraout_EDX,extraout_ECX_00);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

