/*
 * FUN_004a11d8 at 004a11d8
 * undefined __register FUN_004a11d8(int param_1, undefined4 param_2)
 * Address ranges: 004a11d8-004a11ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a0d80 slot 3 for TDaviLinkedGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a0d80 slot 3 for
   TDaviLinkedGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004a11d8(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x12) != 0) {
    (**(code **)(param_1 + 0x10))(*(undefined4 *)(param_1 + 0x14),param_2);
  }
  return;
}

