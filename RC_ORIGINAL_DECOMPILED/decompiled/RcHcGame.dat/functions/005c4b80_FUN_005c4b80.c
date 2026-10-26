/*
 * FUN_005c4b80 at 005c4b80
 * undefined FUN_005c4b80(void)
 * Address ranges: 005c4b80-005c4b98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c4b80(int param_1)

{
  if ((param_1 != 0) && (0 < *(int *)(param_1 + 4))) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    return 1;
  }
  return 0;
}

