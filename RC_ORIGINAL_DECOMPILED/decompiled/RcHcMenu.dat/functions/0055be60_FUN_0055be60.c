/*
 * FUN_0055be60 at 0055be60
 * undefined __register FUN_0055be60(int param_1)
 * Address ranges: 0055be60-0055c02a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55af50 slot published:btnReqOkClick for TfrmOptions. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55af50 slot
   published:btnReqOkClick for TfrmOptions. Original bytes unchanged; names and types still
   inferred. */

void FUN_0055be60(int param_1)

{
  int *piVar1;
  char cVar2;
  
  FUN_0054eebc(param_1);
  cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x318) + 0x218) + 0xb8))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x318) + 0x21c) + 0xb8))();
    if (cVar2 == '\0') {
      *(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x24) = 3;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x24) = 2;
    }
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x32c) + 0x24) = 1;
  }
  cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x31c) + 0x218) + 0xb8))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x31c) + 0x21c) + 0xb8))();
    if (cVar2 == '\0') {
      *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x2c) = 2;
    }
    else {
      *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x2c) = 1;
    }
  }
  else {
    *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x2c) = 0;
  }
  piVar1 = *(int **)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0xc);
  (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x32c));
  FUN_0056b268(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10),
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 800) + 0x1fc) + 0x180));
  FUN_0056bb4c(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10),
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x324) + 0x1fc) + 0x180));
  FUN_0054feb0(*(int **)(*(int *)PTR_DAT_00572108 + 0x108),
               *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x18));
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RCMn1");
  FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  return;
}

