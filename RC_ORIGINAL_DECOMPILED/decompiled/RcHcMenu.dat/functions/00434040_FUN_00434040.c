/*
 * FUN_00434040 at 00434040
 * undefined __register FUN_00434040(int param_1)
 * Address ranges: 00434040-00434064
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00434040(int param_1)

{
  if (*(char *)(param_1 + 0x8a) != '\0') {
    FUN_00432858(param_1,*(char *)(*(int *)(param_1 + 0x24) + 0x89));
    *(undefined1 *)(param_1 + 0x8a) = 1;
  }
  return;
}

