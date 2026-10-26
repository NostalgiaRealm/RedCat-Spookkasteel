/*
 * FUN_004b0ef8 at 004b0ef8
 * undefined __register FUN_004b0ef8(undefined4 param_1, undefined4 * param_2, undefined4 param_3, int * param_4)
 * Address ranges: 004b0ef8-004b0f59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b0ef8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined4 *)0x0;
  puStack_1c = (undefined1 *)0x4b0f15;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_20 = &LAB_004b0f5a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00409bd8(local_10,(int *)&local_14);
  FUN_0040407c(param_4,local_c,local_14);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004b0f61;
  puStack_20 = (undefined1 *)0x4b0f51;
  FUN_00403db0((int *)&local_14);
  puStack_20 = (undefined1 *)0x4b0f59;
  FUN_00403db0((int *)&local_c);
  return;
}

