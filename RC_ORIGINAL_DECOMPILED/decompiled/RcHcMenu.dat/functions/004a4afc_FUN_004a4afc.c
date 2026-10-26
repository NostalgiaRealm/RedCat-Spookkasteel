/*
 * FUN_004a4afc at 004a4afc
 * undefined __register FUN_004a4afc(int param_1, int param_2, int * param_3)
 * Address ranges: 004a4afc-004a4b95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a4afc(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_1c = 0;
  puStack_24 = (undefined1 *)0x4a4b19;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_28 = &LAB_004a4b96;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_004a4324(local_8,0x44,local_c);
  iVar1 = (**(code **)(*local_10 + 0x14))();
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_18 = uVar2 + 1;
    local_14 = 0;
    do {
      (**(code **)(*local_10 + 0xc))(local_10,local_14,&local_1c);
      FUN_004a4324(local_8,0x44,local_1c);
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004a4b9d;
  puStack_28 = (undefined1 *)0x4a4b8d;
  FUN_00403db0(&local_1c);
  puStack_28 = (undefined1 *)0x4a4b95;
  FUN_00403db0(&local_c);
  return;
}

