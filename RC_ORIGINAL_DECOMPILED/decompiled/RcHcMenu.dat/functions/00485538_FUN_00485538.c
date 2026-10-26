/*
 * FUN_00485538 at 00485538
 * undefined4 __register FUN_00485538(int param_1)
 * Address ranges: 00485538-0048554f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 141 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 141 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00485538(int param_1)

{
  if ((*(char *)(param_1 + 0x1dc) == '\x01') && (*(char *)(param_1 + 0x98) == '\0')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}

