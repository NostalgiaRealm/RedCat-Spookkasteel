/*
 * FUN_00501050 at 00501050
 * undefined __register FUN_00501050(int param_1)
 * Address ranges: 00501050-00501071
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00501050(int param_1)

{
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    FUN_00501180(param_1);
  }
  return;
}

