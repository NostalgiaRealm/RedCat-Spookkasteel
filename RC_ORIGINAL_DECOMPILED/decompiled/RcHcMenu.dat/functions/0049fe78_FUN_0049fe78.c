/*
 * FUN_0049fe78 at 0049fe78
 * undefined __register FUN_0049fe78(int * param_1, char param_2)
 * Address ranges: 0049fe78-0049fea6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 15 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 15 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_0049fe78(int *param_1,char param_2)

{
  if ((char)param_1[0x13] != param_2) {
    *(char *)(param_1 + 0x13) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

