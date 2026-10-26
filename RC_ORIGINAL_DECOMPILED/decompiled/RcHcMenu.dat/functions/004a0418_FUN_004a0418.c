/*
 * FUN_004a0418 at 004a0418
 * undefined __register FUN_004a0418(int param_1, undefined4 param_2)
 * Address ranges: 004a0418-004a043f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 27 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 27 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_004a0418(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x6a) != 0) {
    (**(code **)(param_1 + 0x68))(*(undefined4 *)(param_1 + 0x6c),param_2);
  }
  return;
}

