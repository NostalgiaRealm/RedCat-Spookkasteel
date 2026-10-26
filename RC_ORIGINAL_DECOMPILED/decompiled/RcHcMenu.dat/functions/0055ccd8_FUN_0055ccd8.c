/*
 * FUN_0055ccd8 at 0055ccd8
 * undefined __register FUN_0055ccd8(void)
 * Address ranges: 0055ccd8-0055cd7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated native virtual-method table 0x55c204 slot published:BtnNextClick for TfrmStartGame. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated native virtual-method table 0x55c204
   slot published:BtnNextClick for TfrmStartGame. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055ccd8(void)

{
  FUN_005536f8();
  if (*(char *)(*(int *)PTR_DAT_00572108 + 0x100) == '\x02') {
    *(undefined1 *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x14) = 0;
    FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
    FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RCMn32");
    FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  }
  else {
    FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
    FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RCMn43");
    FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  }
  FUN_005699f0(*(int **)PTR_DAT_00572108);
  return;
}

