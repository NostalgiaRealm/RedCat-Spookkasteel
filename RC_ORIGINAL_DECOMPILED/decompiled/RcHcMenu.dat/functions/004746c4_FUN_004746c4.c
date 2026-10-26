/*
 * FUN_004746c4 at 004746c4
 * undefined __register FUN_004746c4(int param_1, char param_2)
 * Address ranges: 004746c4-004746e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004746c4(int param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
  }
  return;
}

