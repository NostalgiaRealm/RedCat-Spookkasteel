/*
 * FUN_00523ae0 at 00523ae0
 * undefined __register FUN_00523ae0(int * param_1, int * param_2)
 * Address ranges: 00523ae0-00523cfc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00523ae0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  uint uVar6;
  uint extraout_EDX_00;
  
  iVar5 = *param_2;
  uVar6 = param_2[1];
  if ((int)uVar6 < param_1[0x84]) {
    FUN_00523d7c(param_1,uVar6);
  }
  else {
    iVar1 = FUN_005237e8(param_1);
    uVar2 = iVar1 + param_1[0x84];
    if (SCARRY4(iVar1,param_1[0x84])) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    uVar3 = uVar2 - 1;
    if (SBORROW4(uVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if ((int)uVar3 < (int)uVar6) {
      uVar2 = FUN_005237e8(param_1);
      iVar5 = uVar6 - uVar2;
      if (SBORROW4(uVar6,uVar2)) {
        uVar2 = thunk_FUN_00402874(uVar2);
        iVar5 = extraout_EDX;
      }
      uVar6 = iVar5 + 1;
      if (SCARRY4(iVar5,1)) {
        thunk_FUN_00402874(uVar2);
        uVar6 = extraout_EDX_00;
      }
      FUN_00523d7c(param_1,uVar6);
    }
    else {
      iVar1 = FUN_0052361c(param_1);
      if (*(char *)(iVar1 + 0x238) == '\0') {
        if (*(int *)(iVar5 + 0x14) < 0) {
          while ((*(int *)(iVar5 + 0x14) < 0 &&
                 (iVar1 = FUN_0052361c(param_1), 0 < *(int *)(*(int *)(iVar1 + 0x27c) + 0x20c)))) {
            iVar1 = FUN_0052361c(param_1);
            iVar1 = *(int *)(*(int *)(iVar1 + 0x27c) + 0x20c);
            uVar6 = iVar1 - 1;
            if (SBORROW4(iVar1,1)) {
              uVar6 = thunk_FUN_00402874(uVar6);
            }
            iVar1 = FUN_0052361c(param_1);
            FUN_0051e704(*(int **)(iVar1 + 0x27c),uVar6);
            iVar1 = FUN_0052361c(param_1);
            FUN_0051e078(*(int **)(iVar1 + 0x27c));
          }
        }
        else {
          iVar1 = FUN_00432178(param_1);
          if ((iVar1 < *(int *)(iVar5 + 0x1c)) && (0 < *(int *)(iVar5 + 0x14))) {
            do {
              iVar1 = FUN_00432178(param_1);
              if (*(int *)(iVar5 + 0x1c) <= iVar1) {
                return;
              }
              if (*(int *)(iVar5 + 0x14) < 1) {
                return;
              }
              iVar1 = FUN_0052361c(param_1);
              iVar1 = *(int *)(*(int *)(iVar1 + 0x27c) + 0x20c);
              iVar4 = FUN_0052361c(param_1);
              if (*(int *)(*(int *)(iVar4 + 0x27c) + 0x210) <= iVar1) {
                return;
              }
              iVar1 = FUN_0052361c(param_1);
              iVar1 = *(int *)(*(int *)(iVar1 + 0x27c) + 0x20c);
              uVar6 = iVar1 + 1;
              if (SCARRY4(iVar1,1)) {
                uVar6 = thunk_FUN_00402874(uVar6);
              }
              iVar1 = FUN_0052361c(param_1);
              FUN_0051e704(*(int **)(iVar1 + 0x27c),uVar6);
              iVar1 = FUN_0052361c(param_1);
              FUN_0051e078(*(int **)(iVar1 + 0x27c));
            } while (*(int *)(iVar5 + 0x14) != -1);
            iVar5 = FUN_0052361c(param_1);
            iVar5 = *(int *)(*(int *)(iVar5 + 0x27c) + 0x20c);
            uVar6 = iVar5 - 1;
            if (SBORROW4(iVar5,1)) {
              uVar6 = thunk_FUN_00402874(uVar6);
            }
            iVar5 = FUN_0052361c(param_1);
            FUN_0051e704(*(int **)(iVar5 + 0x27c),uVar6);
            iVar5 = FUN_0052361c(param_1);
            FUN_0051e078(*(int **)(iVar5 + 0x27c));
          }
        }
      }
    }
  }
  return;
}

