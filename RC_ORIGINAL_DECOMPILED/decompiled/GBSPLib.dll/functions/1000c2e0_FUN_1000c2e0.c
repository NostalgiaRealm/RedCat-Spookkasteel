/*
 * FUN_1000c2e0 at 1000c2e0
 * undefined FUN_1000c2e0(void)
 * Address ranges: 1000c2e0-1000c32e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c2e0(int param_1)

{
  if (param_1 == 0) {
    (*DAT_1014e35c)(s__WARNING__FreePoly__NULL_Poly__10038a30);
    return;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_10014360(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    _DAT_1003fde8 = 0;
  }
  FUN_10014360(param_1);
  _DAT_1003fde8 = 0;
  return;
}

