/*
 * FUN_00510b20 at 00510b20
 * undefined __register FUN_00510b20(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00510b20-00510b4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50fe0c slot 75 for TDaviCustomCurrencyCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50fe0c slot 75 for
   TDaviCustomCurrencyCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00510b20(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(char *)(param_1[0x8d] + 8) != '\0') {
    FUN_005018b8((int)param_1,(uint *)0x0);
    return;
  }
  FUN_005112f0(param_1,param_2,param_3);
  return;
}

