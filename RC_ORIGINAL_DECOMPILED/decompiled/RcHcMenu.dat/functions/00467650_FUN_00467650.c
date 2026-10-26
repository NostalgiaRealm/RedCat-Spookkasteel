/*
 * FUN_00467650 at 00467650
 * undefined __register FUN_00467650(int param_1)
 * Address ranges: 00467650-00467669
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x461fa8 slot 4 for TDefCollection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x461fa8 slot 4 for
   TDefCollection. Original bytes unchanged; names and types still inferred. */

void FUN_00467650(int param_1)

{
  if ((*(int *)(param_1 + 0x1c) != 0) && ((*(byte *)(*(int *)(param_1 + 0x1c) + 0x20) & 1) == 0)) {
    (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c));
  }
  return;
}

