/*
 * FUN_0042d084 at 0042d084
 * undefined __register FUN_0042d084(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0042d084-0042d0a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42866c slot 46 for TCustomListBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42866c slot 46 for
   TCustomListBox. Original bytes unchanged; names and types still inferred. */

void FUN_0042d084(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x22a) != 0) {
    (**(code **)(param_1 + 0x228))(*(undefined4 *)(param_1 + 0x22c),param_1,param_2,param_3);
  }
  return;
}

