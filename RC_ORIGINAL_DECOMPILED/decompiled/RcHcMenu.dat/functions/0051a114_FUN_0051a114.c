/*
 * FUN_0051a114 at 0051a114
 * undefined __register FUN_0051a114(int param_1)
 * Address ranges: 0051a114-0051a2ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051a114(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int local_c;
  
  local_c = 0;
  iVar3 = FUN_0042c73c(*(int **)(param_1 + 0x2e0));
  if (-1 < iVar3) {
    iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x2e0) + 0x1f0) + 0x14))();
    iVar4 = FUN_0042c73c(*(int **)(param_1 + 0x2e0));
    if (iVar4 < iVar3) {
      uVar5 = FUN_0042c73c(*(int **)(param_1 + 0x2e0));
      piVar1 = *(int **)(*(int *)(param_1 + 0x2e0) + 0x1f0);
      local_c = (**(code **)(*piVar1 + 0x18))(piVar1,uVar5);
    }
  }
  iVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x2e0) + 0x1f0) + 0x14))();
  iVar4 = FUN_0042c73c(*(int **)(param_1 + 0x2e0));
  if (iVar4 < iVar3) {
    iVar3 = FUN_0042c73c(*(int **)(param_1 + 0x2e0));
    iVar4 = FUN_00520c1c(*(int *)(param_1 + 0x350));
    iVar4 = FUN_0051e2e4(iVar4);
    if (((iVar3 <= iVar4) || (local_c == 0)) || (*(char *)(local_c + 5) == '\0')) goto LAB_0051a1e1;
    uVar5 = 1;
  }
  else {
LAB_0051a1e1:
    uVar5 = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x348) + 0x5c))(*(int **)(param_1 + 0x348),uVar5);
  uVar6 = (**(code **)(**(int **)(*(int *)(param_1 + 0x2e0) + 0x1f0) + 0x14))();
  if (SBORROW4(uVar6,1)) {
    thunk_FUN_00402874(uVar6);
  }
  iVar3 = FUN_0042c73c(*(int **)(param_1 + 0x2e0));
  if (iVar3 < (int)(uVar6 - 1)) {
    iVar3 = FUN_0042c73c(*(int **)(param_1 + 0x2e0));
    iVar4 = FUN_00520c1c(*(int *)(param_1 + 0x350));
    iVar4 = FUN_0051e2e4(iVar4);
    if (((iVar3 < iVar4) || (local_c == 0)) || (*(char *)(local_c + 5) == '\0')) goto LAB_0051a25d;
    uVar5 = 1;
  }
  else {
LAB_0051a25d:
    uVar5 = 0;
  }
  (**(code **)(**(int **)(param_1 + 0x34c) + 0x5c))(*(int **)(param_1 + 0x34c),uVar5);
  cVar2 = (**(code **)(**(int **)(param_1 + 0x348) + 0x4c))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x34c) + 0x4c))();
    if (cVar2 == '\0') {
      uVar5 = 0;
      goto LAB_0051a29b;
    }
  }
  uVar5 = 1;
LAB_0051a29b:
  (**(code **)(**(int **)(param_1 + 0x2e4) + 0x5c))(*(int **)(param_1 + 0x2e4),uVar5);
  return;
}

