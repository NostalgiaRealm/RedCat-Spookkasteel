/*
 * FUN_0048f540 at 0048f540
 * int * __register FUN_0048f540(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0048f540-0048f587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e468 slot 0 for TAppOrderPropRef. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e468 slot 0 for
   TAppOrderPropRef. Original bytes unchanged; names and types still inferred. */

int * FUN_0048f540(int *param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_0048f08c(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 1) = 0;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

