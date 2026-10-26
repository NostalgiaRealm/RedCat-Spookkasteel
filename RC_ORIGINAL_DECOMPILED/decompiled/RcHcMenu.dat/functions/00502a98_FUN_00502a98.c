/*
 * FUN_00502a98 at 00502a98
 * int * __register FUN_00502a98(int * param_1, char param_2, int * param_3)
 * Address ranges: 00502a98-00502b6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50273c slot 11 for TDaviCustomListBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50273c slot 11 for
   TDaviCustomListBox. Original bytes unchanged; names and types still inferred. */

int * FUN_00502a98(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
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
  FUN_004ef330(param_1,'\0',param_3);
  iVar1 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_00);
  param_1[0x82] = iVar1;
  param_1[0x80] = 0xd;
  param_1[0x81] = -1;
  param_1[0x83] = 0;
  param_1[0x84] = -1;
  *(undefined1 *)(param_1 + 0x85) = 0;
  FUN_004328c4((int)param_1,'\0');
  FUN_004328a0((int)param_1,-0x7ffffffb);
  FUN_00438bb4((int)param_1,'\x01');
  FUN_00431f78(param_1,0x79);
  FUN_00431f98(param_1,0x61);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

