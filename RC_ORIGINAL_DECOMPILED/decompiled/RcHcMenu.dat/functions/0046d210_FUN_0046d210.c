/*
 * FUN_0046d210 at 0046d210
 * int * __register FUN_0046d210(int * param_1, char param_2, int * param_3)
 * Address ranges: 0046d210-0046d254
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464d18 slot 11 for TMemoField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464d18 slot 11 for
   TMemoField. Original bytes unchanged; names and types still inferred. */

int * FUN_0046d210(int *param_1,char param_2,int *param_3)

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
  FUN_0046ca30(param_1,'\0',param_3);
  FUN_00469d10((int)param_1,0x10);
  *(undefined1 *)(param_1 + 0x36) = 1;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

