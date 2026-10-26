/*
 * FUN_00554ac0 at 00554ac0
 * undefined __register FUN_00554ac0(int param_1)
 * Address ranges: 00554ac0-00554b13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55476c slot published:btnReqCancelClick for TfrmReqMessage. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55476c slot
   published:btnReqCancelClick for TfrmReqMessage. Original bytes unchanged; names and types still
   inferred. */

void FUN_00554ac0(int param_1)

{
  int iVar1;
  
  FUN_0054ee94(param_1);
  iVar1 = FUN_00404030(*(int *)(param_1 + 0x310));
  if (0 < iVar1) {
    FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
    FUN_00569c6c(*(int *)PTR_DAT_00572108,*(undefined4 **)(param_1 + 0x310));
  }
  return;
}

