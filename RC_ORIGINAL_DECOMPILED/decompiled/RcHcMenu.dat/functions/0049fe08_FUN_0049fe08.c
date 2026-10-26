/*
 * FUN_0049fe08 at 0049fe08
 * undefined __register FUN_0049fe08(int * param_1, int param_2)
 * Address ranges: 0049fe08-0049fe3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 16 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 16 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_0049fe08(int *param_1,int param_2)

{
  if (*(int *)(param_1[10] + 0xc) != param_2) {
    *(int *)(param_1[10] + 0xc) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

