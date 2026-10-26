/*
 * FUN_0043d788 at 0043d788
 * int * __register FUN_0043d788(int * param_1, char param_2, int * param_3)
 * Address ranges: 0043d788-0043d7ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43d334 slot 11 for TCustomActionList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43d334 slot 11 for
   TCustomActionList. Original bytes unchanged; names and types still inferred. */

int * FUN_0043d788(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00418f00(param_1,'\0',param_3);
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX_00);
  param_1[9] = iVar1;
  iVar1 = FUN_00403064((int *)&DAT_0043e038,'\x01',extraout_ECX_01);
  param_1[10] = iVar1;
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined1 **)(iVar1 + 8) = &LAB_0043d8ec;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

