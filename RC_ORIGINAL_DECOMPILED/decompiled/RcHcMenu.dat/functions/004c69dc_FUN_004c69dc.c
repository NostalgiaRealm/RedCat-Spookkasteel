/*
 * FUN_004c69dc at 004c69dc
 * undefined __register FUN_004c69dc(byte param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004c69dc-004c6a71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c69dc(byte param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined *local_10;
  undefined4 local_c;
  byte local_5;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = (undefined *)0x0;
  puStack_18 = &LAB_004c6a72;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_5 = param_1;
  if (*(int *)(&DAT_00574518 + (uint)param_1 * 4) == 0) {
    piVar1 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',param_3);
    *(int **)(&DAT_00574518 + (uint)local_5 * 4) = piVar1;
    FUN_00403f68((int *)&local_10,*(char **)(&DAT_005719fc + (uint)local_5 * 4));
    FUN_004218f8(*(undefined4 *)(&DAT_00574518 + (uint)local_5 * 4),DAT_005734dc,local_10);
  }
  local_c = *(undefined4 *)(&DAT_00574518 + (uint)local_5 * 4);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004c6a79;
  puStack_18 = (undefined1 *)0x4c6a71;
  FUN_00403db0((int *)&local_10);
  return;
}

