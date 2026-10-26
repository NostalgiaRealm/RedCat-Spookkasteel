/*
 * FUN_004c714c at 004c714c
 * undefined __register FUN_004c714c(int param_1, char param_2)
 * Address ranges: 004c714c-004c718b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c714c(int param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0x20)) && (param_2 != '\0')) {
    FUN_004c7000(param_1);
    *(char *)(param_1 + 0x20) = param_2;
    FUN_004c7068(param_1,*(int *)(param_1 + 4));
  }
  return;
}

