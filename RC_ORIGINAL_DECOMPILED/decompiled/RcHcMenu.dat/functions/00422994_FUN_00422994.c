/*
 * FUN_00422994 at 00422994
 * undefined __register FUN_00422994(int param_1)
 * Address ranges: 00422994-004229a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 8 for TIcon. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 8 for TIcon.
   Original bytes unchanged; names and types still inferred. */

void FUN_00422994(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x14) == 0) {
    GetSystemMetrics(0xc);
  }
  return;
}

