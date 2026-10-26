/*
 * FUN_00473c18 at 00473c18
 * undefined __register FUN_00473c18(int param_1)
 * Address ranges: 00473c18-00473c34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 46 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 46 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00473c18(int param_1)

{
  if (*(short *)(param_1 + 0xfa) != 0) {
    (**(code **)(param_1 + 0xf8))(*(undefined4 *)(param_1 + 0xfc),param_1);
  }
  return;
}

