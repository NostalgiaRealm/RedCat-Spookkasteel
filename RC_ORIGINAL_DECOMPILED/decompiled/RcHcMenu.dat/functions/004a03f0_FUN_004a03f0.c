/*
 * FUN_004a03f0 at 004a03f0
 * undefined __register FUN_004a03f0(int param_1, undefined4 param_2)
 * Address ranges: 004a03f0-004a0417
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 26 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 26 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_004a03f0(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100),param_2);
  }
  return;
}

