/*
 * FUN_00458a14 at 00458a14
 * undefined __register FUN_00458a14(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 00458a14-00458a9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00458a14(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_20;
  uint local_1c;
  int *local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_24 = (undefined1 *)0x458a2f;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_18 = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',param_3);
  if (-1 < local_c) {
    local_20 = local_c + 1;
    local_1c = 0;
    do {
      if (((int)local_1c < 0) || (uVar1 = local_1c, local_c < (int)local_1c)) {
        puStack_24 = (undefined1 *)0x458a55;
        uVar1 = thunk_FUN_00402874(local_1c);
      }
      puStack_24 = (undefined1 *)0x458a63;
      (**(code **)(*local_18 + 0x34))(local_18,*(undefined4 *)(local_8 + uVar1 * 4));
      local_1c = local_1c + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  puStack_28 = &LAB_00458aa0;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  local_14 = FUN_00458954(local_18,local_10,param_4);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00458aa7;
  puStack_28 = (undefined1 *)0x458a9f;
  FUN_00403094(local_18);
  return;
}

