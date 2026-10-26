/*
 * FUN_0055e4d0 at 0055e4d0
 * undefined __register FUN_0055e4d0(void)
 * Address ranges: 0055e4d0-0055e529
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55da9c slot published:btnLevel3Click for TfrmQuickPlay. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55da9c slot
   published:btnLevel3Click for TfrmQuickPlay. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055e4d0(void)

{
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x01') {
    *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x18) + 0xc) = 2;
    FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
    FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RcMn40");
  }
  return;
}

