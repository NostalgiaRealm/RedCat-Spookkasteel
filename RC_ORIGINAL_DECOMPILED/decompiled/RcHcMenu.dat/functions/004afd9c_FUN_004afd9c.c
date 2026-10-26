/*
 * FUN_004afd9c at 004afd9c
 * int * __register FUN_004afd9c(int * param_1, char param_2, int * param_3)
 * Address ranges: 004afd9c-004afe28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4af7a4 slot 11 for TCustomTransparentControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4af7a4 slot 11 for
   TCustomTransparentControl. Original bytes unchanged; names and types still inferred. */

int * FUN_004afd9c(int *param_1,char param_2,int *param_3)

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
  FUN_0043a330(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] | 1;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined1 *)(param_1 + 0x7e) = 1;
  FUN_00431f78(param_1,0x32);
  FUN_00431f98(param_1,0x19);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

