/*
 * FUN_00510754 at 00510754
 * undefined __register FUN_00510754(int param_1)
 * Address ranges: 00510754-00510778
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50fe0c slot 64 for TDaviCustomCurrencyCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50fe0c slot 64 for
   TDaviCustomCurrencyCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00510754(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00510e14(param_1);
  *(int *)(iVar1 + 0x25c) = param_1;
  *(undefined1 **)(iVar1 + 600) = &LAB_00510204;
  return;
}

