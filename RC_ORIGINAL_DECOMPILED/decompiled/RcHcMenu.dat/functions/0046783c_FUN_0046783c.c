/*
 * FUN_0046783c at 0046783c
 * undefined __register FUN_0046783c(int param_1, char param_2)
 * Address ranges: 0046783c-00467868
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046783c(int param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_004677fc(param_1,*(byte *)(param_1 + 0x22) | 4);
    return;
  }
  FUN_004677fc(param_1,*(byte *)(param_1 + 0x22) & 0xfb);
  return;
}

