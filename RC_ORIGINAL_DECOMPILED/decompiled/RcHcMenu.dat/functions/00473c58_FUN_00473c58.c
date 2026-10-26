/*
 * FUN_00473c58 at 00473c58
 * undefined __register FUN_00473c58(int param_1)
 * Address ranges: 00473c58-00473c74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 48 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 48 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00473c58(int param_1)

{
  if (*(short *)(param_1 + 0x10a) != 0) {
    (**(code **)(param_1 + 0x108))(*(undefined4 *)(param_1 + 0x10c),param_1);
  }
  return;
}

