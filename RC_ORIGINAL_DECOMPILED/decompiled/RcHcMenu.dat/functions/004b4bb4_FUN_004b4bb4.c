/*
 * FUN_004b4bb4 at 004b4bb4
 * undefined __register FUN_004b4bb4(int * param_1, undefined4 param_2, int param_3)
 * Address ranges: 004b4bb4-004b4d67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b4bb4(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  int local_13c;
  byte local_138 [256];
  int local_38;
  byte local_34 [28];
  int local_18;
  uint local_14;
  int local_10;
  undefined1 *local_c;
  int *local_8;
  
  puStack_148 = &stack0xfffffffc;
  local_13c = 0;
  local_38 = 0;
  for (iVar6 = param_3; -1 < iVar6; iVar6 = iVar6 + -1) {
  }
  local_c = &stack0xfffffebc;
  puStack_14c = &LAB_004b4d68;
  uStack_150 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_150;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  puVar2 = &stack0xfffffebc;
  local_8 = param_1;
  if (param_1[7] == 0) {
    FUN_00402fe0(*param_1,local_138);
    FUN_00403fd4(&local_38,local_138);
    FUN_00404038(&local_38,(undefined4 *)".AddFields: AppObjDesc must be assigned");
    FUN_00403d94(local_38);
    puVar1 = puStack_148;
    puVar2 = local_c;
  }
  local_c = puVar2;
  puStack_148 = puVar1;
  if (-1 < local_10) {
    local_18 = local_10 + 1;
    local_14 = 0;
    do {
      if (((int)local_14 < 0) || (uVar4 = local_14, local_10 < (int)local_14)) {
        uVar4 = thunk_FUN_00402874(local_14);
      }
      if (*(int *)(local_c + uVar4 * 4) == 0) {
        FUN_00402fe0(*local_8,local_138);
        FUN_00403fd4(&local_13c,local_138);
        FUN_00404038(&local_13c,(undefined4 *)".AddFields: AppProp not assigned");
        FUN_00403d94(local_13c);
      }
      if (((int)local_14 < 0) || (uVar4 = local_14, local_10 < (int)local_14)) {
        uVar4 = thunk_FUN_00402874(local_14);
      }
      piVar5 = (int *)FUN_00495ec0(*(int *)(local_c + uVar4 * 4));
      iVar6 = FUN_00494858(piVar5);
      if (iVar6 == local_8[7]) {
        if (((int)local_14 < 0) || (uVar4 = local_14, local_10 < (int)local_14)) {
          uVar4 = thunk_FUN_00402874(local_14);
        }
        FUN_00495f2c(*(int **)(local_c + uVar4 * 4),local_34);
      }
      else {
        if (((int)local_14 < 0) || (uVar4 = local_14, local_10 < (int)local_14)) {
          uVar4 = thunk_FUN_00402874(local_14);
        }
        FUN_00495f50(*(int **)(local_c + uVar4 * 4),local_8[7],local_34);
      }
      cVar3 = FUN_0048ef44((int *)local_8[10],local_34);
      if (cVar3 == '\0') {
        (**(code **)(*(int *)local_8[10] + 0xc))((int *)local_8[10],local_34);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  *in_FS_OFFSET = uStack_150;
  puStack_148 = &LAB_004b4d6f;
  puStack_14c = (undefined1 *)0x4b4d5f;
  FUN_00403db0(&local_13c);
  puStack_14c = (undefined1 *)0x4b4d67;
  FUN_00403db0(&local_38);
  return;
}

