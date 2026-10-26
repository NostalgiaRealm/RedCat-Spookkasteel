/*
 * FUN_0051e704 at 0051e704
 * undefined __register FUN_0051e704(int * param_1, int param_2)
 * Address ranges: 0051e704-0051e905
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051e704(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  HWND pHVar4;
  uint uVar5;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  bool bVar6;
  int iVar7;
  RECT *lpRect;
  RECT *lpClipRect;
  BOOL bRedraw;
  RECT local_2c;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  if (((param_1[0x83] != param_2) && (param_2 <= param_1[0x84])) && (-1 < param_2)) {
    local_c = param_2;
    local_8 = param_1;
    iVar1 = FUN_0051e160((int)param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_0051e1b8(local_8);
      (**(code **)(**(int **)(iVar1 + 0x274) + 0x40))(*(int **)(iVar1 + 0x274),&local_2c);
      local_10 = 0;
      iVar1 = FUN_0051e2e4((int)local_8);
      if (0 < iVar1) {
        uVar2 = FUN_0051e2e4((int)local_8);
        uVar5 = uVar2 - 1;
        if (SBORROW4(uVar2,1)) {
          thunk_FUN_00402874(uVar2);
          uVar5 = extraout_EDX;
        }
        iVar1 = FUN_0051e404(local_8,uVar5);
        local_2c.left = *(LONG *)(iVar1 + 0x1c);
      }
      if (local_8[0x83] < local_c) {
        uVar5 = local_c - local_8[0x83];
        if (SBORROW4(local_c,local_8[0x83])) {
          uVar5 = thunk_FUN_00402874(uVar5);
        }
        uVar2 = uVar5 - 1;
        if (SBORROW4(uVar5,1)) {
          uVar2 = thunk_FUN_00402874(uVar2);
        }
        local_18 = uVar2;
        if (-1 < (int)uVar2) {
          local_1c = uVar2 + 1;
          local_14 = 0;
          do {
            uVar2 = FUN_0051e2e4((int)local_8);
            uVar5 = uVar2 + local_14;
            if (SCARRY4(uVar2,local_14)) {
              thunk_FUN_00402874(uVar2);
              uVar5 = extraout_EDX_00;
            }
            iVar1 = FUN_0051e404(local_8,uVar5);
            uVar5 = *(uint *)(iVar1 + 0x34);
            bVar6 = SBORROW4(local_10,uVar5);
            local_10 = local_10 - uVar5;
            if (bVar6) {
              thunk_FUN_00402874(uVar5);
            }
            local_14 = local_14 + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
        local_8[0x83] = local_c;
        (**(code **)(*local_8 + 0xc0))();
      }
      else {
        uVar5 = local_8[0x83] - local_c;
        if (SBORROW4(local_8[0x83],local_c)) {
          uVar5 = thunk_FUN_00402874(uVar5);
        }
        uVar2 = uVar5 - 1;
        if (SBORROW4(uVar5,1)) {
          uVar2 = thunk_FUN_00402874(uVar2);
        }
        local_8[0x83] = local_c;
        local_18 = uVar2;
        (**(code **)(*local_8 + 0xc0))();
        if (-1 < (int)local_18) {
          local_1c = local_18 + 1;
          local_14 = 0;
          do {
            uVar2 = FUN_0051e2e4((int)local_8);
            uVar5 = uVar2 + local_14;
            if (SCARRY4(uVar2,local_14)) {
              thunk_FUN_00402874(uVar2);
              uVar5 = extraout_EDX_01;
            }
            iVar1 = FUN_0051e404(local_8,uVar5);
            uVar5 = *(uint *)(iVar1 + 0x34);
            bVar6 = SCARRY4(local_10,uVar5);
            local_10 = local_10 + uVar5;
            if (bVar6) {
              thunk_FUN_00402874(uVar5);
            }
            local_14 = local_14 + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
      }
      iVar1 = FUN_0051e1b8(local_8);
      if (*(int *)(iVar1 + 0x288) == 0) {
        lpClipRect = &local_2c;
        lpRect = &local_2c;
        iVar7 = 0;
        iVar1 = local_10;
        iVar3 = FUN_0051e1b8(local_8);
        pHVar4 = (HWND)FUN_00438988(*(int **)(iVar3 + 0x274));
        ScrollWindow(pHVar4,iVar1,iVar7,lpRect,lpClipRect);
        (**(code **)(*local_8 + 0x78))();
        bRedraw = -1;
        iVar1 = local_8[0x83];
        iVar7 = 0;
        iVar3 = FUN_0051e1b8(local_8);
        pHVar4 = (HWND)FUN_00438988(*(int **)(iVar3 + 0x274));
        SetScrollPos(pHVar4,iVar7,iVar1,bRedraw);
      }
    }
  }
  return;
}

