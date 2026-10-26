/*
 * FUN_00541c0c at 00541c0c
 * undefined __register FUN_00541c0c(int param_1, int * param_2)
 * Address ranges: 00541c0c-00541d3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00541c0c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 local_28 [7];
  int *local_c;
  int local_8;
  
  bVar5 = 0;
  if (*(int **)(*(int *)(param_1 + 0x280) + 0x210) == param_2) {
    return;
  }
  local_c = param_2;
  local_8 = param_1;
  FUN_0053eebc(*(int **)(param_1 + 0x280),param_2);
  if (local_c == (int *)0x0) goto LAB_00541cc2;
  iVar1 = FUN_00541898(local_8);
  if (iVar1 == 0) {
LAB_00541c69:
    FUN_00403d94("Assertion failure");
  }
  else {
    iVar1 = FUN_00541898(local_8);
    iVar1 = FUN_0048ec24(*(int *)(iVar1 + 0x10));
    if (iVar1 < 1) goto LAB_00541c69;
  }
  iVar1 = FUN_00541898(local_8);
  FUN_0048f02c(*(int **)(iVar1 + 0x10),0,local_28);
  FUN_004f9a04(*(int **)(local_8 + 0x27c),local_28);
  puVar3 = (undefined4 *)(*(int *)(local_8 + 0x27c) + 0x208);
  puVar4 = (undefined4 *)(local_8 + 0x240);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
LAB_00541cc2:
  FUN_00403094(*(int **)(local_8 + 0x22c));
  *(undefined4 *)(local_8 + 0x22c) = 0;
  if (local_c != (int *)0x0) {
    uVar2 = FUN_0049206c(local_c);
    *(undefined4 *)(local_8 + 0x22c) = uVar2;
  }
  if (local_c == (int *)0x0) {
    FUN_00403094(*(int **)(local_8 + 0x230));
    *(undefined4 *)(local_8 + 0x230) = 0;
  }
  FUN_004f9b0c(*(int **)(local_8 + 0x27c),*(int *)(local_8 + 0x22c));
  (**(code **)(**(int **)(local_8 + 0x27c) + 0xd4))();
  return;
}

