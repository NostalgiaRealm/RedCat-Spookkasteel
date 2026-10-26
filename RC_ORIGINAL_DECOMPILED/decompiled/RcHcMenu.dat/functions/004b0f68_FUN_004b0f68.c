/*
 * FUN_004b0f68 at 004b0f68
 * undefined __register FUN_004b0f68(undefined4 param_1, undefined4 * param_2, undefined4 * param_3, int * param_4)
 * Address ranges: 004b0f68-004b0fbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b0f68(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  puStack_14 = (undefined1 *)0x4b0f7f;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_14 = (undefined1 *)0x4b0f87;
  FUN_004041e4((int)local_10);
  puStack_18 = &LAB_004b0fbe;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_0040407c(param_4,local_c,local_10);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004b0fc5;
  puStack_18 = (undefined1 *)0x4b0fbd;
  FUN_00403dd4((int *)&local_10,2);
  return;
}

