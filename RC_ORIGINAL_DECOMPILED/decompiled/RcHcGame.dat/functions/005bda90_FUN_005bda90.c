/*
 * FUN_005bda90 at 005bda90
 * undefined FUN_005bda90(void)
 * Address ranges: 005bda90-005bdc0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005bda90(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float local_c;
  float local_8;
  float *local_4;
  
  iVar5 = 0;
  local_4 = param_2;
  if (*(int *)(param_1 + 0xc) == 1) {
    iVar6 = 0;
    if (*(int *)(param_1 + 0x10) < 1) {
      return 0;
    }
    iVar3 = 0;
    do {
      iVar4 = FUN_005bda90(&local_c);
      if (iVar4 != 0) {
        iVar5 = iVar5 + 1;
        pfVar1 = (float *)(*(int *)(param_1 + 0x18) + iVar3);
        local_c = (local_c - local_8) / *pfVar1 + pfVar1[1];
        fVar2 = local_8 + pfVar1[1];
        local_8 = fVar2;
        if (local_c < fVar2) {
          local_8 = local_c;
          local_c = fVar2;
        }
        if (iVar5 == 1) {
          *local_4 = local_8;
          *param_3 = local_c;
        }
        else {
          fVar2 = local_8;
          if (*local_4 <= local_8) {
            fVar2 = *local_4;
          }
          *local_4 = fVar2;
          fVar2 = local_c;
          if (local_c < *param_3) {
            fVar2 = *param_3;
          }
          *param_3 = fVar2;
        }
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + 0x44;
    } while (iVar6 < *(int *)(param_1 + 0x10));
  }
  else {
    if (*(int *)(param_1 + 0xc) != 2) {
      return 0;
    }
    iVar6 = 0;
    if (*(int *)(param_1 + 0x10) < 1) {
      return 0;
    }
    do {
      iVar3 = FUN_005c58f0(&local_c);
      if (iVar3 != 0) {
        iVar5 = iVar5 + 1;
        if (iVar5 == 1) {
          *local_4 = local_8;
          *param_3 = local_c;
        }
        else {
          fVar2 = local_8;
          if (*local_4 <= local_8) {
            fVar2 = *local_4;
          }
          *local_4 = fVar2;
          fVar2 = local_c;
          if (local_c < *param_3) {
            fVar2 = *param_3;
          }
          *param_3 = fVar2;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x10));
  }
  if (iVar5 < 1) {
    return 0;
  }
  return 1;
}

