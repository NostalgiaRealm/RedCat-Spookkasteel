/*
 * FUN_00473dec at 00473dec
 * undefined __register FUN_00473dec(int param_1)
 * Address ranges: 00473dec-00473e08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 60 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 60 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00473dec(int param_1)

{
  if (*(short *)(param_1 + 0xa2) != 0) {
    (**(code **)(param_1 + 0xa0))(*(undefined4 *)(param_1 + 0xa4),param_1);
  }
  return;
}

