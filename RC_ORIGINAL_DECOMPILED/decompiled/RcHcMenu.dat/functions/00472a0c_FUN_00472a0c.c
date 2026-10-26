/*
 * FUN_00472a0c at 00472a0c
 * undefined __register FUN_00472a0c(int * param_1, int param_2)
 * Address ranges: 00472a0c-00472b17;00472b4e-00472b7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00472a0c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  puStack_28 = &LAB_00472b7e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x472a38;
  local_8 = param_1;
  local_c = FUN_004062a0(param_1[0x14]);
  local_c = local_c + 1;
  if (param_2 != local_c) {
    if (param_2 < 1) {
      puStack_30 = (undefined1 *)0x472a70;
      FUN_00406460((int *)&local_14,(int)&DAT_00466400);
    }
    else {
      puStack_34 = (undefined1 *)0x472a5d;
      puStack_30 = (undefined1 *)param_2;
      FUN_00406454((int *)&local_14,(int)&DAT_00466400,1);
    }
    if (param_2 < local_c) {
      if (param_2 != 0) {
        puStack_30 = (undefined1 *)0x472a8c;
        FUN_00402944((undefined4 *)local_8[0x14],local_14,param_2 << 2);
      }
      if (param_2 <= local_c + -1) {
        iVar1 = ((local_c + -1) - param_2) + 1;
        local_10 = param_2;
        do {
          puStack_30 = (undefined1 *)0x472ab4;
          (**(code **)(*local_8 + 0x1ac))(local_8,local_8[0x14] + local_10 * 4);
          local_10 = local_10 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    else {
      if (local_c != 0) {
        puStack_30 = (undefined1 *)0x472ad9;
        FUN_00402944((undefined4 *)local_8[0x14],local_14,local_c << 2);
      }
      puStack_34 = &LAB_00472b18;
      uStack_38 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_38;
      puStack_30 = &stack0xfffffffc;
      for (local_10 = local_c; local_10 < param_2; local_10 = local_10 + 1) {
        uVar2 = (**(code **)(*local_8 + 0x1a8))();
        local_14[local_10] = uVar2;
      }
      *in_FS_OFFSET = uStack_38;
    }
    puStack_30 = (undefined1 *)0x472b62;
    FUN_0040649c(local_8 + 0x14,(int)local_14,(int)&DAT_00466400);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00472b85;
  puStack_28 = (undefined1 *)0x472b7d;
  FUN_00406460((int *)&local_14,(int)&DAT_00466400);
  return;
}

