/*
 * FUN_0051c984 at 0051c984
 * undefined __register FUN_0051c984(int param_1, uint param_2)
 * Address ranges: 0051c984-0051cad2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051c984(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 != 0xffffffff) {
    if (((int)param_2 < 0) || (uVar2 = FUN_0051c7f0(param_1), (int)uVar2 <= (int)param_2)) {
      uVar2 = FUN_0051c7f0(param_1);
      if (((int)uVar2 < (int)param_2) &&
         (uVar2 = FUN_0051e5f0(*(int *)(param_1 + 0x3c)), (int)param_2 < (int)uVar2)) {
        uVar3 = FUN_0051e404(*(int **)(param_1 + 0x3c),param_2);
        piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 0x274);
        iVar4 = (**(code **)(*piVar1 + 0x20))(piVar1,uVar3);
        piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 0x274);
        uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_1);
        if (SBORROW4(iVar4,1)) {
          thunk_FUN_00402874(uVar2);
        }
        (**(code **)(**(int **)(*(int *)(param_1 + 0x3c) + 0x274) + 0x24))();
      }
      else {
        uVar2 = FUN_0051e5f0(*(int *)(param_1 + 0x3c));
        if (uVar2 == param_2) {
          piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 0x274);
          (**(code **)(*piVar1 + 0x18))(piVar1,param_1);
          piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 0x274);
          (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
        }
      }
    }
    else {
      uVar3 = FUN_0051e404(*(int **)(param_1 + 0x3c),param_2);
      piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 0x274);
      uVar3 = (**(code **)(*piVar1 + 0x20))(piVar1,uVar3);
      piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 0x274);
      (**(code **)(*piVar1 + 0x18))(piVar1,param_1);
      piVar1 = *(int **)(*(int *)(param_1 + 0x3c) + 0x274);
      (**(code **)(*piVar1 + 0x24))(piVar1,uVar3,param_1);
    }
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x74))();
    if (param_2 != 0xffffffff) {
      FUN_0051f124(*(int **)(param_1 + 0x3c));
    }
    return;
  }
  return;
}

