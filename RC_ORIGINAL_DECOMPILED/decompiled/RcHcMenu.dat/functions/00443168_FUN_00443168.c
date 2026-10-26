/*
 * FUN_00443168 at 00443168
 * undefined __register FUN_00443168(int param_1)
 * Address ranges: 00443168-00443176
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fcd8 slot 15 for TMenuItem. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fcd8 slot 15 for
   TMenuItem. Original bytes unchanged; names and types still inferred. */

void FUN_00443168(int param_1)

{
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x1c))();
  }
  return;
}

