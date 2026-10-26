/*
 * FUN_0051cb0c at 0051cb0c
 * undefined __register FUN_0051cb0c(int param_1, int param_2)
 * Address ranges: 0051cb0c-0051cb6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051cb0c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0051c850(param_1);
  if (iVar2 != -1) {
    uVar3 = FUN_0051c850(param_1);
    piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 0x274);
    (**(code **)(*piVar1 + 0x14))(piVar1,uVar3);
  }
  if (param_2 != -1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 0x274);
    (**(code **)(*piVar1 + 0x24))(piVar1,param_2,param_1);
  }
  FUN_0051f124(*(int **)(param_1 + 0x3c));
  return;
}

