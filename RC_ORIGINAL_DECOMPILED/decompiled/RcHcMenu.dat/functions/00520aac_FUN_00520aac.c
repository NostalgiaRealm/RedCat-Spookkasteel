/*
 * FUN_00520aac at 00520aac
 * uint __register FUN_00520aac(int param_1, int param_2)
 * Address ranges: 00520aac-00520bf4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00520aac(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint extraout_EDX;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  bool bVar8;
  int local_28 [2];
  int local_20;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  bVar7 = 0;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_0051e404(*(int **)(param_1 + 0x27c),0);
  if (local_c < *(int *)(iVar1 + 0x14)) {
    local_10 = 0;
  }
  else {
    uVar3 = FUN_0051e5f0(*(int *)(local_8 + 0x27c));
    uVar2 = uVar3 - 1;
    if (SBORROW4(uVar3,1)) {
      thunk_FUN_00402874(uVar3);
      uVar2 = extraout_EDX;
    }
    iVar1 = FUN_0051e404(*(int **)(local_8 + 0x27c),uVar2);
    if (local_c < *(int *)(iVar1 + 0x1c)) {
      local_10 = 0xffffffff;
      uVar2 = FUN_0051e5f0(*(int *)(local_8 + 0x27c));
      uVar3 = uVar2 - 1;
      if (SBORROW4(uVar2,1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      if (-1 < (int)uVar3) {
        local_18 = uVar3 + 1;
        local_14 = 0;
        do {
          iVar1 = FUN_0051e404(*(int **)(local_8 + 0x27c),local_14);
          piVar5 = (int *)(iVar1 + 0x14);
          piVar6 = local_28;
          for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar6 = *piVar5;
            piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
            piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
          }
          if ((local_28[0] <= local_c) && (local_c < local_20)) {
            local_10 = local_14;
            break;
          }
          local_14 = local_14 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
    }
    else {
      local_10 = FUN_0051e5f0(*(int *)(local_8 + 0x27c));
    }
  }
  uVar2 = FUN_0051e5f0(*(int *)(local_8 + 0x27c));
  if ((int)local_10 < (int)uVar2) {
    uVar2 = local_28[0] + local_20;
    if (SCARRY4(local_28[0],local_20)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    uVar3 = (int)uVar2 >> 1;
    if ((int)uVar3 < 0) {
      uVar3 = uVar3 + ((uVar2 & 1) != 0);
    }
    if ((int)uVar3 < local_c) {
      bVar8 = SCARRY4(local_10,1);
      local_10 = local_10 + 1;
      if (bVar8) {
        thunk_FUN_00402874(uVar3);
      }
    }
  }
  iVar1 = FUN_0051e2e4(*(int *)(local_8 + 0x27c));
  if (((int)local_10 < iVar1) && (local_10 != 0xffffffff)) {
    local_10 = FUN_0051e2e4(*(int *)(local_8 + 0x27c));
  }
  return local_10;
}

