/*
 * FUN_004d7000 at 004d7000
 * undefined __register FUN_004d7000(int * param_1, int param_2)
 * Address ranges: 004d7000-004d70e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d7000(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  _union_2683 local_2c;
  int local_1c;
  int local_18;
  int local_14;
  char local_d;
  int local_c;
  int *local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_2c._0_4_ = 0;
  local_2c.decVal.Hi32 = 0;
  local_2c._8_4_ = 0;
  local_2c._12_4_ = 0;
  local_1c = 0;
  puStack_38 = &LAB_004d70ea;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(*param_1 + 4))(param_1,*(undefined4 *)(param_2 + 4),&local_1c);
  (**(code **)(*local_8 + 0x60))(local_8,local_1c);
  local_d = '\0';
  iVar1 = FUN_004d68f0((int)local_8);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_18 = uVar2 + 1;
    uVar3 = local_18 == 0;
    local_14 = 0;
    do {
      iVar1 = FUN_004d6728(local_8,local_14);
      FUN_00404140(*(uint **)(iVar1 + 4),*(uint **)(local_c + 4));
      if ((bool)uVar3) {
        local_d = '\x01';
        break;
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
      uVar3 = local_18 == 0;
    } while (!(bool)uVar3);
  }
  if (local_d == '\0') {
    (**(code **)(*(int *)local_8[8] + 0xc))((int *)local_8[8],local_c);
  }
  else {
    FUN_004d4e9c(local_c,(VARIANT *)&local_2c.n2);
    iVar1 = FUN_004d6728(local_8,local_14);
    FUN_004d4ebc(iVar1,(undefined4 *)&local_2c);
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004d70f1;
  puStack_38 = (undefined1 *)0x4d70e1;
  FUN_00405bcc((VARIANTARG *)&local_2c.n2);
  puStack_38 = (undefined1 *)0x4d70e9;
  FUN_00403db0(&local_1c);
  return;
}

