/*
 * FUN_00510abc at 00510abc
 * undefined __register FUN_00510abc(int param_1)
 * Address ranges: 00510abc-00510b19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50fe0c slot 74 for TDaviCustomCurrencyCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50fe0c slot 74 for
   TDaviCustomCurrencyCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00510abc(int param_1)

{
  int *piVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x234) + 8) != '\0') {
    piVar1 = (int *)FUN_00510e14(param_1);
    FUN_004fcc04(piVar1);
    return;
  }
  FUN_00403224(*(int **)(param_1 + 0x234),(int)&PTR_FUN_0050fc3c);
  piVar1 = (int *)FUN_00510e14(param_1);
  FUN_004fcc04(piVar1);
  return;
}

