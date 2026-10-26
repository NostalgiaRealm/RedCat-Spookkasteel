/*
 * FUN_0049aefc at 0049aefc
 * undefined4 __register FUN_0049aefc(int param_1)
 * Address ranges: 0049aefc-0049af2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0049aefc(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x24) + 0x42c) == '\0') {
    GdiFlush();
  }
  return *(undefined4 *)(param_1 + 0x80);
}

