/*
 * FUN_00485550 at 00485550
 * undefined4 __register FUN_00485550(int param_1)
 * Address ranges: 00485550-0048556e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 73 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 73 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00485550(int param_1)

{
  if (*(char *)(param_1 + 0x1b4) == '\0') {
    param_1 = FUN_00486bc4(param_1);
    if ((char)param_1 == '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

