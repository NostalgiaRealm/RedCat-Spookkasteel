/*
 * FUN_004c7068 at 004c7068
 * undefined __register FUN_004c7068(int param_1, int param_2)
 * Address ranges: 004c7068-004c70b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c7068(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == *(int *)(param_1 + 4)) {
    uVar1 = FUN_00421574(*(int **)(param_1 + 4));
    *(uint *)(param_1 + 0x1c) = uVar1;
    FUN_004c7000(param_1);
    if (*(short *)(param_1 + 0x2a) != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x2c),param_1);
    }
  }
  return;
}

