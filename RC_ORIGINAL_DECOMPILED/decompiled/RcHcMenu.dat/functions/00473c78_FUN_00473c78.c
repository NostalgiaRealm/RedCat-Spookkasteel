/*
 * FUN_00473c78 at 00473c78
 * undefined __register FUN_00473c78(int param_1)
 * Address ranges: 00473c78-00473c94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 49 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 49 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00473c78(int param_1)

{
  if (*(short *)(param_1 + 0xda) != 0) {
    (**(code **)(param_1 + 0xd8))(*(undefined4 *)(param_1 + 0xdc),param_1);
  }
  return;
}

