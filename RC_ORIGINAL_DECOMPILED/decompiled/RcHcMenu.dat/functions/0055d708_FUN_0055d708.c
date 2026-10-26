/*
 * FUN_0055d708 at 0055d708
 * undefined __register FUN_0055d708(void)
 * Address ranges: 0055d708-0055d784
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55cf98 slot published:btnEasyDClick for TfrmDifficulty. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55cf98 slot
   published:btnEasyDClick for TfrmDifficulty. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055d708(void)

{
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x02') {
    *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0xc) + 8) = 0;
  }
  else if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x01') {
    *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x18) + 8) = 0;
  }
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_Red02");
  return;
}

