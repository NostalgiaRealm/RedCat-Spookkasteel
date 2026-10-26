/*
 * FUN_00542f84 at 00542f84
 * undefined __register FUN_00542f84(int * param_1)
 * Address ranges: 00542f84-00543086
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00542f84(int *param_1)

{
  bool bVar1;
  char cVar2;
  LONG LVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint local_10;
  int local_c;
  
  FUN_004f009c(param_1);
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    LVar3 = FUN_0041cdc4((int *)param_1[0x7c],&LAB_00543090);
    FUN_00541da8((int)param_1,LVar3);
  }
  local_c = param_1[0x8d];
  uVar4 = FUN_005416c0((int)param_1);
  if ((char)uVar4 != '\0') {
    iVar5 = (**(code **)(**(int **)(param_1[0xa0] + 0x214) + 8))();
    if (iVar5 < param_1[0x8d]) {
      local_c = (**(code **)(**(int **)(param_1[0xa0] + 0x214) + 8))();
    }
    cVar2 = (**(code **)(**(int **)(param_1[0xa0] + 0x214) + 100))();
    if (cVar2 != '\0') {
      local_c = 1;
    }
  }
  iVar5 = FUN_005417d4((int)param_1);
  uVar4 = (uint)((longlong)iVar5 * (longlong)local_c);
  if ((longlong)(int)uVar4 != (longlong)iVar5 * (longlong)local_c) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  local_10 = uVar4 + 2;
  if (SCARRY4(uVar4,2)) {
    local_10 = thunk_FUN_00402874(local_10);
  }
  uVar6 = FUN_005417f8((int)param_1);
  if ((char)uVar6 != '\0') {
    uVar4 = *(uint *)(*(int *)(param_1[0xa0] + 0x200) + 0x3c);
    bVar1 = SCARRY4(local_10,uVar4);
    local_10 = local_10 + uVar4;
    if (bVar1) {
      thunk_FUN_00402874(uVar4);
    }
  }
  FUN_00431f98((int *)param_1[0xa0],local_10);
  return;
}

