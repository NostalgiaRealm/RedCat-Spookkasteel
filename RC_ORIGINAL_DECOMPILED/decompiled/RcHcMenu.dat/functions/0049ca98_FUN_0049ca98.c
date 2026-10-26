/*
 * FUN_0049ca98 at 0049ca98
 * undefined __register FUN_0049ca98(int param_1, undefined4 param_2)
 * Address ranges: 0049ca98-0049cabf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49c868 slot 12 for TDaviTimer. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49c868 slot 12 for
   TDaviTimer. Original bytes unchanged; names and types still inferred. */

void FUN_0049ca98(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x3a) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined4 *)(param_1 + 0x3c),param_2);
  }
  return;
}

