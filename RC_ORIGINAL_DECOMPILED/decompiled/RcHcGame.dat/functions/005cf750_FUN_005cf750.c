/*
 * FUN_005cf750 at 005cf750
 * undefined FUN_005cf750(void)
 * Address ranges: 005cf750-005cf7be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005cf750(int *param_1)

{
  FUN_005c8f80();
  if (*(int *)(*param_1 + 0x114) != 0) {
    FUN_005e0530();
  }
  if (*(int *)(*param_1 + 0x118) != 0) {
    FUN_005cf400(*(int *)(*param_1 + 0x118));
    *(undefined4 *)(*param_1 + 0x118) = 0;
    _DAT_007203c0 = *(undefined4 *)(*param_1 + 0x118);
  }
  FUN_005cf400(*param_1);
  _DAT_007203c0 = 0;
  *param_1 = 0;
  return;
}

