/*
 * FUN_0055e53c at 0055e53c
 * undefined __register FUN_0055e53c(void)
 * Address ranges: 0055e53c-0055e595
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55da9c slot published:btnLevel4Click for TfrmQuickPlay. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55da9c slot
   published:btnLevel4Click for TfrmQuickPlay. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055e53c(void)

{
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x01') {
    *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x18) + 0xc) = 3;
    FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
    FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RcMn41");
  }
  return;
}

