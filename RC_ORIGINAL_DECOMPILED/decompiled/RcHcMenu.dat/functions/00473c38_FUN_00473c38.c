/*
 * FUN_00473c38 at 00473c38
 * undefined __register FUN_00473c38(int param_1)
 * Address ranges: 00473c38-00473c54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 47 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 47 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00473c38(int param_1)

{
  if (*(short *)(param_1 + 0xba) != 0) {
    (**(code **)(param_1 + 0xb8))(*(undefined4 *)(param_1 + 0xbc),param_1);
  }
  return;
}

