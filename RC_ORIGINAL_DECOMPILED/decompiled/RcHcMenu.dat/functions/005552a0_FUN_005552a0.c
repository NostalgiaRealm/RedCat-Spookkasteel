/*
 * FUN_005552a0 at 005552a0
 * int * __register FUN_005552a0(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 005552a0-005552f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x555088 slot 11 for TfrmPlayer. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x555088 slot 11 for
   TfrmPlayer. Original bytes unchanged; names and types still inferred. */

int * FUN_005552a0(int *param_1,char param_2,undefined4 param_3)

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
  FUN_0054ec44(param_1,'\0',param_3,*(int *)(*(int *)PTR_DAT_00572108 + 300));
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

