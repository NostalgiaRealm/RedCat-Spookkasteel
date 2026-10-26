/*
 * FUN_00429a44 at 00429a44
 * undefined __register FUN_00429a44(int * param_1)
 * Address ranges: 00429a44-00429a82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429a44(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x7f) = 1;
  puStack_10 = &LAB_00429a83;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  local_8 = param_1;
  FUN_00435a24(param_1);
  *in_FS_OFFSET = uStack_14;
  *(undefined1 *)(local_8 + 0x7f) = 0;
  return;
}

