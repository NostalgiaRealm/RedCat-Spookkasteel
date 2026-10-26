/*
 * FUN_00543cdc at 00543cdc
 * undefined __register FUN_00543cdc(int param_1)
 * Address ranges: 00543cdc-00543cfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x543598 slot 61 for TCustomOALookupComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x543598 slot 61 for
   TCustomOALookupComboBox. Original bytes unchanged; names and types still inferred. */

void FUN_00543cdc(int param_1)

{
  int *piVar1;
  
  piVar1 = FUN_004f1af0((int *)&PTR_FUN_005432a8,'\x01',param_1);
  *(int **)(param_1 + 0x2a4) = piVar1;
  return;
}

