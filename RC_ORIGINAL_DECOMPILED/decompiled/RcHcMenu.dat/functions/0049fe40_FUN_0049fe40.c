/*
 * FUN_0049fe40 at 0049fe40
 * undefined __register FUN_0049fe40(int * param_1, int param_2)
 * Address ranges: 0049fe40-0049fe74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 13 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 13 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_0049fe40(int *param_1,int param_2)

{
  if (*(int *)(param_1[10] + 0x10) != param_2) {
    *(int *)(param_1[10] + 0x10) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

