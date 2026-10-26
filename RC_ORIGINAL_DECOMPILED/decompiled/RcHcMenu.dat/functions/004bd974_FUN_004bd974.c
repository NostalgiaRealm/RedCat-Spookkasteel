/*
 * FUN_004bd974 at 004bd974
 * undefined __register FUN_004bd974(int param_1)
 * Address ranges: 004bd974-004bd9f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 6 for TAppDAOQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcd20 slot 6 for
   TAppDAOQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004bd974(int param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_004ba3a8(*(int *)(param_1 + 0x34));
    FUN_00403094(*(int **)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_004b9654(*(int *)(param_1 + 0x38));
    FUN_00403094(*(int **)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_00403094(*(int **)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_00403094(*(int **)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

