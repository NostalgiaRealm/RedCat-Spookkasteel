/*
 * FUN_004b3bc0 at 004b3bc0
 * undefined __register FUN_004b3bc0(int * param_1)
 * Address ranges: 004b3bc0-004b3e47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b3bc0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uStack_17c;
  undefined1 *puStack_178;
  undefined1 *puStack_174;
  byte local_170 [256];
  int local_70;
  undefined4 local_6c [7];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  byte local_34 [28];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_174 = &stack0xfffffffc;
  local_70 = 0;
  local_50 = 0;
  local_48 = 0;
  local_4c = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  puStack_178 = &LAB_004b3e48;
  uStack_17c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_17c;
  local_8 = param_1;
  FUN_004b427c(param_1);
  iVar1 = FUN_0048ec24(local_8[10]);
  if (iVar1 < 1) {
    iVar1 = FUN_004b5aec(local_8[0xc]);
    if (iVar1 < 1) {
      uVar2 = FUN_00491e30(local_8[7],extraout_EDX,extraout_ECX);
      (**(code **)(*(int *)local_8[10] + 8))((int *)local_8[10],uVar2);
    }
  }
  FUN_004b3fb0((int)local_8);
  iVar1 = FUN_0048ec24(local_8[10]);
  uVar3 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_14 = uVar3 + 1;
    local_c = 0;
    do {
      FUN_0048f02c((int *)local_8[10],local_c,(undefined4 *)local_34);
      iVar1 = FUN_00492440((int *)local_8[7],local_34);
      if ((*(byte *)(iVar1 + 0x18) & 0x40) == 0) {
        FUN_004b3b04((int)local_8,(undefined4 *)local_34,&local_3c);
        puVar7 = &DAT_004b3e5c;
        iVar8 = local_3c;
        FUN_0049145c((int *)local_8[7],local_34,&local_40);
        iVar1 = local_8[5];
        iVar6 = local_40;
        FUN_00491758(local_8[7],local_34,&local_44);
        iVar5 = local_44;
        FUN_004040f0(&local_38,5);
        iVar4 = *(int *)local_8[0x15];
        (**(code **)(iVar4 + 0x34))
                  ((int *)local_8[0x15],local_38,iVar4,iVar5,iVar1,iVar6,puVar7,iVar8);
      }
      local_c = local_c + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  iVar1 = FUN_004b5aec(local_8[0xc]);
  uVar3 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_14 = uVar3 + 1;
    local_c = 0;
    do {
      iVar1 = FUN_004b5aa4(local_8[0xc],local_c);
      uVar2 = *(undefined4 *)(iVar1 + 4);
      iVar1 = local_8[5];
      iVar4 = FUN_004b5aa4(local_8[0xc],local_c);
      FUN_00491758(local_8[7],(byte *)(iVar4 + 8),&local_4c);
      iVar5 = local_4c;
      FUN_004040f0(&local_48,3);
      iVar4 = *(int *)local_8[0x15];
      (**(code **)(iVar4 + 0x34))((int *)local_8[0x15],local_48,iVar4,iVar5,iVar1,uVar2);
      iVar1 = FUN_004b5aa4(local_8[0xc],local_c);
      iVar1 = FUN_0048ec24(*(int *)(iVar1 + 0x24));
      uVar3 = iVar1 - 1;
      if (SBORROW4(iVar1,1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      if (-1 < (int)uVar3) {
        local_18 = uVar3 + 1;
        local_10 = 0;
        do {
          iVar1 = FUN_004b5aa4(local_8[0xc],local_c);
          FUN_0048f02c(*(int **)(iVar1 + 0x24),local_10,local_6c);
          FUN_004b3b04((int)local_8,local_6c,&local_50);
          local_10 = local_10 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      local_c = local_c + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  iVar1 = (**(code **)(*(int *)local_8[0x15] + 0x14))();
  if (iVar1 < 1) {
    FUN_00402fe0(*local_8,local_170);
    FUN_00403fd4(&local_70,local_170);
    FUN_00404038(&local_70,(undefined4 *)".BuildSelectFields : No fields in the SELECT clause");
    FUN_00403d94(local_70);
  }
  *in_FS_OFFSET = uStack_17c;
  puStack_174 = &LAB_004b3e4f;
  puStack_178 = (undefined1 *)0x4b3e3a;
  FUN_00403db0(&local_70);
  puStack_178 = (undefined1 *)0x4b3e47;
  FUN_00403dd4(&local_50,7);
  return;
}

