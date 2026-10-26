/*
 * FUN_0046e3dc at 0046e3dc
 * int * __register FUN_0046e3dc(int * param_1, char param_2, int * param_3)
 * Address ranges: 0046e3dc-0046e42e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x465b5c slot 11 for TGuidField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x465b5c slot 11 for
   TGuidField. Original bytes unchanged; names and types still inferred. */

int * FUN_0046e3dc(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
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
  (**(code **)(*param_1 + 0xb4))(param_1,0x26);
  FUN_0046a1bc(param_1,'\0',param_3);
  FUN_00469d10((int)param_1,0x23);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

