/*
 * FUN_0041fb58 at 0041fb58
 * undefined __register FUN_0041fb58(int param_1, int * param_2)
 * Address ranges: 0041fb58-0041fb70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ab68 slot 21 for TMetafile. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ab68 slot 21 for
   TMetafile. Original bytes unchanged; names and types still inferred. */

void FUN_0041fb58(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(char *)(param_1 + 0x24) == '\0') {
      FUN_0041fecc(param_1,param_2);
    }
    else {
      FUN_0041fe40(param_1,param_2);
    }
  }
  return;
}

