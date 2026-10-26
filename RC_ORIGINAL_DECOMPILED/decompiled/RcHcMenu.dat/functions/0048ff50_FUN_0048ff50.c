/*
 * FUN_0048ff50 at 0048ff50
 * undefined __register FUN_0048ff50(int * param_1, undefined4 * param_2)
 * Address ranges: 0048ff50-004900ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048ff50(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  char *pcStack_13c;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  byte local_124 [256];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_20 = 0;
  local_24 = 0;
  puStack_12c = &LAB_004900ae;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[2] != 0) {
    FUN_00402fe0(*param_1,local_124);
    FUN_00403fd4(&local_24,local_124);
    pcStack_13c = "changes not allowed";
    FUN_004040f0(&local_20,3);
    FUN_00403d94(local_20);
    puVar1 = puStack_128;
  }
  puStack_128 = puVar1;
  uVar2 = local_c[2] - 1;
  if (SBORROW4(local_c[2],1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_1c = uVar2 + 1;
    local_10 = 0;
    do {
      local_18 = FUN_00412384(local_c,local_10);
      (**(code **)(local_18 + 0x14))(local_18,local_8);
      local_10 = local_10 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  iVar3 = FUN_004905c0((int)local_8);
  uVar2 = iVar3 - 1;
  uVar4 = extraout_ECX;
  uVar5 = extraout_EDX;
  if (SBORROW4(iVar3,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  if (-1 < (int)uVar2) {
    local_1c = uVar2 + 1;
    local_10 = 0;
    do {
      local_14 = (int *)FUN_00490590((int)local_8,local_10);
      *(undefined1 *)(local_14 + 1) = 1;
      local_10 = local_10 + 1;
      local_1c = local_1c + -1;
      uVar4 = extraout_ECX_01;
      uVar5 = extraout_EDX_01;
    } while (local_1c != 0);
  }
  FUN_0048fdc8((int)local_8,uVar5,uVar4);
  iVar3 = FUN_004905c0((int)local_8);
  uVar2 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_1c = uVar2 + 1;
    local_10 = 0;
    do {
      local_14 = (int *)FUN_00490590((int)local_8,local_10);
      (**(code **)(*local_14 + 0x18))();
      local_10 = local_10 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  FUN_004905e0((uint)local_8);
  *in_FS_OFFSET = pcStack_13c;
  FUN_00403dd4(&local_24,2);
  return;
}

