/*
 * FUN_00561c08 at 00561c08
 * undefined __register FUN_00561c08(int * param_1)
 * Address ranges: 00561c08-00561c29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x561588 slot 3 for TMediaPlayer. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x561588 slot 3 for
   TMediaPlayer. Original bytes unchanged; names and types still inferred. */

void FUN_00561c08(int *param_1)

{
  FUN_0043442c(param_1);
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) && (*(char *)((int)param_1 + 0x305) != '\0')) {
    FUN_00562b10(param_1);
  }
  return;
}

