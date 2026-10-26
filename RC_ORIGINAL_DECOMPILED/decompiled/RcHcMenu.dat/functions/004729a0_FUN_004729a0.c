/*
 * FUN_004729a0 at 004729a0
 * undefined __register FUN_004729a0(int * param_1)
 * Address ranges: 004729a0-004729fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004729a0(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_004729fe;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (2 < (byte)(*(char *)((int)param_1 + 0x8d) - 2U)) {
    FUN_00406a48((undefined4 *)PTR_PTR_005722d4,(int *)&local_8);
    FUN_00466d84(local_8,(int)param_1);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  (**(code **)(*param_1 + 0xac))(param_1,5,0);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00472a05;
  puStack_18 = (undefined1 *)0x4729fd;
  FUN_00403db0((int *)&local_8);
  return;
}

