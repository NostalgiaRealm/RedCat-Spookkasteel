/*
 * FUN_0048f84c at 0048f84c
 * undefined __register FUN_0048f84c(int param_1)
 * Address ranges: 0048f84c-0048f9b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048f84c(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  uint extraout_ECX;
  short *extraout_EDX;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  iVar3 = FUN_00490bb8(param_1);
  uVar4 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (-1 < (int)uVar4) {
    local_30 = uVar4 + 1;
    local_c = 0;
    do {
      psVar5 = (short *)FUN_00492148(param_1,local_c);
      uVar4 = (int)*psVar5 - 2;
      if (SBORROW4((int)*psVar5,2)) {
        uVar4 = thunk_FUN_00402874(uVar4);
      }
      if (-1 < (int)uVar4) {
        local_34 = uVar4 + 1;
        local_10 = 0;
        do {
          uVar4 = local_10;
          if (9 < local_10) {
            uVar4 = thunk_FUN_00402874(local_10);
          }
          sVar1 = psVar5[uVar4 + 0xb];
          local_20 = FUN_00490bb8(param_1);
          local_14 = local_c + 1;
          if (SCARRY4(local_c,1)) {
            local_14 = thunk_FUN_00402874(local_14);
          }
          iVar3 = FUN_00490bb8(param_1);
          uVar4 = iVar3 - 1;
          if (SBORROW4(iVar3,1)) {
            uVar4 = thunk_FUN_00402874(uVar4);
          }
          if ((int)local_14 <= (int)uVar4) {
            local_38 = (uVar4 - local_14) + 1;
            do {
              psVar6 = (short *)FUN_00492148(param_1,local_14);
              bVar2 = false;
              uVar4 = (int)*psVar6 - 2;
              if (SBORROW4((int)*psVar6,2)) {
                uVar4 = thunk_FUN_00402874(uVar4);
              }
              if (-1 < (int)uVar4) {
                local_3c = uVar4 + 1;
                local_18 = 0;
                do {
                  uVar4 = local_18;
                  if (9 < local_18) {
                    uVar4 = thunk_FUN_00402874(local_18);
                  }
                  if (psVar6[uVar4 + 0xb] == sVar1) {
                    bVar2 = true;
                    break;
                  }
                  local_18 = local_18 + 1;
                  local_3c = local_3c + -1;
                } while (local_3c != 0);
              }
              if (!bVar2) {
                local_20 = local_14;
                break;
              }
              local_14 = local_14 + 1;
              local_38 = local_38 + -1;
            } while (local_38 != 0);
          }
          uVar4 = local_10;
          if (9 < local_10) {
            uVar4 = thunk_FUN_00402874(local_10);
          }
          local_20 = local_20 + 0x8000;
          psVar6 = psVar5;
          if (0xffff < local_20) {
            uVar4 = thunk_FUN_00402874(uVar4);
            local_20 = extraout_ECX;
            psVar6 = extraout_EDX;
          }
          psVar6[uVar4 + 0x15] = (short)local_20 + -0x8000;
          local_10 = local_10 + 1;
          local_34 = local_34 + -1;
        } while (local_34 != 0);
      }
      local_c = local_c + 1;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
  return;
}

