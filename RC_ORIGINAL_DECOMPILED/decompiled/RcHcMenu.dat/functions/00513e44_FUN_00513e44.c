/*
 * FUN_00513e44 at 00513e44
 * undefined __register FUN_00513e44(int param_1)
 * Address ranges: 00513e44-00513ec1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x512f34 slot 75 for TDaviCustomNumericCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x512f34 slot 75 for
   TDaviCustomNumericCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00513e44(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_14 = &LAB_00513ec2;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  if (*(char *)(*(int *)(param_1 + 0x234) + 8) == '\0') {
    FUN_00403224(*(int **)(param_1 + 0x234),(int)&PTR_FUN_00512d68);
    FUN_0040a970((int *)&local_c);
    FUN_005018b8(local_8,local_c);
  }
  else {
    puStack_10 = &stack0xfffffffc;
    FUN_005018b8(param_1,(uint *)0x0);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00513ec9;
  puStack_14 = (undefined1 *)0x513ec1;
  FUN_00403db0((int *)&local_c);
  return;
}

