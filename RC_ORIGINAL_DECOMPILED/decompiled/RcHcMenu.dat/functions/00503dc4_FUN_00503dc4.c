/*
 * FUN_00503dc4 at 00503dc4
 * undefined __register FUN_00503dc4(int param_1, int * param_2)
 * Address ranges: 00503dc4-00503e36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x503898 slot 1 for TDaviComboBoxItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x503898 slot 1 for
   TDaviComboBoxItem. Original bytes unchanged; names and types still inferred. */

void FUN_00503dc4(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00503898);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_00503898);
  FUN_00503c58(param_1,*(uint **)(iVar2 + 0xc));
  iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_00503898);
  FUN_00503cf0(param_1,*(int *)(iVar2 + 0x10));
  FUN_00501164(param_1,(int)param_2);
  return;
}

