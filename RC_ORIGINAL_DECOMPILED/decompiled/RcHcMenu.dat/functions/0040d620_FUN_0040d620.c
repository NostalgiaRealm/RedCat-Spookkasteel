/*
 * FUN_0040d620 at 0040d620
 * undefined __register FUN_0040d620(void)
 * Address ranges: 0040d620-0040d6e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040d620(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  puStack_14 = &LAB_0040d6e1;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00406a48((undefined4 *)PTR_PTR_0057216c,(int *)&local_8);
  DAT_00573600 = FUN_0040ceec((int *)&DAT_00408bdc,'\x01',local_8);
  FUN_00406a48((undefined4 *)PTR_PTR_005723a8,(int *)&local_c);
  DAT_00573604 = FUN_0040ceec((int *)&DAT_00409064,'\x01',local_c);
  *(undefined1 **)PTR_DAT_00572060 = &LAB_0040d16c;
  *(undefined1 **)PTR_DAT_0057220c = &LAB_0040d610;
  *(undefined **)PTR_DAT_00572138 = &DAT_00408ac4;
  *(undefined1 **)PTR_DAT_005721e0 = &LAB_0040d334;
  *(undefined1 **)PTR_DAT_0057221c = &LAB_0040d514;
  *(undefined1 **)PTR_DAT_005723f0 = &LAB_0040d26c;
  *(undefined1 **)PTR_DAT_00572040 = &LAB_0040d288;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0040d6e8;
  puStack_14 = (undefined1 *)0x40d6e0;
  FUN_00403dd4((int *)&local_c,2);
  return;
}

