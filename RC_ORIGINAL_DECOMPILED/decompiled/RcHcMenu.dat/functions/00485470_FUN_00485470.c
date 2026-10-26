/*
 * FUN_00485470 at 00485470
 * undefined __register FUN_00485470(int param_1)
 * Address ranges: 00485470-004854a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 88 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 88 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00485470(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_004730d8(param_1);
  uVar1 = thunk_FUN_00479c8e(*(undefined4 *)(param_1 + 0x168));
  FUN_0047fe48(uVar1);
  iVar2 = FUN_004730d8(param_1);
  FUN_0048458c(param_1,iVar2);
  return;
}

