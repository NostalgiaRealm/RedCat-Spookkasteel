/*
 * FUN_00449bd8 at 00449bd8
 * int * __register FUN_00449bd8(int * param_1, char param_2, int * param_3)
 * Address ranges: 00449bd8-00449c33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4460ec slot 11 for TScrollBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4460ec slot 11 for
   TScrollBox. Original bytes unchanged; names and types still inferred. */

int * FUN_00449bd8(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_004493c8(param_1,'\0',param_3);
  param_1[0x10] = 0xab;
  FUN_00431f78(param_1,0xb9);
  FUN_00431f98(param_1,0x29);
  *(undefined1 *)(param_1 + 0x82) = 1;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

