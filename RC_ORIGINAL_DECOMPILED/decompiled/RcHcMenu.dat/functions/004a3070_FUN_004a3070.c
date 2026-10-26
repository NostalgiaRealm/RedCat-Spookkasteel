/*
 * FUN_004a3070 at 004a3070
 * int * __register FUN_004a3070(int * param_1, char param_2, int * param_3)
 * Address ranges: 004a3070-004a3115
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a2c88 slot 11 for TDaviGraphicButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a2c88 slot 11 for
   TDaviGraphicButton. Original bytes unchanged; names and types still inferred. */

int * FUN_004a3070(int *param_1,char param_2,int *param_3)

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
  FUN_0042b9b8(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] & 0xffffffbf;
  piVar1 = FUN_0041c468((int *)&PTR_FUN_0041a794,'\x01',extraout_ECX_00);
  param_1[0x80] = (int)piVar1;
  param_1[0x82] = 0;
  param_1[0x83] = 0xc0c0c0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

