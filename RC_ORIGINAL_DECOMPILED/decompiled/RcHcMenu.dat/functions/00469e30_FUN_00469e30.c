/*
 * FUN_00469e30 at 00469e30
 * undefined __register FUN_00469e30(int param_1, uint * param_2)
 * Address ranges: 00469e30-00469e8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00469e30(int param_1,uint *param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  FUN_00468d14(param_1);
  uVar2 = *(int *)(param_1 + 0x28) == 0;
  if (!(bool)uVar2) {
    iVar1 = FUN_00409870((undefined *)param_2,*(undefined **)(param_1 + 0x2c));
    uVar2 = iVar1 == 0;
    if (!(bool)uVar2) {
      FUN_004687d8(*(int *)(param_1 + 0x30),(undefined *)param_2);
    }
  }
  FUN_00403e04((int *)(param_1 + 0x2c),param_2);
  FUN_00404140(*(uint **)(param_1 + 0x4c),param_2);
  if ((bool)uVar2) {
    FUN_00403db0((int *)(param_1 + 0x4c));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00468618(*(int *)(*(int *)(param_1 + 0x28) + 0x24));
  }
  return;
}

