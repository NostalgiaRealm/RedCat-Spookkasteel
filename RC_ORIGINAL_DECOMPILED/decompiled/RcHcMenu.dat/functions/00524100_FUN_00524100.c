/*
 * FUN_00524100 at 00524100
 * undefined __register FUN_00524100(int * param_1, int * param_2)
 * Address ranges: 00524100-005243fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00524100(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int iVar6;
  int extraout_ECX_00;
  int extraout_ECX_01;
  uint extraout_ECX_02;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  RECT local_30;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  iVar2 = FUN_005237e8(param_1);
  if (-1 < iVar2) {
    local_20 = iVar2 + 1;
    local_18 = 0;
    do {
      (**(code **)(*local_8 + 0x40))(local_8,&local_30);
      iVar2 = FUN_005235f8(local_8);
      uVar3 = (uint)((longlong)iVar2 * (longlong)local_18);
      if ((longlong)(int)uVar3 != (longlong)iVar2 * (longlong)local_18) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      local_30.top = uVar3;
      uVar3 = FUN_005235f8(local_8);
      iVar2 = local_18 + 1;
      if (SCARRY4(local_18,1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
        iVar2 = extraout_EDX;
      }
      uVar4 = (uint)((longlong)(int)uVar3 * (longlong)iVar2);
      if ((longlong)(int)uVar4 != (longlong)(int)uVar3 * (longlong)iVar2) {
        uVar4 = thunk_FUN_00402874(uVar4);
      }
      local_30.bottom = uVar4;
      iVar2 = FUN_0052361c(local_8);
      local_14 = *(undefined4 *)(iVar2 + 0x60);
      uVar3 = local_8[0x84] + local_18;
      if (SCARRY4(local_8[0x84],local_18)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      uVar3 = uVar3 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      if (uVar3 == 0) {
        local_14 = FUN_005235d4(local_8);
      }
      FUN_0041c318((int *)local_c[5],local_14);
      FUN_0041c9f8(local_c,&local_30);
      local_18 = local_18 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  cVar1 = FUN_005237c4(local_8);
  if (cVar1 != '\0') {
    iVar2 = FUN_005237e8(local_8);
    if (-1 < iVar2) {
      local_20 = iVar2 + 1;
      local_18 = 0;
      do {
        uVar5 = FUN_005237a0(local_8);
        FUN_0041c034((int *)local_c[4],uVar5);
        iVar2 = FUN_005235f8(local_8);
        uVar3 = local_18 + 1;
        if (SCARRY4(local_18,1)) {
          uVar3 = thunk_FUN_00402874(uVar3);
          iVar2 = extraout_ECX;
        }
        iVar6 = (int)((longlong)iVar2 * (longlong)(int)uVar3);
        if ((longlong)iVar6 != (longlong)iVar2 * (longlong)(int)uVar3) {
          uVar3 = thunk_FUN_00402874(uVar3);
          iVar6 = extraout_ECX_00;
        }
        iVar2 = iVar6 + -1;
        if (SBORROW4(iVar6,1)) {
          thunk_FUN_00402874(uVar3);
          iVar2 = extraout_ECX_01;
        }
        FUN_0041cad0(local_c,0,iVar2);
        uVar3 = FUN_005235f8(local_8);
        iVar2 = local_18 + 1;
        if (SCARRY4(local_18,1)) {
          uVar3 = thunk_FUN_00402874(uVar3);
          iVar2 = extraout_EDX_00;
        }
        uVar4 = (uint)((longlong)(int)uVar3 * (longlong)iVar2);
        if ((longlong)(int)uVar4 != (longlong)(int)uVar3 * (longlong)iVar2) {
          uVar4 = thunk_FUN_00402874(uVar4);
        }
        uVar3 = uVar4 - 1;
        if (SBORROW4(uVar4,1)) {
          uVar3 = thunk_FUN_00402874(uVar3);
        }
        iVar2 = FUN_00432178(local_8);
        FUN_0041ca70(local_c,iVar2,uVar3);
        local_18 = local_18 + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
    iVar2 = FUN_0052361c(local_8);
    uVar3 = FUN_0051e5f0(*(int *)(iVar2 + 0x27c));
    uVar4 = uVar3 - 1;
    if (SBORROW4(uVar3,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (-1 < (int)uVar4) {
      local_20 = uVar4 + 1;
      local_10 = 0;
      do {
        uVar5 = FUN_005237a0(local_8);
        FUN_0041c034((int *)local_c[4],uVar5);
        iVar2 = FUN_0052361c(local_8);
        uVar3 = FUN_0051e404(*(int **)(iVar2 + 0x27c),local_10);
        iVar2 = *(int *)(uVar3 + 0x1c) + -1;
        if (SBORROW4(*(int *)(uVar3 + 0x1c),1)) {
          thunk_FUN_00402874(uVar3);
          iVar2 = extraout_EDX_01;
        }
        FUN_0041cad0(local_c,iVar2,0);
        iVar2 = FUN_0052361c(local_8);
        iVar2 = FUN_0051e404(*(int **)(iVar2 + 0x27c),local_10);
        uVar3 = *(int *)(iVar2 + 0x1c) - 1;
        if (SBORROW4(*(int *)(iVar2 + 0x1c),1)) {
          uVar3 = thunk_FUN_00402874(uVar3);
        }
        iVar2 = FUN_004321bc(local_8);
        FUN_0041ca70(local_c,uVar3,iVar2);
        local_10 = local_10 + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
  }
  iVar2 = FUN_0052361c(local_8);
  iVar2 = FUN_00520c1c(iVar2);
  iVar2 = FUN_0051e2e4(iVar2);
  if (0 < iVar2) {
    local_1c = 0;
    cVar1 = FUN_005237c4(local_8);
    if (cVar1 != '\0') {
      local_1c = 1;
    }
    iVar2 = FUN_0052361c(local_8);
    iVar2 = FUN_0051e2e4(*(int *)(iVar2 + 0x27c));
    uVar3 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    iVar2 = FUN_0052361c(local_8);
    iVar2 = FUN_0051e404(*(int **)(iVar2 + 0x27c),uVar3);
    uVar3 = *(int *)(iVar2 + 0x1c) - 1;
    if (SBORROW4(*(int *)(iVar2 + 0x1c),1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    local_10 = uVar3;
    uVar5 = FUN_005237a0(local_8);
    uVar3 = FUN_0041c034((int *)local_c[4],uVar5);
    iVar2 = local_10 - local_1c;
    if (SBORROW4(local_10,local_1c)) {
      thunk_FUN_00402874(uVar3);
      iVar2 = extraout_EDX_02;
    }
    FUN_0041cad0(local_c,iVar2,0);
    uVar3 = FUN_004321bc(local_8);
    iVar2 = local_10 - local_1c;
    if (SBORROW4(local_10,local_1c)) {
      thunk_FUN_00402874(uVar3);
      uVar3 = extraout_ECX_02;
      iVar2 = extraout_EDX_03;
    }
    FUN_0041ca70(local_c,iVar2,uVar3);
  }
  return;
}

