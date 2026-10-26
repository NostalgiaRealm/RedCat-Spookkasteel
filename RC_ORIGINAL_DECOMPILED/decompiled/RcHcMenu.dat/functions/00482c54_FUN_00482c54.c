/*
 * FUN_00482c54 at 00482c54
 * undefined __register FUN_00482c54(int * param_1)
 * Address ranges: 00482c54-00482cab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00482c54(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_00482cac;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (param_1[0x1c] != 0) {
    if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
      FUN_00406a48((undefined4 *)PTR_PTR_005721c0,(int *)&local_8);
      FUN_00466d84(local_8,(int)param_1);
    }
    else {
      puStack_10 = &stack0xfffffffc;
      FUN_00467184(param_1);
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00482cb3;
  puStack_14 = (undefined1 *)0x482cab;
  FUN_00403db0((int *)&local_8);
  return;
}

