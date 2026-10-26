/*
 * FUN_004ed1ac at 004ed1ac
 * int * __register FUN_004ed1ac(int * param_1, char param_2, int param_3)
 * Address ranges: 004ed1ac-004ed202
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea32c slot 14 for TAppBDEDatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea32c slot 14 for
   TAppBDEDatabase. Original bytes unchanged; names and types still inferred. */

int * FUN_004ed1ac(int *param_1,char param_2,int param_3)

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
  FUN_004ce02c(param_1,'\0',param_3);
  FUN_00403e04(param_1 + 10,(undefined4 *)"NO_ALIAS_SPECIFIED");
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

