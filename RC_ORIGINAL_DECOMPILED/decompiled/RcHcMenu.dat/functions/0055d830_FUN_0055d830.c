/*
 * FUN_0055d830 at 0055d830
 * undefined __register FUN_0055d830(void)
 * Address ranges: 0055d830-0055d8ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55cf98 slot published:BtnHardDClick for TfrmDifficulty. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55cf98 slot
   published:BtnHardDClick for TfrmDifficulty. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055d830(void)

{
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x02') {
    *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0xc) + 8) = 2;
  }
  else if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x01') {
    *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x18) + 8) = 2;
  }
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_Red04");
  return;
}

