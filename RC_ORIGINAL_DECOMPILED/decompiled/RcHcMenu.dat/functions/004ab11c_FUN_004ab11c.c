/*
 * FUN_004ab11c at 004ab11c
 * undefined __register FUN_004ab11c(int * param_1, int * param_2, uint * param_3)
 * Address ranges: 004ab11c-004ab2cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ab11c(int *param_1,int *param_2,uint *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 extraout_EDX_02;
  int *piVar6;
  int *piVar7;
  uint *in_FS_OFFSET;
  byte bVar8;
  bool bVar9;
  uint uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  int local_34 [4];
  int local_24 [5];
  uint local_10;
  uint *local_c;
  int *local_8;
  
  bVar8 = 0;
  puStack_44 = &stack0xfffffffc;
  piVar6 = local_24;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *param_2;
    param_2 = param_2 + 1;
    piVar6 = piVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4b) = 1;
  puStack_48 = &LAB_004ab2cd;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_4c;
  uVar2 = local_24[3] - local_24[1];
  puVar1 = &stack0xfffffffc;
  local_c = param_3;
  local_8 = param_1;
  if (SBORROW4(local_24[3],local_24[1])) {
    uVar2 = thunk_FUN_00402874(uVar2);
    puVar1 = puStack_44;
  }
  puStack_44 = puVar1;
  piVar6 = local_34;
  piVar7 = (int *)(local_8[9] + 0x34);
  iVar4 = local_24[1] - *piVar7;
  if (SBORROW4(local_24[1],*piVar7)) {
    thunk_FUN_00402874(local_8[9]);
    iVar4 = extraout_EDX;
  }
  uVar3 = local_24[0] - *(int *)(local_8[9] + 0x30);
  if (SBORROW4(local_24[0],*(int *)(local_8[9] + 0x30))) {
    uVar3 = thunk_FUN_00402874(uVar3);
    iVar4 = extraout_EDX_00;
  }
  iVar5 = local_24[2] - local_24[0];
  if (SBORROW4(local_24[2],local_24[0])) {
    uVar3 = thunk_FUN_00402874(uVar3);
    iVar5 = extraout_ECX;
    iVar4 = extraout_EDX_01;
  }
  FUN_00411640(uVar3,iVar4,iVar5,piVar6,uVar2);
  piVar6 = local_34;
  piVar7 = local_24;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
    piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
  }
  uVar2 = FUN_00432744((int)local_8,local_c);
  bVar9 = SCARRY4(local_24[3],4);
  local_24[3] = local_24[3] + 4;
  if (bVar9) {
    thunk_FUN_00402874(uVar2);
  }
  uVar2 = *(int *)(local_8[0x4d] + 0x38) - 0x14;
  if (SBORROW4(*(int *)(local_8[0x4d] + 0x38),0x14)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  uVar3 = *(int *)(local_8[0x4d] + 0x3c) - 0x14;
  local_24[4] = uVar2;
  if (SBORROW4(*(int *)(local_8[0x4d] + 0x3c),0x14)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  local_10 = uVar3;
  if ((int)uVar3 < local_24[3]) {
    uVar2 = local_24[3] - uVar3;
    if (SBORROW4(local_24[3],uVar3)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    bVar9 = SBORROW4(local_24[1],uVar2);
    local_24[1] = local_24[1] - uVar2;
    if (bVar9) {
      thunk_FUN_00402874(uVar2);
    }
    uVar2 = local_24[3] - local_10;
    if (SBORROW4(local_24[3],local_10)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    bVar9 = SBORROW4(local_24[3],uVar2);
    local_24[3] = local_24[3] - uVar2;
    if (bVar9) {
      thunk_FUN_00402874(uVar2);
    }
  }
  if (local_24[4] < local_24[2]) {
    uVar2 = local_24[2] - local_24[4];
    if (SBORROW4(local_24[2],local_24[4])) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    bVar9 = SBORROW4(local_24[0],uVar2);
    local_24[0] = local_24[0] - uVar2;
    if (bVar9) {
      thunk_FUN_00402874(uVar2);
    }
    uVar2 = local_24[2] - local_24[4];
    if (SBORROW4(local_24[2],local_24[4])) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    bVar9 = SBORROW4(local_24[2],uVar2);
    local_24[2] = local_24[2] - uVar2;
    if (bVar9) {
      thunk_FUN_00402874(uVar2);
    }
  }
  if (local_24[0] < 0) {
    local_24[0] = 0;
  }
  if (local_24[3] < 0) {
    local_24[3] = 0;
  }
  uVar2 = local_24[2] - local_24[0];
  if (SBORROW4(local_24[2],local_24[0])) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  uVar3 = local_24[3] - local_24[1];
  if (SBORROW4(local_24[3],local_24[1])) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  (**(code **)(*local_8 + 0x7c))(local_8,local_24[0],local_24[1],uVar3,uVar2);
  FUN_00403270(local_8,CONCAT31((int3)((uint)extraout_EDX_02 >> 8),1),extraout_ECX_00);
  (**(code **)(*local_8 + 0x74))();
  *in_FS_OFFSET = uVar3;
  *(undefined1 *)(local_8 + 0x4b) = 0;
  return;
}

