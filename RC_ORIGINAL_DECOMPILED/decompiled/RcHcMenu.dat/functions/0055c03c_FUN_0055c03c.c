/*
 * FUN_0055c03c at 0055c03c
 * undefined __register FUN_0055c03c(int param_1)
 * Address ranges: 0055c03c-0055c0ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55af50 slot published:btnReqCancelClick for TfrmOptions. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55af50 slot
   published:btnReqCancelClick for TfrmOptions. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055c03c(int param_1)

{
  FUN_0054ee94(param_1);
  *(undefined4 *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) =
       *(undefined4 *)(param_1 + 0x328);
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RcMn2");
  FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  FUN_0056b268(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10),
               *(undefined4 *)(param_1 + 0x330));
  FUN_0056bb4c(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10),
               *(undefined4 *)(param_1 + 0x334));
  FUN_0054feb0(*(int **)(*(int *)PTR_DAT_00572108 + 0x108),
               *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x18));
  return;
}

