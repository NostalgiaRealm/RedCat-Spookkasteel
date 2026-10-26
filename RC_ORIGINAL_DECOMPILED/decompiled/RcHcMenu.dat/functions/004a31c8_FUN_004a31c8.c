/*
 * FUN_004a31c8 at 004a31c8
 * undefined __register FUN_004a31c8(int param_1, char param_2)
 * Address ranges: 004a31c8-004a321b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a31c8(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x218) != param_2) {
    if (*(int *)(param_1 + 0x208) != 0) {
      FUN_004a2490(*(int *)(param_1 + 0x208),param_1,*(undefined1 *)(param_1 + 0x218),param_2);
    }
    *(char *)(param_1 + 0x218) = param_2;
  }
  return;
}

