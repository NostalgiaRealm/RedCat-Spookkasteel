/*
 * FUN_00482cb8 at 00482cb8
 * undefined __register FUN_00482cb8(int param_1)
 * Address ranges: 00482cb8-00482d09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00482cb8(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_00482d0a;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if ((*(int *)(param_1 + 0x88) == 0) && (*(char *)(param_1 + 0x62) == '\0')) {
    FUN_00406a48((undefined4 *)PTR_PTR_00571ffc,(int *)&local_8);
    FUN_00466d84(local_8,param_1);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00482d11;
  puStack_14 = (undefined1 *)0x482d09;
  FUN_00403db0((int *)&local_8);
  return;
}

