/*
 * FUN_0055baa0 at 0055baa0
 * undefined __register FUN_0055baa0(int param_1)
 * Address ranges: 0055baa0-0055bbb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55af50 slot published:OnChangeVolumeMusic for TfrmOptions. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55af50 slot
   published:OnChangeVolumeMusic for TfrmOptions. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055baa0(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x324) + 0x204) <
      *(int *)(*(int *)(*(int *)(param_1 + 0x324) + 0x1fc) + 0x180)) {
    FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
    FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RcMn16");
  }
  else if (*(int *)(*(int *)(*(int *)(param_1 + 0x324) + 0x1fc) + 0x180) <
           *(int *)(*(int *)(param_1 + 0x324) + 0x204)) {
    FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
    FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RcMn15");
  }
  *(undefined4 *)(*(int *)(param_1 + 0x324) + 0x204) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x324) + 0x1fc) + 0x180);
  FUN_0056bb4c(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10),
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x324) + 0x1fc) + 0x180));
  FUN_0054feb0(*(int **)(*(int *)PTR_DAT_00572108 + 0x108),
               *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x18));
  return;
}

