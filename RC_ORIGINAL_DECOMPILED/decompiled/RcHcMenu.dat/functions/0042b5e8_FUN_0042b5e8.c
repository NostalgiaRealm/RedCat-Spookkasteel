/*
 * FUN_0042b5e8 at 0042b5e8
 * undefined __register FUN_0042b5e8(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0042b5e8-0042b607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x426c74 slot 48 for TCustomComboBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x426c74 slot 48 for
   TCustomComboBox. Original bytes unchanged; names and types still inferred. */

void FUN_0042b5e8(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x24a) != 0) {
    (**(code **)(param_1 + 0x248))(*(undefined4 *)(param_1 + 0x24c),param_1,param_2,param_3);
  }
  return;
}

