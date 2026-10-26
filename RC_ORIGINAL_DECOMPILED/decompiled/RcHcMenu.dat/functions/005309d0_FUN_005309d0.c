/*
 * FUN_005309d0 at 005309d0
 * undefined __register FUN_005309d0(int param_1)
 * Address ranges: 005309d0-00530a2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 67 for TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 67 for
   TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_005309d0(int param_1)

{
  if (*(int *)(param_1 + 0x2dc) != 0) {
    FUN_00403094(*(int **)(param_1 + 0x2dc));
    *(undefined4 *)(param_1 + 0x2dc) = 0;
  }
  if (*(int *)(param_1 + 0x2e8) != 0) {
    FUN_00403094(*(int **)(param_1 + 0x2e8));
    *(undefined4 *)(param_1 + 0x2e8) = 0;
  }
  FUN_005344e4(param_1);
  return;
}

