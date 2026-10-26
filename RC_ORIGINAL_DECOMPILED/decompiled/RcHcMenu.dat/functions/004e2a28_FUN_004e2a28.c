/*
 * FUN_004e2a28 at 004e2a28
 * undefined __register FUN_004e2a28(int param_1, int param_2, undefined4 param_3, int param_4)
 * Address ranges: 004e2a28-004e2bec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e2a28(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int **extraout_ECX_01;
  int **extraout_ECX_02;
  int **extraout_ECX_03;
  int **ppiVar3;
  int iVar4;
  int extraout_EDX;
  int iVar5;
  int extraout_EDX_00;
  int extraout_EDX_01;
  bool bVar6;
  undefined1 uVar7;
  int *local_30 [2];
  int *local_28 [2];
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1 < param_2) {
    uVar2 = param_1 + param_2;
    local_c = param_2;
    local_8 = param_1;
    if (SCARRY4(param_1,param_2)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      param_3 = extraout_ECX;
    }
    local_1c = (int)uVar2 >> 1;
    if (local_1c < 0) {
      local_1c = local_1c + (uint)((uVar2 & 1) != 0);
    }
    iVar4 = param_4;
    FUN_004e2a28(local_8,local_1c,param_3,param_4);
    uVar2 = local_1c + 1;
    iVar5 = param_4;
    if (SCARRY4(local_1c,1)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      iVar4 = extraout_ECX_00;
    }
    FUN_004e2a28(uVar2,local_c,iVar4,iVar5);
    if (local_8 - local_1c == 0 || local_8 < local_1c) {
      local_20 = (local_8 - local_1c) + -1;
      local_10 = local_1c;
      do {
        FUN_004e251c(*(int **)(param_4 + -8),local_10,local_28);
        FUN_004e2548(*(int **)(param_4 + -4),local_10,local_28);
        local_10 = local_10 + -1;
        local_20 = local_20 + 1;
      } while (local_20 != 0);
    }
    uVar2 = local_1c + 1;
    if (SCARRY4(local_1c,1)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    if ((int)uVar2 <= local_c) {
      local_20 = (local_c - uVar2) + 1;
      local_14 = uVar2;
      do {
        uVar2 = FUN_004e251c(*(int **)(param_4 + -8),local_14,local_28);
        ppiVar3 = local_28;
        iVar4 = local_c + local_1c;
        if (SCARRY4(local_c,local_1c)) {
          uVar2 = thunk_FUN_00402874(uVar2);
          ppiVar3 = extraout_ECX_01;
          iVar4 = extraout_EDX;
        }
        iVar5 = iVar4 + 1;
        if (SCARRY4(iVar4,1)) {
          uVar2 = thunk_FUN_00402874(uVar2);
          ppiVar3 = extraout_ECX_02;
          iVar5 = extraout_EDX_00;
        }
        iVar4 = iVar5 - local_14;
        if (SBORROW4(iVar5,local_14)) {
          thunk_FUN_00402874(uVar2);
          ppiVar3 = extraout_ECX_03;
          iVar4 = extraout_EDX_01;
        }
        FUN_004e2548(*(int **)(param_4 + -4),iVar4,ppiVar3);
        local_14 = local_14 + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
    local_10 = local_8;
    local_14 = local_c;
    if (local_8 <= local_c) {
      local_20 = (local_c - local_8) + 1;
      local_18 = local_8;
      do {
        uVar7 = 8;
        FUN_004e251c(*(int **)(param_4 + -4),local_14,local_28);
        piVar1 = local_28[0];
        FUN_004e251c(*(int **)(param_4 + -4),local_10,local_30);
        iVar4 = FUN_00494814(local_30[0],piVar1,*(uint *)(*(int *)(param_4 + -8) + 0x1c),uVar7);
        if (iVar4 == -1) {
          FUN_004e251c(*(int **)(param_4 + -4),local_10,local_28);
          uVar2 = FUN_004e2548(*(int **)(param_4 + -8),local_18,local_28);
          bVar6 = SCARRY4(local_10,1);
          local_10 = local_10 + 1;
          if (bVar6) {
            thunk_FUN_00402874(uVar2);
          }
        }
        else {
          FUN_004e251c(*(int **)(param_4 + -4),local_14,local_28);
          uVar2 = FUN_004e2548(*(int **)(param_4 + -8),local_18,local_28);
          bVar6 = SBORROW4(local_14,1);
          local_14 = local_14 + -1;
          if (bVar6) {
            thunk_FUN_00402874(uVar2);
          }
        }
        local_18 = local_18 + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
  }
  return;
}

