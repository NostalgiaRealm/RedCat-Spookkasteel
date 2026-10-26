/*
 * FUN_00563870 at 00563870
 * undefined __register FUN_00563870(int param_1, char param_2)
 * Address ranges: 00563870-00563885
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00563870(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x2d5)) {
    *(char *)(param_1 + 0x2d5) = param_2;
  }
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  return;
}

