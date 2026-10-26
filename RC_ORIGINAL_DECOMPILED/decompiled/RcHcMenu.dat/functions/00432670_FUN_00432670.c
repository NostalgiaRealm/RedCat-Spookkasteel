/*
 * FUN_00432670 at 00432670
 * undefined __register FUN_00432670(int param_1, char param_2)
 * Address ranges: 00432670-00432686
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 23 for TCustomGroupBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 23 for
   TCustomGroupBox. Original bytes unchanged; names and types still inferred. */

void FUN_00432670(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x48)) {
    *(char *)(param_1 + 0x48) = param_2;
    FUN_00433700(param_1,0xb00c,0,0);
  }
  return;
}

