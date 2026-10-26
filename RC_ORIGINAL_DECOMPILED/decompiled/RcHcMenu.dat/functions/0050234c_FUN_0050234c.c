/*
 * FUN_0050234c at 0050234c
 * undefined __register FUN_0050234c(int * param_1)
 * Address ranges: 0050234c-005023a5;005023b7-005023b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050234c(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = &stack0xfffffffc;
  if (((*(byte *)(param_1 + 0x97) & 4) == 0) && ((*(byte *)(param_1 + 0x97) & 1) == 0)) {
    *(byte *)(param_1 + 0x97) = *(byte *)(param_1 + 0x97) | 1;
    puStack_10 = &LAB_005023a6;
    uStack_14 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_14;
    local_8 = param_1;
    (**(code **)(*param_1 + 0xf8))();
    *in_FS_OFFSET = uStack_14;
    *(byte *)(local_8 + 0x97) = *(byte *)(local_8 + 0x97) & 0xfe;
    return;
  }
  return;
}

