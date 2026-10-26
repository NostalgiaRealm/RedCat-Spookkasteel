/*
 * FUN_0048070c at 0048070c
 * undefined __register FUN_0048070c(int param_1)
 * Address ranges: 0048070c-00480759
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048070c(int param_1)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_0048075a;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  bVar1 = FUN_00480bd4(param_1);
  if (bVar1) {
    FUN_00406a48((undefined4 *)PTR_PTR_0057256c,(int *)&local_8);
    FUN_00466d84(local_8,param_1);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00480761;
  puStack_14 = (undefined1 *)0x480759;
  FUN_00403db0((int *)&local_8);
  return;
}

