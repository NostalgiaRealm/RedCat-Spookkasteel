/*
 * FUN_00559cd4 at 00559cd4
 * int * __register FUN_00559cd4(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00559cd4-00559cd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated native virtual-method table 0x559960 slot 11 for TfrmKeyConfig. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated native virtual-method table 0x559960
   slot 11 for TfrmKeyConfig. Original bytes unchanged; names and types still inferred. */

int * FUN_00559cd4(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
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
  FUN_0054ec44(param_1,'\0',param_3,*(int *)(*(int *)PTR_DAT_00572108 + 300));
  piVar1 = FUN_004a3bec((int *)&PTR_FUN_0056aaf0,'\x01',extraout_ECX_00);
  param_1[0xd6] = (int)piVar1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

