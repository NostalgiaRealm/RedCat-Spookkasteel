/*
 * FUN_004eb46c at 004eb46c
 * undefined __register FUN_004eb46c(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 004eb46c-004eb617
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004eb46c(int *param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *extraout_ECX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_160;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  int local_144;
  int local_140;
  byte local_13c [256];
  int local_3c;
  int local_38;
  undefined1 local_34 [28];
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  puStack_14c = &stack0xfffffffc;
  local_140 = 0;
  local_144 = 0;
  local_38 = 0;
  local_3c = 0;
  puStack_150 = &LAB_004eb618;
  uStack_154 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_154;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0xc] == 0) {
    FUN_00402fe0(*param_1,local_13c);
    FUN_00403fd4(&local_3c,local_13c);
    pcStack_160 = "No dataset.";
    FUN_004040f0(&local_38,3);
    FUN_00403d94(local_38);
    param_3 = extraout_ECX;
    puVar1 = puStack_14c;
  }
  puStack_14c = puVar1;
  if (local_8[0xb] == 0) {
    piVar2 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',param_3);
    local_8[0xb] = (int)piVar2;
    (**(code **)(*(int *)local_8[0xb] + 4))();
    iVar3 = FUN_00471d88(local_8[0xc]);
    uVar4 = iVar3 - 1;
    if (SBORROW4(iVar3,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (-1 < (int)uVar4) {
      local_18 = uVar4 + 1;
      local_14 = 0;
      do {
        iVar3 = FUN_00468730(*(int *)(local_8[0xc] + 0x24),local_14);
        func_0x004cdc4c(*(undefined4 *)(iVar3 + 0x2c),local_34);
        (**(code **)(*(int *)local_8[0xb] + 0xc))((int *)local_8[0xb],local_34);
        local_14 = local_14 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  if (-1 < local_c) {
    iVar3 = FUN_0048ec24(local_8[0xb]);
    if (local_c < iVar3) goto LAB_004eb5dc;
  }
  FUN_00402fe0(*local_8,local_13c);
  FUN_00403fd4(&local_144,local_13c);
  FUN_004040f0(&local_140,3);
  FUN_00403d94(local_140);
LAB_004eb5dc:
  FUN_0048f02c((int *)local_8[0xb],local_c,local_10);
  *in_FS_OFFSET = pcStack_160;
  FUN_00403dd4(&local_144,2);
  FUN_00403dd4(&local_3c,2);
  return;
}

