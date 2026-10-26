/*
 * FUN_0041967c at 0041967c
 * undefined __register FUN_0041967c(int param_1)
 * Address ranges: 0041967c-00419693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x411384 slot -8 for TComponent. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x411384 slot -8 for
   TComponent. Original bytes unchanged; names and types still inferred. */

void FUN_0041967c(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))();
    return;
  }
  FUN_004032b8();
  return;
}

