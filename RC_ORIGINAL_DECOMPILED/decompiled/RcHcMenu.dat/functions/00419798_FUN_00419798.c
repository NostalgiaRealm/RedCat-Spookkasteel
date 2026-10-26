/*
 * FUN_00419798 at 00419798
 * undefined __register FUN_00419798(int param_1)
 * Address ranges: 00419798-004197ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4114e0 slot 1 for TBasicActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4114e0 slot 1 for
   TBasicActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00419798(int param_1)

{
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
  return;
}

