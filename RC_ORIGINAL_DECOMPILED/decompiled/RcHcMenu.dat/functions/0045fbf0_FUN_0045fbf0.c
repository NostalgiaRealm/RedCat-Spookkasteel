/*
 * FUN_0045fbf0 at 0045fbf0
 * undefined __register FUN_0045fbf0(int param_1, char param_2)
 * Address ranges: 0045fbf0-0045fc15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045fbf0(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xf7;
  }
  else {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 8;
  }
  return;
}

