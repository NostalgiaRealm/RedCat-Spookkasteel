/*
 * FUN_004a03c8 at 004a03c8
 * undefined __register FUN_004a03c8(int param_1, undefined4 param_2)
 * Address ranges: 004a03c8-004a03ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 25 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 25 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_004a03c8(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x5a) != 0) {
    (**(code **)(param_1 + 0x58))(*(undefined4 *)(param_1 + 0x5c),param_2);
  }
  return;
}

