/*
 * FUN_005df030 at 005df030
 * undefined FUN_005df030(void)
 * Address ranges: 005df030-005df06e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005df030(int param_1)

{
  if ((*(int *)(param_1 + 0x14) == 1) && (*(int *)(param_1 + 4) != 0)) {
    FUN_005cf400(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    _DAT_007203c0 = 0;
  }
  FUN_005cf400(param_1);
  _DAT_007203c0 = 0;
  return;
}

