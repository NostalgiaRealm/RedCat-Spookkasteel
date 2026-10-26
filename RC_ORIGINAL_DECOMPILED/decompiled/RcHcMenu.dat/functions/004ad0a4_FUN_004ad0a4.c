/*
 * FUN_004ad0a4 at 004ad0a4
 * undefined __register FUN_004ad0a4(int param_1, int param_2)
 * Address ranges: 004ad0a4-004ad0d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ac324 slot 11 for TCaptionRect. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ac324 slot 11 for
   TCaptionRect. Original bytes unchanged; names and types still inferred. */

void FUN_004ad0a4(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x10) != param_2) {
    *(int *)(param_1 + 0x10) = param_2;
    FUN_004ad164(param_1,param_1);
  }
  return;
}

