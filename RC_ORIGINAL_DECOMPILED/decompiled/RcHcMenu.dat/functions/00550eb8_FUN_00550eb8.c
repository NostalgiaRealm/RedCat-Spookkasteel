/*
 * FUN_00550eb8 at 00550eb8
 * int * __register FUN_00550eb8(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00550eb8-00550f14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x550e44 slot 1 for TMenuIni. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x550e44 slot 1 for TMenuIni.
   Original bytes unchanged; names and types still inferred. */

int * FUN_00550eb8(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_004a3bec(param_1,'\0',param_3);
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX_00);
  param_1[0xb] = iVar1;
  param_1[0xc] = -1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

