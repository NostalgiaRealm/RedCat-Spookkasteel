/*
 * FUN_0048550c at 0048550c
 * undefined __register FUN_0048550c(int param_1)
 * Address ranges: 0048550c-00485537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 114 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 114 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_0048550c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = thunk_FUN_00479c70(*(undefined4 *)(param_1 + 0x168));
  if ((short)uVar1 != 0) {
    uVar2 = FUN_00478afc(uVar1);
    if ((short)uVar2 != 0x22) {
      FUN_0047fe48(uVar1);
    }
  }
  return;
}

