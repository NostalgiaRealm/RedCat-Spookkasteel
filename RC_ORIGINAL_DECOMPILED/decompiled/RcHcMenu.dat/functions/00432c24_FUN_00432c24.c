/*
 * FUN_00432c24 at 00432c24
 * undefined __register FUN_00432c24(int param_1)
 * Address ranges: 00432c24-00432c37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x424f58 slot 32 for TCustomLabel. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x424f58 slot 32 for
   TCustomLabel. Original bytes unchanged; names and types still inferred. */

void FUN_00432c24(int param_1)

{
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x80))();
  }
  return;
}

