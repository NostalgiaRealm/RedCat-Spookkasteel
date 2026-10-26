/*
 * FUN_0052f9c8 at 0052f9c8
 * undefined __register FUN_0052f9c8(int * param_1, int param_2)
 * Address ranges: 0052f9c8-0052fc48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052f9c8(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  char *pcStack_160;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  int local_140 [7];
  int local_124;
  int local_120 [3];
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  bVar5 = 0;
  puStack_14c = &stack0xfffffffc;
  local_120[0] = 0;
  local_124 = 0;
  local_120[2] = 0;
  local_120[1] = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_150 = &LAB_0052fc49;
  uStack_154 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_154;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0xb2] != param_2) {
    puVar1 = &stack0xfffffffc;
    if ((param_2 != 0) &&
       (((*(byte *)(param_1 + 0x97) & 4) != 0 ||
        (puVar1 = &stack0xfffffffc, (*(byte *)(param_1 + 0x97) & 1) != 0)))) {
      FUN_00402fe0(*param_1,local_114);
      FUN_00403fd4(&local_14,local_114);
      pcStack_160 = "Combo is allready activated.";
      FUN_004040f0(&local_10,3);
      FUN_00403d94(local_10);
      puVar1 = puStack_14c;
    }
    puStack_14c = puVar1;
    local_8[0xb2] = local_c;
    puVar1 = puStack_14c;
  }
  puStack_14c = puVar1;
  if (local_8[0xb2] != 0) {
    if (local_8[0xb7] == 0) {
      piVar2 = FUN_004b5b0c((int *)&DAT_004b28a0,'\x01',5,local_8[0xb2],'\x01');
      local_8[0xb7] = (int)piVar2;
    }
    else {
      iVar3 = FUN_004b5bd8((int *)local_8[0xb7]);
      if (iVar3 != local_8[0xb2]) {
        FUN_00402fe0(*local_8,local_114);
        FUN_00403fd4(local_120 + 1,local_114);
        FUN_004040f0(local_120 + 2,3);
        FUN_00403d94(local_120[2]);
      }
    }
    if (local_8[0xba] == 0) {
      iVar3 = FUN_0049278c((int *)local_8[0xb2]);
      iVar3 = FUN_0049710c(iVar3,(undefined4 *)"ComboSort");
      local_8[0xba] = iVar3;
    }
    else if (*(int *)(local_8[0xba] + 4) != local_8[0xb2]) {
      FUN_00402fe0(*local_8,local_114);
      FUN_00403fd4(&local_124,local_114);
      pcStack_160 = "AppObjDesc differs from sortorders AppObjDesc.";
      FUN_004040f0(local_120,3);
      FUN_00403d94(local_120[0]);
    }
  }
  if (local_8[0xba] != 0) {
    FUN_0048f02c(*(int **)(local_8[0xba] + 0x10),0,local_140);
    piVar2 = local_140;
    piVar4 = local_8 + 0x9e;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    }
  }
  (**(code **)(*local_8 + 300))();
  *in_FS_OFFSET = pcStack_160;
  FUN_00403dd4(&local_124,4);
  FUN_00403dd4(&local_14,2);
  return;
}

