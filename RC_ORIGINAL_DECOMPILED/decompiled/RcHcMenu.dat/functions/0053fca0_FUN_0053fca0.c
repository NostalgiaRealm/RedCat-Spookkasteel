/*
 * FUN_0053fca0 at 0053fca0
 * undefined __register FUN_0053fca0(int * param_1)
 * Address ranges: 0053fca0-0053fea0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053fca0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int extraout_EDX;
  bool bVar6;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  iVar1 = FUN_0048ec24(param_1[0xef]);
  if ((iVar1 < 1) || ((char)param_1[0x88] != '\0')) {
    FUN_004f8c70(param_1);
  }
  else {
    local_c = 0;
    iVar1 = FUN_0048ec24(param_1[0xef]);
    uVar2 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    if (-1 < (int)uVar2) {
      local_18 = uVar2 + 1;
      local_10 = 0;
      do {
        uVar2 = local_10;
        if (100 < local_10) {
          uVar2 = thunk_FUN_00402874(local_10);
        }
        uVar2 = param_1[uVar2 + 0x89];
        bVar6 = SCARRY4(local_c,uVar2);
        local_c = local_c + uVar2;
        if (bVar6) {
          thunk_FUN_00402874(uVar2);
        }
        local_10 = local_10 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    if (local_c == 0) {
      FUN_004f8c70(param_1);
    }
    else {
      local_14 = FUN_00432178(param_1);
      iVar1 = FUN_0048ec24(param_1[0xef]);
      uVar2 = iVar1 - 1;
      if (SBORROW4(iVar1,1)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      if (-1 < (int)uVar2) {
        local_18 = uVar2 + 1;
        local_10 = 0;
        do {
          piVar3 = (int *)FUN_0053eb74((int)param_1);
          uVar2 = local_10;
          if (100 < local_10) {
            uVar2 = thunk_FUN_00402874(local_10);
          }
          uVar4 = (uint)((longlong)param_1[uVar2 + 0x89] * (longlong)local_14);
          if ((longlong)(int)uVar4 != (longlong)param_1[uVar2 + 0x89] * (longlong)local_14) {
            uVar4 = thunk_FUN_00402874(uVar4);
          }
          FUN_004f8334(piVar3,local_10,(int)uVar4 / local_c);
          local_10 = local_10 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      iVar1 = FUN_0048ec24(param_1[0xef]);
      uVar2 = iVar1 - 2;
      if (SBORROW4(iVar1,2)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      if (-1 < (int)uVar2) {
        local_18 = uVar2 + 1;
        local_10 = 0;
        do {
          iVar1 = FUN_0053eb74((int)param_1);
          iVar1 = FUN_004f82c8(iVar1,local_10);
          iVar5 = FUN_004f6c58(*(int *)(param_1[0x80] + 0x1f0),local_10);
          FUN_004f6bb0(iVar5,iVar1);
          uVar2 = FUN_004f8944((int)param_1,local_10);
          bVar6 = SBORROW4(local_14,uVar2);
          local_14 = local_14 - uVar2;
          if (bVar6) {
            thunk_FUN_00402874(uVar2);
          }
          local_10 = local_10 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      if (0 < local_14) {
        iVar1 = FUN_0048ec24(param_1[0xef]);
        if (0 < iVar1) {
          iVar1 = FUN_0048ec24(param_1[0xef]);
          uVar2 = iVar1 - 1;
          if (SBORROW4(iVar1,1)) {
            uVar2 = thunk_FUN_00402874(uVar2);
          }
          piVar3 = (int *)FUN_0053eb74((int)param_1);
          FUN_004f8334(piVar3,uVar2,local_14);
          uVar2 = FUN_004f896c((int)param_1);
          iVar1 = uVar2 - 1;
          if (SBORROW4(uVar2,1)) {
            thunk_FUN_00402874(uVar2);
            iVar1 = extraout_EDX;
          }
          iVar1 = FUN_004f6c58(*(int *)(param_1[0x80] + 0x1f0),iVar1);
          FUN_004f6bb0(iVar1,local_14);
        }
      }
    }
  }
  return;
}

