/*
 * FUN_004229a8 at 004229a8
 * undefined __register FUN_004229a8(int param_1)
 * Address ranges: 004229a8-004229b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 11 for TIcon. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 11 for TIcon.
   Original bytes unchanged; names and types still inferred. */

void FUN_004229a8(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x10) == 0) {
    GetSystemMetrics(0xb);
  }
  return;
}

