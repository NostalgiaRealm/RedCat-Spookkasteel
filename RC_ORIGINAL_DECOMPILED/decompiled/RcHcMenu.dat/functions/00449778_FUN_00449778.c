/*
 * FUN_00449778 at 00449778
 * undefined __register FUN_00449778(int * param_1, int * param_2)
 * Address ranges: 00449778-0044978d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x445ea4 slot 46 for TScrollingWinControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x445ea4 slot 46 for
   TScrollingWinControl. Original bytes unchanged; names and types still inferred. */

void FUN_00449778(int *param_1,int *param_2)

{
  if (((param_2 != (int *)0x0) && ((*(byte *)(param_2 + 8) & 1) == 0)) &&
     ((*(byte *)(param_1 + 8) & 1) == 0)) {
    FUN_00449790(param_1,param_2);
  }
  return;
}

