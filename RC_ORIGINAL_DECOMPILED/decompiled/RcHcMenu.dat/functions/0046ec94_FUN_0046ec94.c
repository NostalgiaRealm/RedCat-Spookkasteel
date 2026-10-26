/*
 * FUN_0046ec94 at 0046ec94
 * undefined __register FUN_0046ec94(int param_1)
 * Address ranges: 0046ec94-0046ecb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046ec94(int param_1)

{
  if ((*(char *)(param_1 + 0x2c) != '\0') && (*(int *)(param_1 + 0x24) != 0)) {
    FUN_0046ec4c(param_1,*(char *)(*(int *)(param_1 + 0x24) + 0x8d));
    return;
  }
  FUN_0046ec4c(param_1,'\0');
  return;
}

