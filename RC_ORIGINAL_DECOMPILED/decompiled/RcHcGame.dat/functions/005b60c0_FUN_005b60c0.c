/*
 * FUN_005b60c0 at 005b60c0
 * undefined FUN_005b60c0(void)
 * Address ranges: 005b60c0-005b60ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b60c0(int param_1)

{
  if (*(int *)(param_1 + 0xbc4) != 0) {
    FUN_005cf400(*(int *)(param_1 + 0xbc4));
    _DAT_007203c0 = 0;
    *(undefined4 *)(param_1 + 0xbc4) = 0;
  }
  return;
}

