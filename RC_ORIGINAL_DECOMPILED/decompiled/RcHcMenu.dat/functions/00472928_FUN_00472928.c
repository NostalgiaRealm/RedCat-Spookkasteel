/*
 * FUN_00472928 at 00472928
 * undefined __register FUN_00472928(int param_1)
 * Address ranges: 00472928-00472944
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00472928(int param_1)

{
  if (*(int *)(param_1 + 100) == 0) {
    *(undefined1 *)(param_1 + 0x8f) = *(undefined1 *)(param_1 + 0x8d);
    *(undefined1 *)(param_1 + 0x8e) = 2;
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  return;
}

