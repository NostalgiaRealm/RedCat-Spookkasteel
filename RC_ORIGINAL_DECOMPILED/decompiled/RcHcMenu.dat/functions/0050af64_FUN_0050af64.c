/*
 * FUN_0050af64 at 0050af64
 * undefined __register FUN_0050af64(int param_1)
 * Address ranges: 0050af64-0050b04b;0050b053-0050b075
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x509cac slot 75 for TDaviCustomDateCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x509cac slot 75 for
   TDaviCustomDateCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_0050af64(int param_1)

{
  undefined1 uVar1;
  undefined1 *extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint *local_18;
  undefined4 *local_14;
  undefined4 uStack_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  uStack_10 = 0;
  local_14 = (undefined4 *)0x0;
  local_18 = (uint *)0x0;
  puStack_20 = &LAB_0050b076;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_8 = param_1;
  if (*(char *)(*(int *)(param_1 + 0x234) + 8) != '\0') {
    puStack_28 = (undefined1 *)0x50af98;
    puStack_1c = &stack0xfffffffc;
    FUN_005018b8(param_1,(uint *)0x0);
    *in_FS_OFFSET = uStack_24;
    puStack_1c = &LAB_0050b07d;
    puStack_20 = (undefined1 *)0x50b06d;
    FUN_00403dd4((int *)&local_18,2);
    puStack_20 = (undefined1 *)0x50b075;
    FUN_00403db0((int *)&local_c);
    return;
  }
  puStack_28 = (undefined1 *)0x50afad;
  FUN_00403e48((int *)&local_c,*(int *)PTR_DAT_00572208);
  uVar1 = *PTR_DAT_0057215c;
  puStack_2c = &LAB_0050b04c;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  if (*(char *)(local_8 + 0x278) != '\x10') {
    *PTR_DAT_0057215c = *(undefined1 *)(local_8 + 0x279);
  }
  puStack_28 = &stack0xfffffffc;
  uStack_10._3_1_ = uVar1;
  FUN_0050b5c4(local_8,(int *)&local_14);
  FUN_00403e04((int *)PTR_DAT_00572208,local_14);
  FUN_00403224(*(int **)(local_8 + 0x234),(int)&PTR_FUN_00509aec);
  FUN_0040bd00((int *)&local_18,extraout_EDX,extraout_ECX);
  FUN_005018b8(local_8,local_18);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = (undefined1 *)0x50b053;
  puStack_2c = (undefined1 *)0x50b041;
  FUN_00403e04((int *)PTR_DAT_00572208,local_c);
  *PTR_DAT_0057215c = uStack_10._3_1_;
  return;
}

