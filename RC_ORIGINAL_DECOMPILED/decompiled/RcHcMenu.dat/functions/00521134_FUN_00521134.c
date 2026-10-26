/*
 * FUN_00521134 at 00521134
 * undefined __register FUN_00521134(int param_1, int * param_2)
 * Address ranges: 00521134-0052130c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00521134(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int extraout_EDX;
  uint extraout_EDX_00;
  int iVar4;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_10 = *param_2;
  local_c = param_2[1];
  if (local_10 < 0) {
    local_10 = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x27c) + 0x38) < local_10) {
    local_10 = *(int *)(*(int *)(param_1 + 0x27c) + 0x38);
  }
  uVar2 = *(uint *)(*(int *)(*(int *)(param_1 + 0x27c) + 0x208) + 0x3c);
  uVar1 = (int)uVar2 >> 1;
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + ((uVar2 & 1) != 0);
  }
  iVar3 = 3 - uVar1;
  local_8 = param_1;
  if (SBORROW4(3,uVar1)) {
    thunk_FUN_00402874(uVar1);
    iVar3 = extraout_EDX;
  }
  uVar2 = local_c;
  if ((int)local_c < iVar3) {
    uVar2 = *(uint *)(*(int *)(*(int *)(local_8 + 0x27c) + 0x208) + 0x3c);
    uVar1 = (int)uVar2 >> 1;
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 + ((uVar2 & 1) != 0);
    }
    uVar2 = 3 - uVar1;
    if (SBORROW4(3,uVar1)) {
      thunk_FUN_00402874(uVar1);
      uVar2 = extraout_EDX_00;
    }
  }
  local_c = uVar2;
  iVar3 = *(int *)(*(int *)(local_8 + 0x27c) + 0x3c);
  uVar2 = *(uint *)(*(int *)(*(int *)(local_8 + 0x27c) + 0x208) + 0x3c);
  iVar4 = (int)uVar2 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
  }
  uVar2 = iVar3 + iVar4;
  if (SCARRY4(iVar3,iVar4)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  uVar1 = uVar2 - 3;
  if (SBORROW4(uVar2,3)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  uVar2 = local_c;
  if ((int)uVar1 < (int)local_c) {
    iVar3 = *(int *)(*(int *)(local_8 + 0x27c) + 0x3c);
    uVar2 = *(uint *)(*(int *)(*(int *)(local_8 + 0x27c) + 0x208) + 0x3c);
    iVar4 = (int)uVar2 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar2 & 1) != 0);
    }
    uVar1 = iVar3 + iVar4;
    if (SCARRY4(iVar3,iVar4)) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    uVar2 = uVar1 - 3;
    if (SBORROW4(uVar1,3)) {
      uVar2 = thunk_FUN_00402874(uVar1 - 3);
    }
  }
  local_c = uVar2;
  uVar2 = FUN_00520aac(local_8,local_10);
  *(uint *)(*(int *)(local_8 + 0x27c) + 0x204) = uVar2;
  FUN_00521310(local_8);
  FUN_0043228c(*(int **)(local_8 + 0x27c),&local_10,&local_18);
  local_10 = local_18;
  local_c = local_14;
  uVar2 = *(uint *)(*(int *)(*(int *)(local_8 + 0x27c) + 0x208) + 0x3c);
  uVar1 = (int)uVar2 >> 1;
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + ((uVar2 & 1) != 0);
  }
  if (SBORROW4(local_14,uVar1)) {
    thunk_FUN_00402874(uVar1);
  }
  uVar2 = *(uint *)(*(int *)(*(int *)(local_8 + 0x27c) + 0x208) + 0x38);
  uVar1 = (int)uVar2 >> 1;
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + ((uVar2 & 1) != 0);
  }
  if (SBORROW4(local_10,uVar1)) {
    thunk_FUN_00402874(uVar1);
  }
  (**(code **)(**(int **)(*(int *)(local_8 + 0x27c) + 0x208) + 0x7c))();
  return;
}

