/*
 * FUN_004a1200 at 004a1200
 * undefined __register FUN_004a1200(int param_1, undefined4 param_2)
 * Address ranges: 004a1200-004a1227
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a0d80 slot 4 for TDaviLinkedGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a0d80 slot 4 for
   TDaviLinkedGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004a1200(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x1a) != 0) {
    (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c),param_2);
  }
  return;
}

