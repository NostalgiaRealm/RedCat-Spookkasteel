/*
 * FUN_0054fba8 at 0054fba8
 * undefined __register FUN_0054fba8(int param_1)
 * Address ranges: 0054fba8-0054fbc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054fba8(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x48))();
  }
  return;
}

