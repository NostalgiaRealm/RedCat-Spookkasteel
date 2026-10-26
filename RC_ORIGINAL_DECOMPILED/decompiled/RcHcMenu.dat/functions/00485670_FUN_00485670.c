/*
 * FUN_00485670 at 00485670
 * undefined2 __register FUN_00485670(int param_1, int param_2)
 * Address ranges: 00485670-0048567c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 109 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 109 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

undefined2 FUN_00485670(int param_1,int param_2)

{
  return CONCAT11((char)(*(ushort *)(param_1 + 0x1ec) >> 8),
                  *(undefined1 *)(param_2 + (uint)*(ushort *)(param_1 + 0x1ec) + 5));
}

