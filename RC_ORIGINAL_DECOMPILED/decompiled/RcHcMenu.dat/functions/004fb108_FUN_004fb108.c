/*
 * FUN_004fb108 at 004fb108
 * undefined __register FUN_004fb108(int param_1)
 * Address ranges: 004fb108-004fb129
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 61 for TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4fa08c slot 61 for
   TCustomOAFKComboBox. Original bytes unchanged; names and types still inferred. */

void FUN_004fb108(int param_1)

{
  int *piVar1;
  
  piVar1 = FUN_004f1af0((int *)&PTR_FUN_004f9f8c,'\x01',param_1);
  *(int **)(param_1 + 0x2a4) = piVar1;
  return;
}

