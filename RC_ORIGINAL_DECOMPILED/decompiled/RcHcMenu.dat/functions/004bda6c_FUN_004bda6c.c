/*
 * FUN_004bda6c at 004bda6c
 * undefined __register FUN_004bda6c(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004bda6c-004bdbba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bda6c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_154;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  LPCWSTR local_13c;
  int local_138;
  byte local_134 [256];
  int local_34;
  int local_30;
  undefined1 local_2c [28];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_140 = &stack0xfffffffc;
  local_138 = 0;
  local_13c = (LPCWSTR)0x0;
  local_30 = 0;
  local_34 = 0;
  puStack_144 = &LAB_004bdbbb;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[10] != 0) {
    FUN_00402fe0(*param_1,local_134);
    FUN_00403fd4(&local_34,local_134);
    pcStack_154 = "PropMapping already created";
    FUN_004040f0(&local_30,3);
    FUN_00403d94(local_30);
    param_3 = extraout_ECX;
    puVar1 = puStack_140;
  }
  puStack_140 = puVar1;
  piVar2 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',param_3);
  local_8[10] = (int)piVar2;
  (**(code **)(*(int *)local_8[10] + 4))();
  iVar3 = FUN_004bf310((int)local_8);
  iVar3 = FUN_0045ba40(iVar3);
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_10 = uVar4 + 1;
    local_c = 0;
    do {
      puVar5 = (undefined4 *)FUN_004bf310((int)local_8);
      piVar2 = (int *)(**(code **)*puVar5)(puVar5,local_c);
      iVar3 = FUN_00403224(piVar2,(int)&PTR_FUN_004b6ae0);
      FUN_004bad94(iVar3,&local_13c);
      FUN_00403ff8(&local_138,local_13c);
      func_0x004cdc4c(local_138,local_2c);
      (**(code **)(*(int *)local_8[10] + 0xc))((int *)local_8[10],local_2c);
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *in_FS_OFFSET = pcStack_154;
  FUN_00404474(&local_13c);
  FUN_00403db0(&local_138);
  FUN_00403dd4(&local_34,2);
  return;
}

