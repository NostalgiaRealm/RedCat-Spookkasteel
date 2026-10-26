/*
 * FUN_00503bfc at 00503bfc
 * int * __register FUN_00503bfc(int * param_1, char param_2, int param_3)
 * Address ranges: 00503bfc-00503c57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x503898 slot 0 for TDaviComboBoxItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x503898 slot 0 for
   TDaviComboBoxItem. Original bytes unchanged; names and types still inferred. */

int * FUN_00503bfc(int *param_1,char param_2,int param_3)

{
  int extraout_ECX;
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
  FUN_00500f9c(param_1,'\0',param_3);
  FUN_00403db0(param_1 + 3);
  param_1[4] = -1;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

