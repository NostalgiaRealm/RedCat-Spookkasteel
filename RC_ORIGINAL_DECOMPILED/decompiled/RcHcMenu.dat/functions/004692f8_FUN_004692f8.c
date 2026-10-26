/*
 * FUN_004692f8 at 004692f8
 * undefined __register FUN_004692f8(int param_1, int * param_2)
 * Address ranges: 004692f8-0046931d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004692f8(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00403e04(param_2,*(undefined4 **)(param_1 + 0x4c));
    return;
  }
  FUN_00403e04(param_2,*(undefined4 **)(param_1 + 0x2c));
  return;
}

