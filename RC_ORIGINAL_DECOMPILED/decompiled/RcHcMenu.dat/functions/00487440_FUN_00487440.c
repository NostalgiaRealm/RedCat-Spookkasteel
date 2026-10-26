/*
 * FUN_00487440 at 00487440
 * undefined __register FUN_00487440(int param_1)
 * Address ranges: 00487440-00487471
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47e3e4 slot 59 for TNestedTable. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47e3e4 slot 59 for
   TNestedTable. Original bytes unchanged; names and types still inferred. */

void FUN_00487440(int param_1)

{
  FUN_00473dcc(param_1);
  if ((*(char *)(*(int *)(param_1 + 0x78) + 0x34) == '\x1d') &&
     (*(char *)(*(int *)(param_1 + 0x20c) + 0x8d) == '\x03')) {
    (**(code **)(**(int **)(param_1 + 0x20c) + 0x240))();
  }
  return;
}

