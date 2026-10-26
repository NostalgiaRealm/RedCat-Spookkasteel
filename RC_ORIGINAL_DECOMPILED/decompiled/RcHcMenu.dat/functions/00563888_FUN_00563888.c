/*
 * FUN_00563888 at 00563888
 * undefined __register FUN_00563888(int param_1, int param_2)
 * Address ranges: 00563888-0056389d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00563888(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x2e4)) {
    *(int *)(param_1 + 0x2e4) = param_2;
  }
  *(undefined1 *)(param_1 + 0x2d8) = 1;
  return;
}

