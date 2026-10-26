/*
 * FUN_0055d79c at 0055d79c
 * undefined __register FUN_0055d79c(void)
 * Address ranges: 0055d79c-0055d818
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55cf98 slot published:BtnNormalDClick for TfrmDifficulty. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55cf98 slot
   published:BtnNormalDClick for TfrmDifficulty. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055d79c(void)

{
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x02') {
    *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0xc) + 8) = 1;
  }
  else if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x01') {
    *(undefined1 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x18) + 8) = 1;
  }
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_Red03");
  return;
}

