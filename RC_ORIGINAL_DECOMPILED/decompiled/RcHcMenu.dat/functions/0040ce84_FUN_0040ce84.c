/*
 * FUN_0040ce84 at 0040ce84
 * undefined __register FUN_0040ce84(void)
 * Address ranges: 0040ce84-0040cebd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040ce84(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 *local_8;
  
  puStack_c = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_10 = &LAB_0040ced4;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_0040ce80();
  FUN_00406a48((undefined4 *)PTR_PTR_005722e0,(int *)&local_8);
  piVar1 = FUN_0040ceec((int *)&DAT_00408b2c,'\x01',local_8);
  FUN_0040382c(piVar1);
  return;
}

