/*
 * FUN_00504718 at 00504718
 * undefined __register FUN_00504718(int param_1)
 * Address ranges: 00504718-005047be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x503a74 slot 74 for TDaviCustomComboBox2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x503a74 slot 74 for
   TDaviCustomComboBox2. Original bytes unchanged; names and types still inferred. */

void FUN_00504718(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(*(int *)(param_1 + 0x234) + 8) == '\0') {
    piVar2 = (int *)FUN_0050423c(param_1);
    iVar3 = FUN_00403224(*(int **)(param_1 + 0x234),(int)&PTR_FUN_00503898);
    FUN_00502cb0(piVar2,*(int *)(iVar3 + 0x10));
    piVar2 = (int *)FUN_0050423c(param_1);
    iVar3 = FUN_00403224(*(int **)(param_1 + 0x234),(int)&PTR_FUN_00503898);
    FUN_00502d58(piVar2,*(int *)(iVar3 + 0x10));
  }
  else {
    piVar2 = (int *)FUN_0050423c(param_1);
    FUN_00502cb0(piVar2,-1);
    piVar2 = (int *)FUN_0050423c(param_1);
    FUN_00502d58(piVar2,-1);
  }
  iVar3 = FUN_0050423c(param_1);
  uVar1 = *(undefined4 *)(iVar3 + 0x204);
  piVar2 = (int *)FUN_0050423c(param_1);
  (**(code **)(*piVar2 + 0xc0))(piVar2,uVar1);
  return;
}

