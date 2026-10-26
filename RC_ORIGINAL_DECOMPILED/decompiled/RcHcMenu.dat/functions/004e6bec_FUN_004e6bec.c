/*
 * FUN_004e6bec at 004e6bec
 * undefined __register FUN_004e6bec(void)
 * Address ranges: 004e6bec-004e6c29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e6bec(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_004e6c2a;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_00406a48((undefined4 *)PTR_PTR_00572044,(int *)&local_8);
  FUN_004e6bd4(local_8);
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_004e6c31;
  puStack_10 = (undefined1 *)0x4e6c29;
  FUN_00403db0((int *)&local_8);
  return;
}

