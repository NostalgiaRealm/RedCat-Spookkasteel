/*
 * FUN_00485710 at 00485710
 * undefined1 __register FUN_00485710(int param_1)
 * Address ranges: 00485710-0048575c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 129 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 129 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_00485710(int param_1)

{
  short sVar1;
  
  if (*(int *)(param_1 + 0x168) != 0) {
    FUN_00473148(param_1);
    sVar1 = thunk_FUN_004799f9(*(undefined4 *)(param_1 + 0x168));
    if ((sVar1 == 0) && (sVar1 = thunk_FUN_00479c8e(*(undefined4 *)(param_1 + 0x168)), sVar1 == 0))
    {
      return 1;
    }
  }
  return 0;
}

