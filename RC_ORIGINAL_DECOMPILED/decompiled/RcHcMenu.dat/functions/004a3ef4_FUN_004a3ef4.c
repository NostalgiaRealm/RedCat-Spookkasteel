/*
 * FUN_004a3ef4 at 004a3ef4
 * undefined __register FUN_004a3ef4(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 004a3ef4-004a3f74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a3ef4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  puStack_2c = (undefined1 *)0x4a3f11;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_30 = &LAB_004a3f75;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_24 = local_c;
  local_20 = 0xb;
  local_1c = local_10;
  local_18 = 0;
  puStack_2c = &stack0xfffffffc;
  FUN_0040a894((byte *)" %s = %d ",&local_24,1,&local_14);
  (**(code **)(**(int **)(local_8 + 4) + 0x34))(*(int **)(local_8 + 4),local_14);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004a3f7c;
  puStack_30 = (undefined1 *)0x4a3f6c;
  FUN_00403db0(&local_14);
  puStack_30 = (undefined1 *)0x4a3f74;
  FUN_00403db0(&local_c);
  return;
}

