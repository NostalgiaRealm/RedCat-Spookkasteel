/*
 * FUN_004852f0 at 004852f0
 * undefined __register FUN_004852f0(int param_1, int * param_2)
 * Address ranges: 004852f0-00485314
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 38 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 38 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_004852f0(int param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x74))();
  FUN_004730d8(param_1);
  thunk_FUN_00479ab8(*(undefined4 *)(param_1 + 0x168));
  return;
}

