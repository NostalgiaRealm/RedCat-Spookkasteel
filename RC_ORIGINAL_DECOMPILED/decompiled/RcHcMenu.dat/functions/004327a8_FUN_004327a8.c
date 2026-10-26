/*
 * FUN_004327a8 at 004327a8
 * undefined __register FUN_004327a8(int param_1, char param_2)
 * Address ranges: 004327a8-004327c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 26 for TCustomGroupBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 26 for
   TCustomGroupBox. Original bytes unchanged; names and types still inferred. */

void FUN_004327a8(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4f)) {
    *(char *)(param_1 + 0x4f) = param_2;
    *(undefined1 *)(param_1 + 0x50) = 0;
    FUN_00433700(param_1,0xb03c,0,0);
  }
  return;
}

