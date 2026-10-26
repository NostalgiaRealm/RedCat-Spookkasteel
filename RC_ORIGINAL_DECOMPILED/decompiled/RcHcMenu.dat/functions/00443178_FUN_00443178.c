/*
 * FUN_00443178 at 00443178
 * undefined __register FUN_00443178(int * param_1, int param_2, int param_3)
 * Address ranges: 00443178-00443224
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00443178(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  
  iVar1 = param_3;
  if (*(int *)(param_3 + 0x58) != 0) {
    FUN_00440834((undefined4 *)PTR_PTR_00572600);
    iVar1 = extraout_ECX;
  }
  if (param_1[0x14] == 0) {
    iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',iVar1);
    param_1[0x14] = iVar1;
  }
  iVar1 = param_2 + -1;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1[0x14] + 8))) {
    iVar2 = FUN_00412384((undefined4 *)param_1[0x14],iVar1);
    if (*(byte *)(param_3 + 0x33) < *(byte *)(iVar2 + 0x33)) {
      iVar1 = FUN_00412384((undefined4 *)param_1[0x14],iVar1);
      FUN_00442f90(param_3,*(byte *)(iVar1 + 0x33));
    }
  }
  FUN_0044163c((int)param_1,param_2,*(byte *)(param_3 + 0x33));
  FUN_00412400((int *)param_1[0x14],param_2,param_3);
  *(int **)(param_3 + 0x58) = param_1;
  *(int **)(param_3 + 0x7c) = param_1;
  *(code **)(param_3 + 0x78) = FUN_004433a0;
  if (param_1[10] != 0) {
    FUN_004415b8(param_1);
  }
  iVar1 = FUN_00442fec((int)param_1);
  (**(code **)(*param_1 + 0x38))(param_1,iVar1 == 1);
  return;
}

