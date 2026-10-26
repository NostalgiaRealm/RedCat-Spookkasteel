/*
 * FUN_0050f2b8 at 0050f2b8
 * undefined __register FUN_0050f2b8(int param_1)
 * Address ranges: 0050f2b8-0050f2fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50eaf0 slot 1 for TOACheckBox2Interface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50eaf0 slot 1 for
   TOACheckBox2Interface. Original bytes unchanged; names and types still inferred. */

void FUN_0050f2b8(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    piVar2 = (int *)FUN_00403224(*(int **)(param_1 + 8),(int)&PTR_FUN_0050eddc);
    uVar1 = (**(code **)(*piVar2 + 0xb4))();
    piVar2 = (int *)FUN_00403224(*(int **)(param_1 + 0xc),(int)&LAB_004e9250);
    FUN_004e95b8(piVar2,uVar1);
  }
  return;
}

