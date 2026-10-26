/*
 * FUN_004e2d04 at 004e2d04
 * undefined __register FUN_004e2d04(int * param_1, int * param_2, uint * param_3)
 * Address ranges: 004e2d04-004e2eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e2d04(int *param_1,int *param_2,uint *param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStack_148;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  byte local_12c [256];
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined1 local_11;
  uint *local_10;
  int *local_c;
  int *local_8;
  
  puStack_134 = &stack0xfffffffc;
  local_28 = 0;
  local_2c = 0;
  puStack_138 = &LAB_004e2eb8;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar2 = FUN_00494858(param_2);
  if (iVar2 != local_8[8]) {
    FUN_00402fe0(*local_8,local_12c);
    FUN_00403fd4(&local_2c,local_12c);
    pcStack_148 = "aAppObj has wrong AppObjDesc";
    FUN_004040f0(&local_28,3);
    FUN_00403d94(local_28);
  }
  local_11 = 0;
  *local_10 = 0x80000000;
  local_18 = 0;
  iVar2 = FUN_0045da14((int)local_8);
  local_1c = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    local_1c = thunk_FUN_00402874(local_1c);
  }
  if ((int)local_18 <= (int)local_1c) {
    do {
      uVar3 = local_18 + local_1c;
      if (SCARRY4(local_18,local_1c)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      local_20 = (int)uVar3 >> 1;
      if ((int)local_20 < 0) {
        local_20 = local_20 + ((uVar3 & 1) != 0);
      }
      uVar1 = 8;
      piVar4 = (int *)FUN_004e25c4(local_8,local_20);
      local_24 = FUN_00494814(piVar4,local_c,local_8[7],uVar1);
      if (local_24 < 0) {
        uVar3 = local_20 + 1;
        if (SCARRY4(local_20,1)) {
          uVar3 = thunk_FUN_00402874(local_20 + 1);
        }
      }
      else {
        uVar3 = local_20 - 1;
        if (SBORROW4(local_20,1)) {
          uVar3 = thunk_FUN_00402874(uVar3);
        }
        local_1c = uVar3;
        uVar3 = local_18;
        if (local_24 == 0) {
          piVar4 = (int *)FUN_004e25c4(local_8,local_20);
          local_11 = FUN_00494528(piVar4,local_c);
          local_18 = local_20;
          uVar3 = local_18;
        }
      }
      local_18 = uVar3;
    } while ((int)local_18 <= (int)local_1c);
  }
  iVar2 = FUN_0045da14((int)local_8);
  if (iVar2 == 0) {
    *local_10 = 0x80000000;
  }
  else {
    iVar2 = FUN_0045da14((int)local_8);
    if ((int)local_18 < iVar2) {
      if ((int)local_18 < 0) {
        *local_10 = 0;
      }
      else {
        *local_10 = local_18;
      }
    }
    else {
      iVar2 = FUN_0045da14((int)local_8);
      uVar3 = iVar2 - 1;
      if (SBORROW4(iVar2,1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      *local_10 = uVar3;
    }
  }
  *in_FS_OFFSET = pcStack_148;
  FUN_00403dd4(&local_2c,2);
  return;
}

