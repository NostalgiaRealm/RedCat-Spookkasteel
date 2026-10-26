/*
 * FUN_00473dac at 00473dac
 * undefined __register FUN_00473dac(int param_1)
 * Address ranges: 00473dac-00473dc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 58 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 58 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00473dac(int param_1)

{
  if (*(short *)(param_1 + 0xd2) != 0) {
    (**(code **)(param_1 + 0xd0))(*(undefined4 *)(param_1 + 0xd4),param_1);
  }
  return;
}

