/*
 * FUN_004b38b0 at 004b38b0
 * undefined __register FUN_004b38b0(undefined4 param_1, int * param_2, undefined4 * param_3, int * param_4)
 * Address ranges: 004b38b0-004b3981
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b38b0(undefined4 param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 *local_24;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_20 = 0;
  local_24 = (undefined4 *)0x0;
  local_1c = 0;
  puStack_2c = (undefined1 *)0x4b38d3;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_3);
  puStack_30 = &LAB_004b3982;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  iVar1 = (**(code **)(*local_c + 0x14))();
  if (0 < iVar1) {
    (**(code **)(*local_c + 0xc))(local_c,0,&local_1c);
    (**(code **)(*param_4 + 0x34))(param_4,local_1c);
  }
  iVar1 = (**(code **)(*local_c + 0x14))();
  if (1 < iVar1) {
    iVar1 = (**(code **)(*local_c + 0x14))();
    uVar2 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    if (0 < (int)uVar2) {
      local_14 = 1;
      local_18 = uVar2;
      do {
        (**(code **)(*local_c + 0xc))(local_c,local_14,&local_24);
        FUN_0040407c(&local_20,local_10,local_24);
        (**(code **)(*param_4 + 0x34))(param_4,local_20);
        local_14 = local_14 + 1;
        local_18 = local_18 - 1;
      } while (local_18 != 0);
    }
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004b3989;
  puStack_30 = (undefined1 *)0x4b3979;
  FUN_00403dd4((int *)&local_24,3);
  puStack_30 = (undefined1 *)0x4b3981;
  FUN_00403db0((int *)&local_10);
  return;
}

