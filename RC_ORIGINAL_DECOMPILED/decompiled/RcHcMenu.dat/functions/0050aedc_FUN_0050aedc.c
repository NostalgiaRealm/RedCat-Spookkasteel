/*
 * FUN_0050aedc at 0050aedc
 * undefined __register FUN_0050aedc(int param_1)
 * Address ranges: 0050aedc-0050af5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x509cac slot 74 for TDaviCustomDateCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x509cac slot 74 for
   TDaviCustomDateCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_0050aedc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  float10 in_ST0;
  double dVar3;
  double local_14;
  
  if (*(char *)(*(int *)(param_1 + 0x234) + 8) == '\0') {
    iVar2 = FUN_00403224(*(int **)(param_1 + 0x234),(int)&PTR_FUN_00509aec);
    local_14 = *(double *)(iVar2 + 0x10);
    if (local_14 == 0.0) {
      FUN_0040b0d8();
      local_14 = (double)in_ST0;
    }
    iVar2 = (int)((ulonglong)local_14 >> 0x20);
    piVar1 = (int *)FUN_0050a2d8(param_1);
    FUN_00509440(piVar1,extraout_EDX_00,extraout_ECX_00,local_14._0_4_,iVar2);
  }
  else {
    FUN_0040b0d8();
    dVar3 = (double)in_ST0;
    piVar1 = (int *)FUN_0050a2d8(param_1);
    FUN_00509440(piVar1,extraout_EDX,extraout_ECX,SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20));
  }
  return;
}

