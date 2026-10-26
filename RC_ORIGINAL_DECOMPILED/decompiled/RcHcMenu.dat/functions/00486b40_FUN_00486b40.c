/*
 * FUN_00486b40 at 00486b40
 * undefined __register FUN_00486b40(int param_1)
 * Address ranges: 00486b40-00486b8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00486b40(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_00486b8c;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (*(char *)(param_1 + 0x1b2) == '\0') {
    FUN_00406a48((undefined4 *)PTR_PTR_00572204,(int *)&local_8);
    FUN_00466d84(local_8,param_1);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00486b93;
  puStack_14 = (undefined1 *)0x486b8b;
  FUN_00403db0((int *)&local_8);
  return;
}

