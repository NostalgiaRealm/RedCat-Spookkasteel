/*
 * FUN_004346a4 at 004346a4
 * undefined __register FUN_004346a4(int param_1)
 * Address ranges: 004346a4-004346b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 28 for TCustomGroupBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 28 for
   TCustomGroupBox. Original bytes unchanged; names and types still inferred. */

void FUN_004346a4(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x5c) + 0x1c))();
  }
  return;
}

