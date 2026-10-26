/*
 * FUN_0049145c at 0049145c
 * undefined __register FUN_0049145c(int * param_1, byte * param_2, int * param_3)
 * Address ranges: 0049145c-004916b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049145c(int *param_1,byte *param_2,int *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_154;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  int local_138 [3];
  byte local_12c [256];
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  undefined4 *local_1c;
  int local_18;
  uint local_14;
  int *local_10;
  byte *local_c;
  int *local_8;
  
  puStack_140 = &stack0xfffffffc;
  local_138[2] = 0;
  local_138[1] = 0;
  local_138[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_1c = (undefined4 *)0x0;
  puStack_144 = &LAB_004916b3;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (*param_2 == 0) {
    FUN_00402fe0(*param_1,local_12c);
    FUN_00403fd4(&local_2c,local_12c);
    pcStack_154 = ": PropRef can not be empty";
    FUN_004040f0(&local_28,3);
    FUN_00403d94(local_28);
    param_3 = extraout_ECX;
    puVar1 = puStack_140;
  }
  puStack_140 = puVar1;
  cVar2 = FUN_0048e148((int)local_c,local_8[0xd],param_3);
  if (cVar2 == '\0') {
    FUN_00402fe0(*local_8,local_12c);
    FUN_00403fd4(local_138 + 1,local_12c);
    FUN_0048e1ec((int)local_c,local_138);
    FUN_004040f0(local_138 + 2,4);
    FUN_00403d94(local_138[2]);
  }
  FUN_00403db0((int *)&local_1c);
  local_20 = local_8;
  uVar5 = *local_c - 2;
  if (SBORROW4((uint)*local_c,2)) {
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  if (-1 < (int)uVar5) {
    local_24 = uVar5 + 1;
    local_14 = 0;
    do {
      uVar5 = local_14;
      if (9 < local_14) {
        uVar5 = thunk_FUN_00402874(local_14);
      }
      piVar6 = (int *)FUN_004923e0((int)local_20,(int)*(short *)(local_c + uVar5 * 2 + 2));
      local_18 = FUN_00403224(piVar6,(int)&PTR_FUN_004740c8);
      piVar6 = (int *)FUN_00497394(local_18,extraout_EDX,extraout_ECX_00);
      local_20 = (int *)FUN_0049756c(piVar6,*(int *)(local_18 + 0x30));
      if (*(char *)(local_18 + 0x38) == '\0') {
        FUN_00404038((int *)&local_1c,*(undefined4 **)(local_18 + 0x34));
      }
      else {
        FUN_00403db0((int *)&local_1c);
      }
      local_14 = local_14 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  bVar3 = FUN_0048dff0(local_c);
  if (bVar3 == 1) {
    sVar4 = FUN_0048df50(local_c);
    iVar7 = FUN_00492148((int)local_20,(int)sVar4);
    if ((*(byte *)(iVar7 + 0x44) & 1) != 0) {
      sVar4 = FUN_0048df50(local_c);
      iVar7 = FUN_00492148((int)local_20,(int)sVar4);
      piVar6 = (int *)FUN_004923e0((int)local_20,(int)*(short *)(iVar7 + 0x16));
      local_18 = FUN_00403224(piVar6,(int)&PTR_FUN_004740c8);
      FUN_00403e48((int *)&local_1c,*(int *)(local_18 + 0x34));
    }
  }
  sVar4 = FUN_0048df50(local_c);
  iVar7 = FUN_00492148((int)local_20,(int)sVar4);
  FUN_0040407c(local_10,local_1c,*(undefined4 **)(*(int *)(iVar7 + 0x40) + 0x1c));
  *in_FS_OFFSET = pcStack_154;
  FUN_00403dd4(local_138,3);
  FUN_00403dd4(&local_2c,2);
  FUN_00403db0((int *)&local_1c);
  return;
}

