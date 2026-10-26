/*
 * FUN_00517624 at 00517624
 * undefined __register FUN_00517624(int * param_1, char param_2)
 * Address ranges: 00517624-00517655
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x516d4c slot 47 for TDaviButton2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x516d4c slot 47 for
   TDaviButton2. Original bytes unchanged; names and types still inferred. */

void FUN_00517624(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x209)) {
    *(char *)((int)param_1 + 0x209) = param_2;
    FUN_00432c38(param_1);
  }
  return;
}

