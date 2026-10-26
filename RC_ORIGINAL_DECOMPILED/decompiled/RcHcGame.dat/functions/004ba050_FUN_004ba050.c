/*
 * FUN_004ba050 at 004ba050
 * undefined FUN_004ba050(void)
 * Address ranges: 004ba050-004ba089
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ba050(int param_1)

{
  if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 4) != 0)) {
    FUN_005c34b0();
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_005c02b0();
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_005c02b0();
    return;
  }
  return;
}

