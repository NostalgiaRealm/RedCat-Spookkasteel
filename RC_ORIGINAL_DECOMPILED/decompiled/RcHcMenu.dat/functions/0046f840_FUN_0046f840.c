/*
 * FUN_0046f840 at 0046f840
 * int * __register FUN_0046f840(int * param_1, char param_2, int * param_3)
 * Address ranges: 0046f840-0046f8a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x46627c slot 6 for TParam. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x46627c slot 6 for TParam.
   Original bytes unchanged; names and types still inferred. */

int * FUN_0046f840(int *param_1,char param_2,int *param_3)

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
  FUN_00412c18(param_1,'\0',param_3);
  FUN_0046f9ac((int)param_1,0);
  FUN_0046f9d0((int)param_1,0);
  FUN_00404e28((VARIANT *)(param_1 + 6),(VARIANTARG *)PTR_DAT_00572140);
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_00403db0(param_1 + 4);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

