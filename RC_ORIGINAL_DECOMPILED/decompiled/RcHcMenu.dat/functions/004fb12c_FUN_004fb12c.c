/*
 * FUN_004fb12c at 004fb12c
 * int * __register FUN_004fb12c(int * param_1, char param_2, int * param_3)
 * Address ranges: 004fb12c-004fb19b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 11 for TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 11 for
   TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred. */

int * FUN_004fb12c(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
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
  FUN_00543d00(param_1,'\0',param_3);
  piVar1 = FUN_0045b418((int *)&DAT_004f06c0,'\x01',extraout_ECX_00);
  param_1[0xad] = (int)piVar1;
  *(undefined1 *)(param_1 + 0xac) = 1;
  FUN_00541a0c(param_1,'\0');
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

