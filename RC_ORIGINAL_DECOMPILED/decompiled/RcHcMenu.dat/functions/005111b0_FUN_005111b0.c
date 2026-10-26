/*
 * FUN_005111b0 at 005111b0
 * undefined __register FUN_005111b0(int param_1)
 * Address ranges: 005111b0-00511230
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005111b0(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_14 = &LAB_00511231;
  puStack_18 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_18;
  local_8 = param_1;
  iVar1 = FUN_00403224(*(int **)(param_1 + 0x234),(int)&PTR_FUN_0050fc3c);
  if (*(char *)(iVar1 + 8) == '\0') {
    iVar1 = FUN_00403224(*(int **)(local_8 + 0x234),(int)&PTR_FUN_0050fc3c);
    uStack_20 = *(undefined4 *)(iVar1 + 0x10);
    FUN_004e7d50((uint *)(local_8 + 0x27c),(int *)&local_c);
    FUN_005018b8(local_8,local_c);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00511238;
  FUN_00403db0((int *)&local_c);
  return;
}

