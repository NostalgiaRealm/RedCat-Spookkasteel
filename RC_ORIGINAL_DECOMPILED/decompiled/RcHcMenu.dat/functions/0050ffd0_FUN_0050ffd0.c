/*
 * FUN_0050ffd0 at 0050ffd0
 * undefined __register FUN_0050ffd0(int param_1, int * param_2)
 * Address ranges: 0050ffd0-0051002d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50fc3c slot 1 for TDaviCurrencyComboItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50fc3c slot 1 for
   TDaviCurrencyComboItem. Original bytes unchanged; names and types still inferred. */

void FUN_0050ffd0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0050fc3c);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_0050fc3c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
  FUN_00501164(param_1,(int)param_2);
  return;
}

