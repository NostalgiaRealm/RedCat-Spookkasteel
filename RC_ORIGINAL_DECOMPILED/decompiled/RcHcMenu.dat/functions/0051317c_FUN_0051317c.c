/*
 * FUN_0051317c at 0051317c
 * undefined __register FUN_0051317c(int param_1, int * param_2)
 * Address ranges: 0051317c-005131f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x512d68 slot 1 for TDaviNumericComboItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x512d68 slot 1 for
   TDaviNumericComboItem. Original bytes unchanged; names and types still inferred. */

void FUN_0051317c(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00512d68);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_00512d68);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
  iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_00512d68);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
  FUN_00501164(param_1,(int)param_2);
  return;
}

