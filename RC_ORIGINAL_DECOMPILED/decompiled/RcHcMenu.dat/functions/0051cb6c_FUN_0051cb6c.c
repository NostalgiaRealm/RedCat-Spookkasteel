/*
 * FUN_0051cb6c at 0051cb6c
 * undefined __register FUN_0051cb6c(int param_1, int param_2)
 * Address ranges: 0051cb6c-0051cc05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051cb6c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0051c878(param_1);
  if (iVar2 != -1) {
    uVar3 = FUN_0051c878(param_1);
    piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 0x278);
    (**(code **)(*piVar1 + 0x10))(piVar1,uVar3);
  }
  if (param_2 != -1) {
    iVar2 = FUN_0045ba40(*(int *)(*(int *)(param_1 + 0x3c) + 0x278));
    if (iVar2 < param_2) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 0x278);
      (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
    }
    else {
      piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 0x278);
      (**(code **)(*piVar1 + 0x24))(piVar1,param_2,param_1);
    }
  }
  FUN_0051f14c(*(int **)(param_1 + 0x3c),param_1);
  FUN_0051e908(*(int **)(param_1 + 0x3c));
  return;
}

