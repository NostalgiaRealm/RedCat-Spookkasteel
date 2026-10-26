/*
 * FUN_00485680 at 00485680
 * undefined __register FUN_00485680(int param_1, int param_2, undefined1 param_3)
 * Address ranges: 00485680-0048568c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 125 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 125 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00485680(int param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(param_2 + (uint)*(ushort *)(param_1 + 0x1ec) + 5) = param_3;
  return;
}

