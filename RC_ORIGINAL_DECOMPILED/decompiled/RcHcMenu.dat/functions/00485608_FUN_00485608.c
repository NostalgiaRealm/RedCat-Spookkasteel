/*
 * FUN_00485608 at 00485608
 * undefined __register FUN_00485608(int param_1, undefined4 param_2, char param_3)
 * Address ranges: 00485608-0048563d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 112 for TBDEDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47dcb0 slot 112 for
   TBDEDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00485608(int param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  
  if (param_3 != '\0') {
    uVar1 = thunk_FUN_00479959(*(undefined4 *)(param_1 + 0x168));
    FUN_0047fe48(uVar1);
    return;
  }
  uVar1 = thunk_FUN_00479c7c(*(undefined4 *)(param_1 + 0x168));
  FUN_0047fe48(uVar1);
  return;
}

