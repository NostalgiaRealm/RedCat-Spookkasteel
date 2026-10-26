/*
 * FUN_0051123c at 0051123c
 * undefined __register FUN_0051123c(int param_1)
 * Address ranges: 0051123c-005112b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051123c(int param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_14 = &LAB_005112b5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  iVar1 = FUN_00403224(*(int **)(param_1 + 0x234),(int)&PTR_FUN_0050fc3c);
  if (*(char *)(iVar1 + 8) == '\0') {
    FUN_00403224(*(int **)(local_8 + 0x234),(int)&PTR_FUN_0050fc3c);
    FUN_0040a9a0((int *)&local_c);
    FUN_005018b8(local_8,local_c);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005112bc;
  puStack_14 = (undefined1 *)0x5112b4;
  FUN_00403db0((int *)&local_c);
  return;
}

