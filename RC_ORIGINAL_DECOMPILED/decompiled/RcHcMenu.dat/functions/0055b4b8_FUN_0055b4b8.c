/*
 * FUN_0055b4b8 at 0055b4b8
 * undefined __register FUN_0055b4b8(int param_1, undefined4 param_2)
 * Address ranges: 0055b4b8-0055b6cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0055b4b8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x318) + 0x218) + 0xb8))();
  if (cVar3 == '\0') {
    piVar1 = *(int **)(*(int *)(param_1 + 0x318) + 0x214);
    iVar2 = *piVar1;
    (**(code **)(iVar2 + 0x5c))(piVar1,0,iVar2,param_2);
    FUN_00432bec(*(int **)(*(int *)(param_1 + 0x318) + 0x214),extraout_EDX_00,extraout_ECX_00);
  }
  else {
    FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_In02");
    piVar1 = *(int **)(*(int *)(param_1 + 0x318) + 0x214);
    (**(code **)(*piVar1 + 0x5c))(piVar1,1);
    FUN_00432bf4(*(int **)(*(int *)(param_1 + 0x318) + 0x214),extraout_EDX,extraout_ECX);
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x318) + 0x20c) + 300);
    (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)(*(int *)PTR_DAT_00572108 + 0x144));
  }
  cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x318) + 0x21c) + 0xb8))();
  if (cVar3 != '\0') {
    FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_In03");
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x318) + 0x20c) + 300);
    (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)(*(int *)PTR_DAT_00572108 + 0x148));
  }
  cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x318) + 0x220) + 0xb8))();
  if (cVar3 != '\0') {
    FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_In04");
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x318) + 0x20c) + 300);
    (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)(*(int *)PTR_DAT_00572108 + 0x14c));
  }
  if (DAT_00574898 == '\0') {
    FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
    cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x318) + 0x218) + 0xb8))();
    if (cVar3 != '\0') {
      FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_In02");
    }
    cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x318) + 0x21c) + 0xb8))();
    if (cVar3 != '\0') {
      FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_In03");
    }
    cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x318) + 0x220) + 0xb8))();
    if (cVar3 != '\0') {
      FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_In04");
    }
  }
  return;
}

