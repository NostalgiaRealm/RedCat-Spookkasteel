/*
 * FUN_00513df0 at 00513df0
 * undefined __register FUN_00513df0(int param_1)
 * Address ranges: 00513df0-00513e43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x512f34 slot 74 for TDaviCustomNumericCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x512f34 slot 74 for
   TDaviCustomNumericCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00513df0(int param_1)

{
  int *piVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x234) + 8) != '\0') {
    piVar1 = (int *)FUN_00513f3c(param_1);
    FUN_004fcc04(piVar1);
    return;
  }
  FUN_00403224(*(int **)(param_1 + 0x234),(int)&PTR_FUN_00512d68);
  piVar1 = (int *)FUN_00513f3c(param_1);
  FUN_004fcc04(piVar1);
  return;
}

