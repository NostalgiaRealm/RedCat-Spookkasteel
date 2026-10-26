/*
 * FUN_00491758 at 00491758
 * undefined __register FUN_00491758(undefined4 param_1, byte * param_2, int * param_3)
 * Address ranges: 00491758-004917ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00491758(undefined4 param_1,byte *param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_14;
  int *local_10;
  byte *local_c;
  undefined4 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  puStack_20 = &LAB_004917ac;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_0048d41c(param_2,(int *)&local_14);
  FUN_0040407c(local_10,(undefined4 *)&DAT_004917c0,local_14);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004917b3;
  puStack_20 = (undefined1 *)0x4917ab;
  FUN_00403db0((int *)&local_14);
  return;
}

