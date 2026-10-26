/*
 * FUN_00497e30 at 00497e30
 * undefined __register FUN_00497e30(int param_1)
 * Address ranges: 00497e30-00497e75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00497e30(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00402800(*(int *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

