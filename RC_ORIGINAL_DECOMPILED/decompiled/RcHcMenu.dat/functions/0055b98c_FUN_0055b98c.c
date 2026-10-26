/*
 * FUN_0055b98c at 0055b98c
 * undefined __register FUN_0055b98c(int param_1)
 * Address ranges: 0055b98c-0055ba7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55af50 slot published:OnChangeVolumeEffect for TfrmOptions. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55af50 slot
   published:OnChangeVolumeEffect for TfrmOptions. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055b98c(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 800) + 0x204) <
      *(int *)(*(int *)(*(int *)(param_1 + 800) + 0x1fc) + 0x180)) {
    FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
    FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RcMn16");
  }
  else if (*(int *)(*(int *)(*(int *)(param_1 + 800) + 0x1fc) + 0x180) <
           *(int *)(*(int *)(param_1 + 800) + 0x204)) {
    FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
    FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RcMn15");
  }
  *(undefined4 *)(*(int *)(param_1 + 800) + 0x204) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 800) + 0x1fc) + 0x180);
  FUN_0056b268(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10),
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 800) + 0x1fc) + 0x180));
  return;
}

