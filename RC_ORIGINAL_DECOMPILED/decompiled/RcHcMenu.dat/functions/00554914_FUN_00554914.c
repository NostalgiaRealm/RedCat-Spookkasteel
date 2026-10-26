/*
 * FUN_00554914 at 00554914
 * int * __register FUN_00554914(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00554914-005549d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55476c slot 11 for TfrmReqMessage. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55476c slot 11 for
   TfrmReqMessage. Original bytes unchanged; names and types still inferred. */

int * FUN_00554914(int *param_1,char param_2,undefined4 param_3)

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
  FUN_0054ec44(param_1,'\0',param_3,*(int *)(*(int *)PTR_DAT_00572108 + 0x128));
  FUN_00432744(param_1[0xc0],(uint *)0x0);
  FUN_00432744(param_1[0xbc],*(uint **)(PTR_DAT_00572404 + 0xf0));
  FUN_00432744(param_1[0xbd],*(uint **)(PTR_DAT_00572404 + 0xec));
  FUN_00403db0(param_1 + 0xc3);
  FUN_00403db0(param_1 + 0xc4);
  FUN_00403db0(param_1 + 0xc5);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

