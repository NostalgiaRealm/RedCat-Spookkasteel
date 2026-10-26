/*
 * FUN_00469c64 at 00469c64
 * undefined __register FUN_00469c64(int param_1, int * param_2)
 * Address ranges: 00469c64-00469d0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00469c64(int param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != *(int **)(param_1 + 0x8c)) {
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x8c))();
    }
    if (param_2 == (int *)0x0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_004686ac(*(int *)(*(int *)(param_1 + 0x28) + 0x24),param_1);
      }
    }
    else {
      if ((int *)param_2[10] != (int *)0x0) {
        (**(code **)(*(int *)param_2[10] + 0x8c))();
      }
      iVar1 = (**(code **)(*param_2 + 0xd0))();
      FUN_004687d8(iVar1,*(undefined **)(param_1 + 0x2c));
      iVar1 = (**(code **)(*param_2 + 0xd0))();
      FUN_004686ac(iVar1,param_1);
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_004686d8(*(int *)(*(int *)(param_1 + 0x28) + 0x24),param_1);
      }
      *(int *)(param_1 + 0x28) = param_2[10];
    }
    if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x8c) + 0xd0))();
      FUN_004686d8(iVar1,param_1);
    }
    *(int **)(param_1 + 0x8c) = param_2;
  }
  return;
}

