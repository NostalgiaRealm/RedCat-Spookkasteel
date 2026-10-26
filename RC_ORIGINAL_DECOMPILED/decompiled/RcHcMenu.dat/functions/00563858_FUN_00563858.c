/*
 * FUN_00563858 at 00563858
 * undefined __register FUN_00563858(int param_1, char param_2)
 * Address ranges: 00563858-0056386d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00563858(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x2d4)) {
    *(char *)(param_1 + 0x2d4) = param_2;
  }
  *(undefined1 *)(param_1 + 0x2d6) = 1;
  return;
}

