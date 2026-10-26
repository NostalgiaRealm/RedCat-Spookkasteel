/*
 * FUN_005249c4 at 005249c4
 * undefined __register FUN_005249c4(int * param_1)
 * Address ranges: 005249c4-00524d18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005249c4(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  HWND pHVar5;
  uint uVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar7;
  int iVar8;
  BOOL BVar9;
  int local_14;
  int local_10;
  int local_c;
  
  bVar2 = FUN_00438c84((int)param_1);
  if (bVar2) {
    iVar3 = FUN_0052361c(param_1);
    if (*(int *)(iVar3 + 0x288) == 0) {
      iVar3 = FUN_0052361c(param_1);
      if (*(char *)(iVar3 + 0x270) == '\0') {
        BVar9 = -1;
        iVar8 = 0;
        iVar7 = 0;
        iVar3 = 0;
        pHVar5 = (HWND)FUN_00438988(param_1);
        SetScrollRange(pHVar5,iVar3,iVar7,iVar8,BVar9);
        BVar9 = -1;
        iVar8 = 0;
        iVar7 = 0;
        iVar3 = 1;
        pHVar5 = (HWND)FUN_00438988(param_1);
        SetScrollRange(pHVar5,iVar3,iVar7,iVar8,BVar9);
        local_c = 1;
        do {
          iVar3 = FUN_0052361c(param_1);
          iVar3 = FUN_0051e39c(*(int *)(iVar3 + 0x27c));
          iVar7 = FUN_00432178(param_1);
          if (iVar7 < iVar3) {
            iVar3 = FUN_0052361c(param_1);
            uVar4 = FUN_0051e5f0(*(int *)(iVar3 + 0x27c));
            uVar6 = uVar4 - 1;
            if (SBORROW4(uVar4,1)) {
              uVar6 = thunk_FUN_00402874(uVar6);
            }
            iVar3 = FUN_0052361c(param_1);
            iVar3 = FUN_0051e404(*(int **)(iVar3 + 0x27c),uVar6);
            local_10 = *(int *)(iVar3 + 0x1c);
            iVar3 = FUN_0052361c(param_1);
            local_14 = *(int *)(*(int *)(iVar3 + 0x27c) + 0x20c);
            while( true ) {
              iVar3 = FUN_00432178(param_1);
              if (local_10 <= iVar3) break;
              iVar3 = FUN_0052361c(param_1);
              iVar3 = FUN_0051e340(*(int *)(iVar3 + 0x27c));
              iVar7 = FUN_0052361c(param_1);
              uVar4 = FUN_0051e2e4(*(int *)(iVar7 + 0x27c));
              iVar7 = iVar3 - uVar4;
              if (SBORROW4(iVar3,uVar4)) {
                uVar4 = thunk_FUN_00402874(uVar4);
              }
              if (SBORROW4(iVar7,1)) {
                thunk_FUN_00402874(uVar4);
              }
              if (iVar7 + -1 <= local_14) break;
              iVar3 = FUN_0052361c(param_1);
              uVar4 = FUN_0051e2e4(*(int *)(iVar3 + 0x27c));
              if (SCARRY4(uVar4,local_14)) {
                thunk_FUN_00402874(uVar4);
              }
              iVar3 = FUN_0052361c(param_1);
              piVar1 = (int *)(*(uint *)(iVar3 + 0x27c) + 0x20c);
              uVar6 = (uVar4 + local_14) - *piVar1;
              if (SBORROW4(uVar4 + local_14,*piVar1)) {
                thunk_FUN_00402874(*(uint *)(iVar3 + 0x27c));
              }
              iVar3 = FUN_0052361c(param_1);
              iVar3 = FUN_0051e404(*(int **)(iVar3 + 0x27c),uVar6);
              uVar4 = *(uint *)(iVar3 + 0x34);
              bVar2 = SBORROW4(local_10,uVar4);
              local_10 = local_10 - uVar4;
              if (bVar2) {
                uVar4 = thunk_FUN_00402874(uVar4);
              }
              bVar2 = SCARRY4(local_14,1);
              local_14 = local_14 + 1;
              if (bVar2) {
                thunk_FUN_00402874(uVar4);
              }
            }
            iVar3 = FUN_0052361c(param_1);
            *(int *)(*(int *)(iVar3 + 0x27c) + 0x210) = local_14;
            BVar9 = -1;
            iVar7 = 0;
            iVar3 = 0;
            pHVar5 = (HWND)FUN_00438988(param_1);
            SetScrollRange(pHVar5,iVar3,iVar7,local_14,BVar9);
          }
          else {
            BVar9 = -1;
            iVar8 = 0;
            iVar7 = 0;
            iVar3 = 0;
            pHVar5 = (HWND)FUN_00438988(param_1);
            SetScrollRange(pHVar5,iVar3,iVar7,iVar8,BVar9);
            iVar3 = FUN_0052361c(param_1);
            FUN_0051e704(*(int **)(iVar3 + 0x27c),0);
          }
          iVar3 = FUN_005237e8(param_1);
          if (iVar3 < param_1[0x81]) {
            BVar9 = -1;
            uVar4 = FUN_005237e8(param_1);
            iVar3 = param_1[0x81] - uVar4;
            if (SBORROW4(param_1[0x81],uVar4)) {
              thunk_FUN_00402874(uVar4);
              iVar3 = extraout_EDX_00;
            }
            iVar8 = 0;
            iVar7 = 1;
            pHVar5 = (HWND)FUN_00438988(param_1);
            SetScrollRange(pHVar5,iVar7,iVar8,iVar3,BVar9);
          }
          else {
            BVar9 = -1;
            iVar8 = 0;
            iVar7 = 0;
            iVar3 = 1;
            pHVar5 = (HWND)FUN_00438988(param_1);
            SetScrollRange(pHVar5,iVar3,iVar7,iVar8,BVar9);
            FUN_00523d7c(param_1,0);
          }
          local_c = local_c + 1;
        } while (local_c != 3);
        BVar9 = -1;
        iVar3 = FUN_0052361c(param_1);
        iVar3 = *(int *)(*(int *)(iVar3 + 0x27c) + 0x20c);
        iVar7 = 0;
        pHVar5 = (HWND)FUN_00438988(param_1);
        SetScrollPos(pHVar5,iVar7,iVar3,BVar9);
        BVar9 = -1;
        iVar3 = param_1[0x84];
        iVar7 = 1;
        pHVar5 = (HWND)FUN_00438988(param_1);
        SetScrollPos(pHVar5,iVar7,iVar3,BVar9);
      }
      else {
        iVar3 = FUN_005237e8(param_1);
        if (iVar3 < param_1[0x81]) {
          BVar9 = -1;
          uVar4 = FUN_005237e8(param_1);
          iVar3 = param_1[0x81] - uVar4;
          if (SBORROW4(param_1[0x81],uVar4)) {
            thunk_FUN_00402874(uVar4);
            iVar3 = extraout_EDX;
          }
          iVar8 = 0;
          iVar7 = 1;
          pHVar5 = (HWND)FUN_00438988(param_1);
          SetScrollRange(pHVar5,iVar7,iVar8,iVar3,BVar9);
        }
        else {
          BVar9 = -1;
          iVar8 = 0;
          iVar7 = 0;
          iVar3 = 1;
          pHVar5 = (HWND)FUN_00438988(param_1);
          SetScrollRange(pHVar5,iVar3,iVar7,iVar8,BVar9);
          FUN_00523d7c(param_1,0);
        }
        BVar9 = -1;
        iVar3 = param_1[0x84];
        iVar7 = 1;
        pHVar5 = (HWND)FUN_00438988(param_1);
        SetScrollPos(pHVar5,iVar7,iVar3,BVar9);
        BVar9 = -1;
        iVar8 = 0;
        iVar7 = 0;
        iVar3 = 0;
        pHVar5 = (HWND)FUN_00438988(param_1);
        SetScrollRange(pHVar5,iVar3,iVar7,iVar8,BVar9);
      }
    }
  }
  return;
}

