/*
 * FUN_004cf8cc at 004cf8cc
 * undefined __register FUN_004cf8cc(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004cf8cc-004cf99b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cf8cc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_11c [256];
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_1c = 0;
  puStack_128 = &LAB_004cf99c;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_8 = param_1;
  if (param_1[4] == 0) {
    piVar1 = FUN_00459fa8(3,0,param_3);
    local_8[4] = (int)piVar1;
    iVar2 = FUN_004905c0(*(int *)(local_8[1] + 8));
    uVar3 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if (-1 < (int)uVar3) {
      local_18 = uVar3 + 1;
      local_10 = 0;
      do {
        local_14 = (int *)FUN_00490590(*(int *)(local_8[1] + 8),local_10);
        local_c = (**(code **)(*local_8 + 0x40))();
        FUN_00402fe0(*local_14,local_11c);
        FUN_00403fd4(&local_1c,local_11c);
        (**(code **)(*(int *)local_8[4] + 0x38))((int *)local_8[4],local_1c,local_c);
        local_10 = local_10 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_004cf9a3;
  puStack_128 = (undefined1 *)0x4cf99b;
  FUN_00403db0(&local_1c);
  return;
}

