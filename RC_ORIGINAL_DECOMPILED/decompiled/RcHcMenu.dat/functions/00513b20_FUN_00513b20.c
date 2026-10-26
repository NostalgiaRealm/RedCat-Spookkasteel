/*
 * FUN_00513b20 at 00513b20
 * undefined __register FUN_00513b20(int param_1)
 * Address ranges: 00513b20-00513b44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x512f34 slot 64 for TDaviCustomNumericCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x512f34 slot 64 for
   TDaviCustomNumericCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00513b20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00513f3c(param_1);
  *(int *)(iVar1 + 0x25c) = param_1;
  *(code **)(iVar1 + 600) = FUN_00513644;
  return;
}

