/*
 * FUN_004ad738 at 004ad738
 * undefined __register FUN_004ad738(int param_1, char param_2)
 * Address ranges: 004ad738-004ad76c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ac510 slot 13 for TGDICustomButtonDefinition. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ac510 slot 13 for
   TGDICustomButtonDefinition. Original bytes unchanged; names and types still inferred. */

void FUN_004ad738(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x6c) != param_2) {
    *(char *)(param_1 + 0x6c) = param_2;
    FUN_004ad80c(param_1,0x5402,0,0);
  }
  return;
}

