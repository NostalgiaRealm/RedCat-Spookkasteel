/*
 * FUN_0044aa10 at 0044aa10
 * undefined __register FUN_0044aa10(int param_1, char param_2)
 * Address ranges: 0044aa10-0044aa36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 25 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 25 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044aa10(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x50)) {
    FUN_004328e4(param_1,param_2);
    if (*(int *)(param_1 + 0x24) == 0) {
      FUN_00433700(param_1,0xb03d,0,0);
    }
  }
  return;
}

