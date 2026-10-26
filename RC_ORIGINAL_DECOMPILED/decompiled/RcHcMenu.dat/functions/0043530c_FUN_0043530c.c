/*
 * FUN_0043530c at 0043530c
 * undefined __register FUN_0043530c(int param_1)
 * Address ranges: 0043530c-00435328
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043530c(int param_1)

{
  *(short *)(param_1 + 0x120) = *(short *)(param_1 + 0x120) + -1;
  if ((*(short *)(param_1 + 0x120) == 0) && ((*(byte *)(param_1 + 0x44) & 0x10) != 0)) {
    FUN_0043532c((int *)param_1);
  }
  return;
}

