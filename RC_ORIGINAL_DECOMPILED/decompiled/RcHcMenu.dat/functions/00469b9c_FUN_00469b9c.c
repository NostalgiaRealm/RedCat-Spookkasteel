/*
 * FUN_00469b9c at 00469b9c
 * undefined __register FUN_00469b9c(int param_1, int * param_2)
 * Address ranges: 00469b9c-00469c60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00469b9c(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (param_2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x8c))();
    }
    if (param_2 != (int *)0x0) {
      (**(code **)(*param_2 + 0x8c))();
      if (*(char *)(param_1 + 0x36) == '\x04') {
        FUN_004687d8(param_2[10],*(undefined **)(param_1 + 0x2c));
      }
      else {
        FUN_004687d8(param_2[9],*(undefined **)(param_1 + 0x2c));
      }
    }
    iVar2 = *(int *)(param_1 + 0x8c);
    if ((iVar2 == 0) || (param_2 == *(int **)(iVar2 + 0x28))) {
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 != 0) {
        if (*(char *)(param_1 + 0x36) == '\x04') {
          FUN_004686d8(*(int *)(iVar2 + 0x28),param_1);
        }
        else {
          FUN_004686d8(*(int *)(iVar2 + 0x24),param_1);
        }
      }
    }
    else {
      FUN_004686d8(*(int *)(iVar2 + 0xd0),param_1);
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    if ((param_2 != (int *)0x0) && (*(int *)(param_1 + 0x8c) == 0)) {
      if (*(char *)(param_1 + 0x36) == '\x04') {
        FUN_004686ac(param_2[10],param_1);
      }
      else {
        FUN_004686ac(param_2[9],param_1);
      }
    }
    *(int **)(param_1 + 0x28) = param_2;
  }
  return;
}

