/*
 * FUN_004ca774 at 004ca774
 * undefined __register FUN_004ca774(int param_1, int * param_2)
 * Address ranges: 004ca774-004ca7a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ca774(int param_1,int *param_2)

{
  uint uVar1;
  
  if (param_2 == *(int **)(param_1 + 4)) {
    uVar1 = FUN_00421574(*(int **)(param_1 + 4));
    *(uint *)(param_1 + 0x1c) = uVar1;
    FUN_004ca72c(param_1);
    if (*(short *)(param_1 + 0x2a) != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1);
    }
  }
  return;
}

