/*
 * FUN_00468730 at 00468730
 * undefined __register FUN_00468730(int param_1, int param_2)
 * Address ranges: 00468730-0046879e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468730(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_0046879f;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (*(int *)(param_1 + 0xc) < 1) {
    FUN_00412384(*(undefined4 **)(param_1 + 4),param_2);
  }
  else {
    puStack_14 = &stack0xfffffffc;
    if (*(int *)(param_1 + 0xc) <= param_2) {
      puStack_14 = &stack0xfffffffc;
      FUN_00406a48((undefined4 *)PTR_PTR_005724ac,(int *)&local_8);
      FUN_00466d84(local_8,*(int *)(param_1 + 8));
    }
    iVar1 = FUN_00412384(*(undefined4 **)(param_1 + 4),0);
    *(int *)(iVar1 + 0x40) = param_2;
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004687a6;
  puStack_18 = (undefined1 *)0x46879e;
  FUN_00403db0((int *)&local_8);
  return;
}

