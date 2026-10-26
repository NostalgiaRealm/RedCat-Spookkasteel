/*
 * FUN_0046766c at 0046766c
 * undefined __register FUN_0046766c(int param_1)
 * Address ranges: 0046766c-00467687
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046766c(int param_1)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    (**(code **)(**(int **)(param_1 + 0x1c) + 0xb0))(*(int **)(param_1 + 0x1c),param_1);
  }
  return;
}

