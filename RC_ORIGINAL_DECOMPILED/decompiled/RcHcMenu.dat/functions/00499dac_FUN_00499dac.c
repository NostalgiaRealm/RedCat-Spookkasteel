/*
 * FUN_00499dac at 00499dac
 * undefined __register FUN_00499dac(int * param_1, int * param_2, char param_3)
 * Address ranges: 00499dac-0049a0ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00499dac(int *param_1,int *param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_7b0;
  undefined1 *puStack_7ac;
  undefined1 *puStack_7a8;
  undefined4 *local_7a0;
  undefined4 *local_79c;
  undefined4 *local_798;
  int local_794 [12];
  uint local_764 [256];
  uint local_364;
  uint local_360;
  uint local_35c;
  undefined1 local_358 [772];
  ushort local_54;
  ushort local_52;
  ushort local_4e;
  undefined1 *local_4c;
  int local_48;
  char local_41;
  int local_40;
  int local_3c;
  char local_35;
  int *local_34;
  int *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  ushort local_1e;
  int local_1c;
  int local_c;
  
  puStack_7a8 = &stack0xfffffffc;
  local_7a0 = (undefined4 *)0x0;
  local_79c = (undefined4 *)0x0;
  local_798 = (undefined4 *)0x0;
  puStack_7ac = &LAB_0049a0cb;
  uStack_7b0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_7b0;
  local_35 = param_3;
  local_34 = param_2;
  local_30 = param_1;
  local_3c = (**(code **)(*param_2 + 4))(param_2,&local_2c,4);
  if (local_3c == 0) {
    FUN_004990a4(local_30,-1,extraout_ECX);
  }
  else {
    if (local_3c != 4) {
      FUN_00406a48((undefined4 *)PTR_PTR_005723ec,(int *)&local_798);
      piVar2 = FUN_0040ceec((int *)&DAT_0041a06c,'\x01',local_798);
      FUN_0040382c(piVar2);
    }
    local_41 = '\0';
    if (local_2c == 0xc) {
      FUN_00414804(local_34,&local_54,8);
      local_c = 0;
      local_1c = 0;
      local_1e = local_4e;
      local_24 = (uint)local_52;
      local_28 = (uint)local_54;
      local_41 = '\x01';
    }
    else if (local_2c == 0x28) {
      FUN_00414804(local_34,&local_28,0x24);
    }
    else {
      FUN_00406a48((undefined4 *)PTR_PTR_005723ec,(int *)&local_79c);
      piVar2 = FUN_0040ceec((int *)&DAT_0041a06c,'\x01',local_79c);
      FUN_0040382c(piVar2);
    }
    if (local_1c == 3) {
      FUN_00414804(local_34,&local_364,0xc);
      FUN_00498b18(local_364,local_360,local_35c,local_794);
    }
    else if (local_1e == 0x10) {
      FUN_004989fc(5,5,5,local_794);
    }
    else if (local_1e == 0x20) {
      FUN_004989fc(8,8,8,local_794);
    }
    else {
      FUN_004989fc(8,8,8,local_794);
    }
    local_40 = local_c;
    if ((local_c == 0) && (local_1e < 9)) {
      local_40 = 1 << ((byte)local_1e & 0x1f);
    }
    if (0x100 < local_40) {
      local_40 = 0x100;
    }
    FUN_00402cfc(local_764,0x400,0);
    if (local_41 == '\0') {
      FUN_00414804(local_34,local_764,local_40 << 2);
    }
    else {
      FUN_00414804(local_34,local_358,local_40 * 3);
      if (-1 < local_40 + -1) {
        local_48 = local_40;
        local_3c = 0;
        do {
          iVar1 = local_3c * 3;
          local_4c = local_358 + iVar1;
          uVar3 = FUN_00498ba4(local_358[iVar1 + 2],local_358[iVar1 + 1],*local_4c);
          local_764[local_3c] = uVar3;
          local_3c = local_3c + 1;
          local_48 = local_48 + -1;
        } while (local_48 != 0);
        local_48 = 0;
      }
    }
    FUN_00499160(local_30,local_28,(local_24 ^ (int)local_24 >> 0x1f) - ((int)local_24 >> 0x1f),
                 local_1c - 1U < 2,local_35,local_764,local_794,(undefined *)(uint)local_1e);
    if (local_1c == 0) {
      FUN_00499d1c();
    }
    else if (local_1c == 1) {
      FUN_00499cac();
    }
    else if (local_1c == 2) {
      FUN_00499c3c();
    }
    else if (local_1c == 3) {
      FUN_00499d1c();
    }
    else {
      FUN_00406a48((undefined4 *)PTR_PTR_005723ec,(int *)&local_7a0);
      piVar2 = FUN_0040ceec((int *)&DAT_0041a06c,'\x01',local_7a0);
      FUN_0040382c(piVar2);
    }
  }
  *in_FS_OFFSET = uStack_7b0;
  puStack_7a8 = &LAB_0049a0d2;
  puStack_7ac = (undefined1 *)0x49a0ca;
  FUN_00403dd4((int *)&local_7a0,3);
  return;
}

