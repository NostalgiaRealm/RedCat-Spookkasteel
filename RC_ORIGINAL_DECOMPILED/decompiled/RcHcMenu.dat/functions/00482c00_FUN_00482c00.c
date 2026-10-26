/*
 * FUN_00482c00 at 00482c00
 * undefined __register FUN_00482c00(int param_1)
 * Address ranges: 00482c00-00482c48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00482c00(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_00482c49;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (*(int *)(param_1 + 0x70) == 0) {
    FUN_00406a48((undefined4 *)PTR_PTR_005725c4,(int *)&local_8);
    FUN_00466d84(local_8,param_1);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00482c50;
  puStack_14 = (undefined1 *)0x482c48;
  FUN_00403db0((int *)&local_8);
  return;
}

