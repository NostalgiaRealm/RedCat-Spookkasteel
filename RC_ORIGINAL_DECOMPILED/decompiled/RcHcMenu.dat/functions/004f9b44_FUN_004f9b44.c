/*
 * FUN_004f9b44 at 004f9b44
 * undefined __register FUN_004f9b44(int * param_1)
 * Address ranges: 004f9b44-004f9bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f9b44(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  uint *local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_18 = &LAB_004f9bd4;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_8 = param_1;
  FUN_00403db0((int *)&local_c);
  if (local_8[0x89] != 0) {
    local_10 = (int *)FUN_00494c5c((int *)local_8[0x89],(byte *)(local_8 + 0x82));
    if (local_10 != (int *)0x0) {
      cVar1 = (**(code **)(*local_10 + 0x4c))();
      if (cVar1 != '\0') {
        FUN_00496b88(local_10,(int *)&local_c);
      }
    }
  }
  FUN_00432744((int)local_8,local_c);
  FUN_004297c4(local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004f9bdb;
  puStack_18 = (undefined1 *)0x4f9bd3;
  FUN_00403db0((int *)&local_c);
  return;
}

