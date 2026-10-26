/*
 * FUN_005046bc at 005046bc
 * undefined __register FUN_005046bc(undefined4 param_1, uint * param_2, int * param_3)
 * Address ranges: 005046bc-0050470c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x503a74 slot 73 for TDaviCustomComboBox2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x503a74 slot 73 for
   TDaviCustomComboBox2. Original bytes unchanged; names and types still inferred. */

void FUN_005046bc(undefined4 param_1,uint *param_2,int *param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  uint *local_c;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x5046d3;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_18 = &LAB_0050470d;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  iVar1 = FUN_00403224(local_10,(int)&PTR_FUN_00503898);
  FUN_00503c58(iVar1,local_c);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00504714;
  puStack_18 = (undefined1 *)0x50470c;
  FUN_00403db0((int *)&local_c);
  return;
}

