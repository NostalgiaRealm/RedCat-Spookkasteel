/*
 * FUN_0041d268 at 0041d268
 * undefined __register FUN_0041d268(void)
 * Address ranges: 0041d268-0041d2b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041d268(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_0041d2b2;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_00406a48((undefined4 *)PTR_PTR_005720d0,(int *)&local_8);
  piVar1 = FUN_0040ceec((int *)&DAT_004106c0,'\x01',local_8);
  FUN_0040382c(piVar1);
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_0041d2b9;
  puStack_10 = (undefined1 *)0x41d2b1;
  FUN_00403db0((int *)&local_8);
  return;
}

