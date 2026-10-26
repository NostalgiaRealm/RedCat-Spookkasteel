/*
 * FUN_00473c98 at 00473c98
 * undefined __register FUN_00473c98(int param_1)
 * Address ranges: 00473c98-00473cb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 50 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 50 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00473c98(int param_1)

{
  if (*(short *)(param_1 + 0xca) != 0) {
    (**(code **)(param_1 + 200))(*(undefined4 *)(param_1 + 0xcc),param_1);
  }
  return;
}

