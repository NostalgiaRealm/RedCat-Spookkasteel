/*
 * FUN_0045fbc8 at 0045fbc8
 * undefined __register FUN_0045fbc8(int param_1, char param_2)
 * Address ranges: 0045fbc8-0045fbed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045fbc8(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  }
  else {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  }
  return;
}

