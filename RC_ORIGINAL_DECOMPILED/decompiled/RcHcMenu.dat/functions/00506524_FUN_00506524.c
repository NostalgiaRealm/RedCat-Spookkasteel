/*
 * FUN_00506524 at 00506524
 * undefined __register FUN_00506524(int param_1)
 * Address ranges: 00506524-005065b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x50551c slot 0 for TOAComboBox2Interface. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x50551c slot 0 for
   TOAComboBox2Interface. Original bytes unchanged; names and types still inferred. */

void FUN_00506524(int param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_10;
  int *local_c;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = (uint *)0x0;
  puStack_18 = &LAB_005065b7;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_8 = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    local_c = (int *)FUN_00403224(*(int **)(param_1 + 8),(int)&PTR_FUN_00505868);
    cVar1 = (**(code **)(**(int **)(local_8 + 0xc) + 0x4c))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(int **)(local_8 + 0xc) + 0x50))();
      if (cVar1 == '\0') {
        FUN_004966b4(*(int **)(local_8 + 0xc),&local_10);
        FUN_00504324(local_c,local_10);
        goto LAB_005065a1;
      }
    }
    FUN_005041e4(local_c,-1);
  }
LAB_005065a1:
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005065be;
  puStack_18 = (undefined1 *)0x5065b6;
  FUN_00403db0((int *)&local_10);
  return;
}

