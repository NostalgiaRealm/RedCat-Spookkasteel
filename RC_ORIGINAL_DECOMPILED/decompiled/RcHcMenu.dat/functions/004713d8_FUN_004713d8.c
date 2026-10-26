/*
 * FUN_004713d8 at 004713d8
 * undefined __register FUN_004713d8(int * param_1)
 * Address ranges: 004713d8-00471445
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004713d8(int *param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_00471446;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  uVar1 = FUN_004714b4((int)param_1);
  if ((char)uVar1 != '\0') {
    if ((*(ushort *)(param_1 + 8) & 0x50) == 0) {
      FUN_00406a48((undefined4 *)PTR_PTR_005725e0,(int *)&local_8);
      FUN_00466d84(local_8,(int)param_1);
    }
    else {
      FUN_004713cc(param_1);
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0047144d;
  puStack_14 = (undefined1 *)0x471445;
  FUN_00403db0((int *)&local_8);
  return;
}

