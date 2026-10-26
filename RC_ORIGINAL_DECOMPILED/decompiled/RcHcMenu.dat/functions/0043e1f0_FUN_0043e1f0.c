/*
 * FUN_0043e1f0 at 0043e1f0
 * int * __register FUN_0043e1f0(int * param_1, char param_2, int * param_3)
 * Address ranges: 0043e1f0-0043e239
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42f3ac slot 11 for TDragImageList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42f3ac slot 11 for
   TDragImageList. Original bytes unchanged; names and types still inferred. */

int * FUN_0043e1f0(int *param_1,char param_2,int *param_3)

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
  FUN_00418f00(param_1,'\0',param_3);
  param_1[10] = 0x10;
  param_1[9] = 0x10;
  (**(code **)(*param_1 + 0x34))();
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

