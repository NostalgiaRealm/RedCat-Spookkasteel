/*
 * FUN_004d69fc at 004d69fc
 * undefined __register FUN_004d69fc(int * param_1, int param_2)
 * Address ranges: 004d69fc-004d6c41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d69fc(int *param_1,int param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_15c;
  undefined1 *puStack_158;
  undefined1 *puStack_154;
  _union_2683 local_14c;
  _union_2683 local_13c;
  int local_12c;
  byte local_128 [256];
  int local_28;
  int local_24;
  int local_20;
  char local_19;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_154 = &stack0xfffffffc;
  local_14c._0_4_ = 0;
  local_14c.decVal.Hi32 = 0;
  local_14c._8_4_ = 0;
  local_14c._12_4_ = 0;
  local_13c._0_4_ = 0;
  local_13c.decVal.Hi32 = 0;
  local_13c._8_4_ = 0;
  local_13c._12_4_ = 0;
  local_12c = 0;
  local_28 = 0;
  puStack_158 = &LAB_004d6c42;
  uStack_15c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_15c;
  puVar2 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == 0) {
    FUN_00402fe0(*param_1,local_128);
    FUN_00403fd4(&local_28,local_128);
    FUN_00404038(&local_28,(undefined4 *)".SQLAddFromQueryBuilder: QueryNuilder is nil");
    FUN_00403d94(local_28);
    puVar2 = puStack_154;
  }
  puStack_154 = puVar2;
  (**(code **)(*local_8 + 100))();
  iVar3 = (**(code **)(**(int **)(local_c + 0x40) + 0x14))();
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_20 = uVar4 + 1;
    local_10 = 0;
    do {
      (**(code **)(**(int **)(local_c + 0x40) + 0xc))(*(int **)(local_c + 0x40),local_10,&local_12c)
      ;
      (**(code **)(*local_8 + 0x60))(local_8,local_12c);
      local_10 = local_10 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  iVar3 = FUN_0041300c(*(int *)(local_c + 0x34));
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_20 = uVar4 + 1;
    local_10 = 0;
    do {
      local_19 = '\0';
      iVar3 = FUN_004d68f0((int)local_8);
      uVar4 = iVar3 - 1;
      if (SBORROW4(iVar3,1)) {
        uVar4 = thunk_FUN_00402874(uVar4);
      }
      if (-1 < (int)uVar4) {
        local_24 = uVar4 + 1;
        uVar5 = local_24 == 0;
        local_14 = 0;
        do {
          iVar3 = FUN_004d6728(local_8,local_14);
          puVar1 = *(uint **)(iVar3 + 4);
          iVar3 = FUN_0046f0d0(*(int *)(local_c + 0x34),local_10);
          FUN_00404140(puVar1,*(uint **)(iVar3 + 0x2c));
          if ((bool)uVar5) {
            local_19 = '\x01';
            break;
          }
          local_14 = local_14 + 1;
          local_24 = local_24 + -1;
          uVar5 = local_24 == 0;
        } while (!(bool)uVar5);
      }
      if (local_19 == '\0') {
        iVar3 = FUN_0046f0d0(*(int *)(local_c + 0x34),local_10);
        local_18 = FUN_004d4de4((int *)&PTR_FUN_004ccb54,'\x01',*(undefined4 **)(iVar3 + 0x2c));
        iVar3 = FUN_0046f0d0(*(int *)(local_c + 0x34),local_10);
        FUN_00470b20(iVar3,(VARIANT *)&local_14c.n2);
        FUN_004d4ebc(local_18,(undefined4 *)&local_14c);
        (**(code **)(*(int *)local_8[8] + 0xc))((int *)local_8[8],local_18);
      }
      else {
        iVar3 = FUN_0046f0d0(*(int *)(local_c + 0x34),local_10);
        FUN_00470b20(iVar3,(VARIANT *)&local_13c.n2);
        iVar3 = FUN_004d6728(local_8,local_14);
        FUN_004d4ebc(iVar3,(undefined4 *)&local_13c);
      }
      local_10 = local_10 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  *in_FS_OFFSET = uStack_15c;
  puStack_154 = &LAB_004d6c49;
  puStack_158 = (undefined1 *)0x4d6c2e;
  FUN_00404878((VARIANTARG *)&local_14c.n2,&DAT_00401108,2);
  puStack_158 = (undefined1 *)0x4d6c39;
  FUN_00403db0(&local_12c);
  puStack_158 = (undefined1 *)0x4d6c41;
  FUN_00403db0(&local_28);
  return;
}

