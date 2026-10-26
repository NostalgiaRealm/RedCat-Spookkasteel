/*
 * FUN_00525054 at 00525054
 * undefined __register FUN_00525054(int * param_1, int param_2, uint * param_3)
 * Address ranges: 00525054-00525171
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00525054(int *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int extraout_EDX;
  int local_20 [2];
  int local_18;
  uint *local_10;
  int local_c;
  int *local_8;
  
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  iVar3 = FUN_0052361c(param_1);
  uVar4 = FUN_0051e5f0(*(int *)(iVar3 + 0x27c));
  if ((int)uVar4 < 1) {
    (**(code **)(*local_8 + 0x40))(local_8,local_20);
    uVar4 = local_20[0] - 1;
    if (SBORROW4(local_20[0],1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    *local_10 = uVar4;
    (**(code **)(*local_8 + 0x40))(local_8,local_20);
    uVar4 = local_18 + 1;
    if (SCARRY4(local_18,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    local_10[2] = uVar4;
  }
  else {
    iVar3 = FUN_0052361c(local_8);
    iVar3 = FUN_0051e404(*(int **)(iVar3 + 0x27c),0);
    *local_10 = *(uint *)(iVar3 + 0x14);
    iVar3 = FUN_0052361c(local_8);
    uVar4 = FUN_0051e5f0(*(int *)(iVar3 + 0x27c));
    uVar5 = uVar4 - 1;
    if (SBORROW4(uVar4,1)) {
      uVar5 = thunk_FUN_00402874(uVar5);
    }
    iVar3 = FUN_0052361c(local_8);
    iVar3 = FUN_0051e404(*(int **)(iVar3 + 0x27c),uVar5);
    local_10[2] = *(uint *)(iVar3 + 0x1c);
  }
  uVar4 = FUN_005235f8(local_8);
  iVar3 = local_c - local_8[0x84];
  if (SBORROW4(local_c,local_8[0x84])) {
    uVar4 = thunk_FUN_00402874(uVar4);
    iVar3 = extraout_EDX;
  }
  uVar5 = (uint)((longlong)(int)uVar4 * (longlong)iVar3);
  if ((longlong)(int)uVar5 != (longlong)(int)uVar4 * (longlong)iVar3) {
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  local_10[1] = uVar5;
  iVar3 = FUN_005235f8(local_8);
  uVar4 = iVar3 + local_10[1];
  if (SCARRY4(iVar3,local_10[1])) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  local_10[3] = uVar4;
  cVar2 = FUN_005237c4(local_8);
  if (cVar2 != '\0') {
    puVar1 = local_10 + 3;
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    if (SBORROW4(uVar4,1)) {
      thunk_FUN_00402874((uint)local_10);
    }
  }
  return;
}

