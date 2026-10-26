/*
 * FUN_004ad7a8 at 004ad7a8
 * undefined __register FUN_004ad7a8(int param_1, char param_2)
 * Address ranges: 004ad7a8-004ad7dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ac510 slot 15 for TGDICustomButtonDefinition. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ac510 slot 15 for
   TGDICustomButtonDefinition. Original bytes unchanged; names and types still inferred. */

void FUN_004ad7a8(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x6e) != param_2) {
    *(char *)(param_1 + 0x6e) = param_2;
    FUN_004ad80c(param_1,0x5402,0,0);
  }
  return;
}

