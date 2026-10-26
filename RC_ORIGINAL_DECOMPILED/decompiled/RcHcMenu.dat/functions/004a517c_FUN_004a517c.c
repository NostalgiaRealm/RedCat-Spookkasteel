/*
 * FUN_004a517c at 004a517c
 * undefined __register FUN_004a517c(int * param_1, undefined4 * param_2)
 * Address ranges: 004a517c-004a51de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a517c(int *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_14 = (undefined1 *)0x4a5190;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_18 = &LAB_004a51fc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x4a51ad;
  puStack_14 = &stack0xfffffffc;
  local_10 = FUN_0045c5fc((int *)&PTR_FUN_004a4db4,'\x01',local_c);
  puStack_24 = &LAB_004a51df;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x18))(local_8,local_10);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004a51e6;
  puStack_24 = (undefined1 *)0x4a51de;
  FUN_00403094(local_10);
  return;
}

