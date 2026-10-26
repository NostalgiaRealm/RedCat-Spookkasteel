/*
 * FUN_0041f1a0 at 0041f1a0
 * undefined __register FUN_0041f1a0(int param_1)
 * Address ranges: 0041f1a0-0041f1c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041f1a0(int param_1)

{
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),param_1);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
  }
  return;
}

