/*
 * FUN_004855b0 at 004855b0
 * undefined __register FUN_004855b0(int * param_1)
 * Address ranges: 004855b0-004855cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 144 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 144 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_004855b0(int *param_1)

{
  FUN_00473660(param_1);
  if (*(char *)((int)param_1 + 0x8d) == '\x04') {
    FUN_00485b08(param_1,'\x01');
  }
  return;
}

