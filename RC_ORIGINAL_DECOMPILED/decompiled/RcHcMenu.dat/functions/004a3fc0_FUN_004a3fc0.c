/*
 * FUN_004a3fc0 at 004a3fc0
 * undefined __register FUN_004a3fc0(int param_1, int param_2, char param_3)
 * Address ranges: 004a3fc0-004a406a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a3fc0(int param_1,int param_2,char param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined1 local_1c;
  int local_18;
  int local_14;
  char local_d;
  int local_c;
  int local_8;
  
  local_18 = 0;
  local_14 = 0;
  puStack_30 = (undefined1 *)0x4a3fe0;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_34 = &LAB_004a406b;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  if (local_d == '\0') {
    puStack_30 = &stack0xfffffffc;
    FUN_00403e48(&local_14,0x4a4090);
  }
  else {
    puStack_30 = &stack0xfffffffc;
    FUN_00403e48(&local_14,0x4a4080);
  }
  local_28 = local_c;
  local_24 = 0xb;
  local_20 = local_14;
  local_1c = 0xb;
  FUN_0040a894((byte *)" %s = %s ",&local_28,1,&local_18);
  (**(code **)(**(int **)(local_8 + 4) + 0x34))(*(int **)(local_8 + 4),local_18);
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_004a4072;
  puStack_34 = (undefined1 *)0x4a4062;
  FUN_00403dd4(&local_18,2);
  puStack_34 = (undefined1 *)0x4a406a;
  FUN_00403db0(&local_c);
  return;
}

