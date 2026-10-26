/*
 * FUN_0046cb98 at 0046cb98
 * undefined __register FUN_0046cb98(int param_1)
 * Address ranges: 0046cb98-0046cbb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 15 for TBlobField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 15 for
   TBlobField. Original bytes unchanged; names and types still inferred. */

void FUN_0046cb98(int param_1)

{
  if (*(char *)(param_1 + 0xd0) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x98))(*(int **)(param_1 + 0x28),param_1);
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  return;
}

