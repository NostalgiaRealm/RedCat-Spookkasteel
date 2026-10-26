/*
 * FUN_005e0530 at 005e0530
 * undefined FUN_005e0530(void)
 * Address ranges: 005e0530-005e057f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e0530(int *param_1)

{
  *(undefined4 *)*param_1 = 0xffffffff;
  FUN_005cf400(*(undefined4 *)(*param_1 + 4));
  *(undefined4 *)(*param_1 + 4) = 0;
  _DAT_007203c0 = *(undefined4 *)(*param_1 + 4);
  *(undefined4 *)(*param_1 + 4) = 0;
  FUN_005cf400(*param_1);
  _DAT_007203c0 = 0;
  *param_1 = 0;
  return;
}

