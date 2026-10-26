/*
 * FUN_0055b6fc at 0055b6fc
 * undefined __register FUN_0055b6fc(int param_1, undefined4 param_2)
 * Address ranges: 0055b6fc-0055b886
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0055b6fc(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x31c) + 0x218) + 0xb8))();
  if (cVar3 != '\0') {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x31c) + 0x20c) + 300);
    iVar2 = *piVar1;
    (**(code **)(iVar2 + 8))(piVar1,*(undefined4 *)(*(int *)PTR_DAT_00572108 + 0x150),iVar2,param_2)
    ;
  }
  cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x31c) + 0x21c) + 0xb8))();
  if (cVar3 != '\0') {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x31c) + 0x20c) + 300);
    (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)(*(int *)PTR_DAT_00572108 + 0x154));
  }
  cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x31c) + 0x220) + 0xb8))();
  if (cVar3 != '\0') {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x31c) + 0x20c) + 300);
    (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)(*(int *)PTR_DAT_00572108 + 0x158));
  }
  if (DAT_00574898 == '\0') {
    FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
    cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x31c) + 0x218) + 0xb8))();
    if (cVar3 != '\0') {
      FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_In08");
    }
    cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x31c) + 0x21c) + 0xb8))();
    if (cVar3 != '\0') {
      FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RcMn20");
    }
    cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x31c) + 0x220) + 0xb8))();
    if (cVar3 != '\0') {
      FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_In09");
    }
  }
  return;
}

