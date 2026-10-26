/*
 * FUN_00466e30 at 00466e30
 * undefined __register FUN_00466e30(byte * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00466e30-00466e7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00466e30(byte *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_1c = &LAB_00466e7c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0040a894(param_1,param_2,param_3,(int *)&local_8);
  FUN_00466d84(local_8,param_4);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00466e83;
  puStack_1c = (undefined1 *)0x466e7b;
  FUN_00403db0((int *)&local_8);
  return;
}

