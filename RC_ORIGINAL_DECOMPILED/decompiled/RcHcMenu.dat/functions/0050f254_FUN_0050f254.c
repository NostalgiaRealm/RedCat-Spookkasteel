/*
 * FUN_0050f254 at 0050f254
 * undefined __register FUN_0050f254(int param_1)
 * Address ranges: 0050f254-0050f2b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50eaf0 slot 0 for TOACheckBox2Interface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50eaf0 slot 0 for
   TOACheckBox2Interface. Original bytes unchanged; names and types still inferred. */

void FUN_0050f254(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x4c))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x50))();
      if (cVar1 == '\0') {
        piVar2 = (int *)FUN_00403224(*(int **)(param_1 + 0xc),(int)&LAB_004e9250);
        uVar3 = (**(code **)(*piVar2 + 0x6c))();
        piVar2 = (int *)FUN_00403224(*(int **)(param_1 + 8),(int)&PTR_FUN_0050eddc);
        (**(code **)(*piVar2 + 0xb8))(piVar2,uVar3);
      }
    }
  }
  return;
}

