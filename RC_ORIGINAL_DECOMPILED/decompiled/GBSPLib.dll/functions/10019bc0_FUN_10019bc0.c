/*
 * FUN_10019bc0 at 10019bc0
 * undefined FUN_10019bc0(void)
 * Address ranges: 10019bc0-10019bd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10019bc0(int param_1)

{
  if ((param_1 != 0) && (0 < *(int *)(param_1 + 4))) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    return 1;
  }
  return 0;
}

