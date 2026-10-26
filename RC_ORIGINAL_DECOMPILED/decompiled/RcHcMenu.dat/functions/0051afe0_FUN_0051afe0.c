/*
 * FUN_0051afe0 at 0051afe0
 * undefined __register FUN_0051afe0(int param_1)
 * Address ranges: 0051afe0-0051b03b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x519c54 slot published:cboSortColumnChange for TfrmDaviGridSettings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x519c54 slot
   published:cboSortColumnChange for TfrmDaviGridSettings. Original bytes unchanged; names and types
   still inferred. */

void FUN_0051afe0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0042a950(*(int **)(param_1 + 0x2f0));
  if (iVar1 == 0) {
    FUN_0042a96c(*(int **)(param_1 + 0x2f4),0);
  }
  iVar1 = FUN_0042a950(*(int **)(param_1 + 0x2f4));
  if (iVar1 == 0) {
    FUN_0042a96c(*(int **)(param_1 + 0x2f8),0);
  }
  FUN_0051a2b0(param_1);
  return;
}

